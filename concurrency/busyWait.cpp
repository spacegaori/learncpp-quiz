#include <thread>
#include <iostream>

int main ()
{
    std::atomic<bool> ready = false;
    std::thread threadB = std::thread([&]()
    {
        while (!ready) { }
        std::cout << ("Hello from B\n");
    });
    std::cout << ("Hello from A\n");
    ready = true;
    threadB.join();
    std::cout << ("Hello again from A\n");

    return 0;
}
