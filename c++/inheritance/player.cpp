#include <iostream>

class Person
{
public:
	std::string m_name;
	int m_age;

	Person(std::string name = "", int age = 0) : m_name(name), m_age(age)
	{}

	std::string getName() const { return m_name; }
	int getAge() const { return m_age; }
};

class BaseballPlayer : public Person
{
public:
	double m_battingAverage;
	int m_homeRuns;

	BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
		: m_battingAverage(battingAverage), m_homeRuns(homeRuns)
		{}
};

class Employee: public Person
{
public:
	double m_hourlySalary;
	long m_employeeID;

	Employee(double hourlySalary, long employeeID)
		: m_hourlySalary(hourlySalary), m_employeeID(employeeID)
		{}

	void printNameAndSalary() const
	{
		std::cout << m_name << ": " << m_hourlySalary << '\n';
	}
};

int main()
{
	// Create a new BaseballPlayer object
	BaseballPlayer joe;
	Employee frank(20.25, 12345);
	frank.m_name = "Frank";
	// Assign it a name (we can do this directly because m_name is public)
	joe.m_name = "Joe";
	frank.printNameAndSalary();
	// Print out the name
	std::cout << joe.getName() << '\n';

	return 0;
}

