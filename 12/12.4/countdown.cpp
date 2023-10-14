#include <iostream>

void countDown(int count)
{
    std::cout << "push " << count << '\n';
    if (count > 1)
        countDown(count-1); // countDown() calls itself recursively
    std::cout << "pop " << count << '\n';
}

int main()
{
    countDown(5);

    return 0;
}