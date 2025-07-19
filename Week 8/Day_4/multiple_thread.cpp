#include <iostream>
#include "thread_pool.h"

int main() {
    ThreadPool pool(4);

    auto result1 = pool.enqueue([](int answer) { return answer; }, 42);
    auto result2 = pool.enqueue([](int a, int b) { return a + b; }, 5, 6);

    std::cout << "Result 1: " << result1.get() << std::endl;
    std::cout << "Result 2: " << result2.get() << std::endl;

    return 0;
}
