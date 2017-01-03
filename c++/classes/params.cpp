#include <iostream>
#include <cassert>

class Fraction
{
private:
  int m_numerator;
  int m_denominator;

public:
  Fraction() // default constructor
  {
    m_numerator = 0;
    m_denominator = 1;
  }

  Fraction(int numerator, int denominator = 1)
  {
    assert(denominator != 0);
    m_numerator = numerator;
    m_denominator = denominator;
  }

  int getNumerator() { return m_numerator; }
  int getDenominator() { return m_denominator; }
  double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
};

int main()
{
  Fraction frac;
  std::cout << frac.getNumerator() << "/" << frac.getDenominator() << '\n';

  return 0;
}
