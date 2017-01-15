#include <iostream>
using namespace std;
class Base
{
public:
	int m_id;

	Base(int id = 0) : m_id(id)
	{
		cout << "Base\n";
	}

	int getId() const { return m_id; }
};

class Derived: public Base
{
public:
	double m_cost;

	Derived(double cost = 0.0): m_cost(cost)
	{
		cout << "Derived\n";
	}

	double getCost() const { return m_cost; }
};

int main()
{
	cout << "Instantiating Base" << endl;
	Base cBase;

	cout << "Instantiating Derived" << endl;
	Derived cDerived;

	return 0;
}
