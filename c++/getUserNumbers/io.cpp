#include <iostream>
int readNumber()
{
    std::cout << "Please enter a number: ";
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The number that you entered is: " << x << std::endl;
}

