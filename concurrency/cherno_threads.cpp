#include <iostream>
#include <thread>
#include <chrono>

std::atomic<bool> s_Finished(false);

void doWork()
{
    while (!s_Finished)
    {
        std::cout << "Working...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main()
{
    std::thread worker(doWork);

    std::cin.get();
    s_Finished = true;

    worker.join();
    std::cout << "Finished.\n";

    std::cin.get();

    return 0;
}