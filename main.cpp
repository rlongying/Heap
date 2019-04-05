#include <iostream>
#include "heap.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    heap<int> h;

    h.push(1);
    h.push(2);
    h.push(3);
    h.push(4);
    h.push(5);
    h.push(6);

    std::cout << h << std::endl;
    std::cout << h.pop() << std::endl;

    std::cout << h << std::endl;
    std::cout << h.size() << ", ";
    std::cout << h.pop() << std::endl;

    std::cout << h << std::endl;

    std::cout << std::boolalpha << h.is_empty() << "\n";
    h.clear();
    std::cout << "print..." << h << "\n";
    std::cout << std::boolalpha << h.is_empty() << "\n";



    return 0;
}