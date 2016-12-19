#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    std::cout << "Enter a larger number: ";
    int y;
    std::cin >> y;

    if (x > y)
    {
        std::cout << "Swapping the values" << std::endl;

        int temp = y;
        y = x;
        x = temp;
    }

    std::cout << "The smaller value is: " << x << "\n";
    std::cout << "The larger value is: " << y << "\n";

    return 0;
}
