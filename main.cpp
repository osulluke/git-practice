#include <iostream>

void function(void);

int main(void) {
    function();

    return 0;
}

void function(void) {
    std::cout << "Hello world" << std::endl;

    return;
}