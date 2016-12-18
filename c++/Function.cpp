#include <iostream>

// Definition of function doPrint()
void doPrint()
{
    std::cout << "In doPrint()" << std::endl;
}

// Definition of function main()
int main()
{
    std::cout << "Starting main()" << std::endl;
    doPrint(); // Interrupts main() by making a function call to doPrint(). main() is the caller
    std::cout << "ending main()" << std::endl;
    return 0;
}
