#include <string>
#include <iostream>

int main()
{
    std::cout << "Please enter your full name: ";
    std::string name;
    std::getline(std::cin, name);


    std::cout << "Please enter your age: ";
    // std::string age;
    int age;
    std::cin >> age;

    //std::cout << "You have lived " << name.length() << " years  for each letter in your name\n";
    int letters = name.length();
    double agePerLetter = static_cast<double>(age) / letters;
    std::cout << "You've lived " << agePerLetter << " years for each letter in your name.\n";

    return 0;
}
