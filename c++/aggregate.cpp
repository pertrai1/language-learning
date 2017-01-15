#include <iostream>

class Teacher
{
private:
    std::string m_name;

public:
    Teacher(std::string name) : m_name(name)
    {}

    std::string getName() { return m_name; }
};


class Department
{
private:
    Teacher *m_teacher;
public:
    Department(Teacher *teacher = NULL) : m_teacher(teacher)
    {}
};

int main()
{
    // Create a teacher outside the scope of the Department
    Teacher *teacher = new Teacher("Rob"); // create a teacher
    {
        // Create a department and use the constructor parameter to pass
        // the teach to it
        Department dept(teacher);
    } // dept goes out of scope here and is destroyed

    // Teacher still exists here because dept did not delete m_teacher

    std::cout << teacher->getName() << " still exists!";

    delete teacher;

    return 0;
}
