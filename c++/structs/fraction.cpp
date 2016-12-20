#include <iostream>

struct Fraction
{
	int numerator;
	int denominator;
};

void multiply(Fraction f1, Fraction f2)
{
	using namespace std;

	cout << static_cast<float>(f1.numerator * f2.numerator) / (f1.denominator * f2.denominator) << endl;

}

int main()
{
	using namespace std;

	Fraction f1;

	cout << "What is the first numerator? ";
	cin >> f1.numerator;
	cout << "What is the first denominator? ";
	cin >> f1.denominator;

	Fraction f2;

	cout << "What is the second numerator? ";
	cin >> f2.numerator;
	cout << "What is the second denominator? ";
	cin >> f2.denominator;

	multiply(f1, f2);

	return 0;
}
