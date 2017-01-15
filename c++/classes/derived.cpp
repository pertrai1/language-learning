#include <iostream>
using namespace std;

class Base
{
public:
	int m_id;

	Base(int id = 0) : m_id(id)
	{}

	int getId() const { return m_id; }
};

class Derived: public Base
{
public:
	double m_cost;

	Derived(double cost = 0.0, int id = 0) : Base(id), m_cost(cost)
	{}

	double getCost() const { return m_cost; }
};

int main()
{
	Derived derived(1.3, 5);
	cout << "ID: " << derived.getId() << '\n';
	cout << "Cost: " << derived.getCost() << '\n';

	return 0;
}
