#include <string>
#include <iostream>

class Ball 
{
private:
    std::string m_color;
    double m_radius;

public:
    // Ball()
    // {
    //     m_color = "Black";
    //     m_radius = 10.0;
    // }

    // Ball(const std::string &color)
    // {
    //     m_color = color;
    //     m_radius = 10.0;
    // }

    Ball(double radius)
    {
        m_color = "Black";
        m_radius = radius;
    }

    Ball(const std::string &color = "Black", double radius = 10.0)
    {
        m_color = color;
        m_radius = radius;
    }

    void print() {std::cout << "Color: " << m_color << ", radius: " << m_radius << '\n'; }
};

int main()
{
    Ball def;
    def.print();

    Ball blue("Blue");
    blue.print();

    Ball twenty(20.0);
    twenty.print();

    Ball blueTwenty("blue", 20.0);
    blueTwenty.print();

    return 0;
}