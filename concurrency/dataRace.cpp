#include <chrono>
#include <thread>
#include <iostream>

auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(10);

int main()
{
    std::atomic<int> counter { 0 };

    std::thread threadB = std::thread([&](){
        while (std::chrono::steady_clock::now() < deadline)
            printf("B: %d\n", ++counter);
    });

    while (std::chrono::steady_clock::now() < deadline)
        printf("A: %d\n", ++counter);

    threadB.join();
    
    return 0;
}