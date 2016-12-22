#include <iostream>

enum Animal
{
	ANIMAL_PIG,
	ANIMAL_CHICKEN,
	ANIMAL_GOAT,
	ANIMAL_CAT,
	ANIMAL_DOG,
	ANIMAL_OSTRICH
};

std::string getAnimalName(Animal animal)
{
	switch(animal)
	{
		case ANIMAL_PIG:
			return "pig";
			break;
		case ANIMAL_CHICKEN:
			return "chicken";
			break;
		case ANIMAL_GOAT:
			return "goat";
			break;
		case ANIMAL_CAT:
			return "cat";
			break;
		case ANIMAL_DOG:
			return "dog";
			break;
		case ANIMAL_OSTRICH:
			return "ostrich";
			break;
		default:
			std::cout << "Unknown animal\n";
			return 0;
	}
}

void printNumberOfLegs(Animal animal)
{
	std::cout << "A " << getAnimalName(animal) << " has ";
	switch(animal)
	{
		case ANIMAL_PIG:
		case ANIMAL_GOAT:
		case ANIMAL_CAT:
		case ANIMAL_DOG:
			std::cout << "2";
			break;
		case ANIMAL_CHICKEN:
		case ANIMAL_OSTRICH:
			std::cout << "4";
			break;
		default:
			std::cout << "Unknown type of animal\n";
	}

	std::cout << " legs.\n";
}

int main()
{
	printNumberOfLegs(ANIMAL_CAT);
	printNumberOfLegs(ANIMAL_CHICKEN);

	return 0;
}
