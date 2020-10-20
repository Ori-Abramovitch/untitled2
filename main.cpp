#include <iostream>


void funk1(int num) {
    std::cout << "Hello, World! " << num << std::endl;
    std::cout << "Hello, World! " << num << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, Fucking World!" << std::endl;
    for (int i = 0; i < 200; ++i) {
        funk1(i);
    }
    return 0;
}

