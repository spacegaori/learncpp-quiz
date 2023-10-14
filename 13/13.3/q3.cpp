#include <array>
#include <cassert>
#include <iostream>

class Stack
{
private:
    using Array = std::array<int, 10>;
    using Index = Array::size_type;
    
    Array m_array {};
    Index m_next{ 0 };
public:
    void reset()
    {
        m_next = 0;
    }

    bool push(int value)
    {
        if (m_next == m_array.size())
            return false;
        m_array[m_next++] = value;
        return true;
    }

    int pop()
    {
        assert(m_next > 0 && "Cannot pop empty stack");
        return m_array[--m_next];
    }
    
    void print()
    {
        std::cout << "( ";
        for (Index i{ 0 }; i < m_next; ++i)
            std::cout << m_array[i] << ' ';
        std::cout << ")\n";
    }
};

int main()
{
	Stack stack;
	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.reset();
	stack.print();

	return 0;
}