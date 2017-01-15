// Indirect Association
#include <iostream>
#include <string>

class Car
{
private:
	std::string m_name;
	int m_id;

public:
	// After the : is the caller passing in the initialization values
	Car(std::string_name, int id) : m_name(name), m_id(id)
	{}

	std::string getName() { return m_name; }
	int getId() { return m_id; }
};

class CarLot
{
private:
	// because it is static, we do not need to allocate an object of type CarLot to use it
	static Car s_carlot[4]; // the s_ is to know that this is static

	CarLot() = delete; // ensure we do not try to allocate a CarLot

public:
	static Car* getCar(int id)
	{
		for (int count = 0; count < 4; ++count)
			if (s_carlot[count].getId() == id)
				return &(s_carlot[count]);

		return nullptr;
	}
};

Car CarLot::s_carlot[4] = { Car("Prius", 4), Car("Carolla", 17), Car("Accord", 84), Car("Matrix", 62) };

class Driver
{
private:
	std::string m_name;
	int m_carId; // we associated with the Car by ID rather than pointer
}
