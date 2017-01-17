#import <iostream>

using namespace std;

class Base
{
public:
	int m_public;
private:
	int m_private;
protected:
	int m_protected;
};

class Pub: public Base // note: public inheritance
{
	// Public inheritance means:
	// Public inherited members stay public (so m_public is treated as public)
	// Protected inherited members stay protected (so m_protected is treated as protected)
	// Private inherited members stay inaccessible (so m_private is inacessible)
	Pub()
	{
		m_public = 1; // okay: m_public was inherited as public
		m_private = 2; // not okay: m_private is inaccessible from derived class
		m_protected = 3; // okay: m_protected was inherited as protected
	}
};

int main()
{
	// Outside access uses the access specifiers of the class being accessed
	Base base;
	base.m_public = 1; // okay: m_public is a public in Base
	base.m_private = 2; // not okay: m_private is private in Base
	base.m_protected = 3; // not okay: m_protected is protected in Base

	Pub pub;
	pub.m_public = 1; // okay: m_public is public in Pub
	pub.m_private = 2; // not okay: m_private is inaccessible in Pub
	pub.m_protected = 3; // not okay: m_protected is protected in Pub
}
