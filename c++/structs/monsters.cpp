#include <string>
#include <iostream>

enum MonsterType
{
	MONSTER_OGRE,
	MONSTER_DRAGON,
	MONSTER_ORC,
	MONSTER_GIANT_SPIDER,
	MONSTER_SLIME
};

struct Monster
{
	MonsterType type;
	std::string name;
	int health;
};

std::string getMonsterTypeString(Monster monster)
{
	if (monster.type == MONSTER_OGRE)
		return "Ogre";
	if (monster.type == MONSTER_DRAGON)
		return "Dragon";
	if (monster.type == MONSTER_ORC)
		return "Orc";
	if (monster.type == MONSTER_GIANT_SPIDER)
		return "Giant Spider";
	if (monster.type == MONSTER_SLIME)
		return "Slime";

	return "Unknown";
}

void printMonster(Monster monster)
{
	using namespace std;
	cout << "This " << getMonsterTypeString(monster);
	cout << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
	Monster ogre = {MONSTER_OGRE, "Torge", 145};
	Monster slime = {MONSTER_SLIME, "Blurp", 23};

	printMonster(ogre);
	printMonster(slime);

	return 0;
}
