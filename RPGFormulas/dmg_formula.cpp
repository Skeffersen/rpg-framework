/* This is the formula that is used to calculate how much damage a character deals */
#include <iostream>
#include <cstdlib> // included for rand()

int main() {
	float character_level = 1;
	// float base_strength = 5;
	float weapon_attack = 10;
	
	float strength;
	int percent;
	float damage_formula;
	float random_number;
	int damage;
	int random;
	
	srand(time(0));

	for (; character_level <= 71; character_level++) {
		strength = (character_level * 10);
		damage_formula = ((strength * 3) + (weapon_attack * 5));
		/* If two weapons are equipped then 
		 * dmg = (((strength * 3) / 2) * ((weapon_1 * 5) + (weapon_2 * 5)));
		 * dmg *= 0.02;
		 */
		damage = damage_formula;
		random = damage;

		percent = (((strength) * weapon_attack) * 0.05);
		if (percent >= 1) {
			percent = ((strength) * weapon_attack) * 0.05;
			random_number = rand() % percent;
			random = damage_formula + random_number;
		}

		std::cout << "Lvl: " << character_level << "\t\tDamage: " << damage << "\t\trandom: " << random << "\t\tstrength: " << strength << "\t\tWeapon: " << weapon_attack << std::endl;
	}
return 0;
}
