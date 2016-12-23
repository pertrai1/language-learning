#include <iostream>

namespace Animals
{
	enum Animals
	{
		ANIMAL_CHICKEN,
		ANIMAL_DOG,
		ANIMAL_CAT,
		ANIMAL_ELEGHANT,
		ANIMAL_DUCK,
		ANIMAL_SNAKE,
		ANIMAL_MAX_ANIMALS
	};

}

int main()
{
	int legs[Animals::ANIMAL_MAX_ANIMALS] = {2, 4, 4, 4, 2, 0};
	std::cout << "The elephant has " << legs[Animals::ANIMAL_ELEGHANT] << " legs\n";

	return 0;
}
