// Contains the formula that calculates how much damage is reduced by defensive attributes
#include <iostream>

int main() {
	int character_level;
	int armor_resistance = 22; // Defensive equipment attribute
	int helmet_resistance = 9;
	int shoe_resistance = 3;
	
	int endurance;
	int resistance = armor_resistance + helmet_resistance + shoe_resistance;
	int defense;

	for (; character_level <= 71; character_level++) {
		endurance = character_level * 3;
		defense = (endurance * 2) + resistance;

		std::cout << "Lvl: " << character_level << "\t\tDefense: " << defense << "\t\tEndurance: " << endurance << "\t\tresistance: " << resistance << std::endl;
	}
return 0;
}
