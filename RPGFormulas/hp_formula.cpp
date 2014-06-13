/* Any object that has a health variable will use this exact formula */

#include <iostream>

int main() {
	// STARTING_HEALTH should be different among characters to make varying amounts
	const int CURRENT_HEALTH = 243;
	const int CHARACTER_LEVEL = 1;
	const float PERCENT_INCREASE = 0.6; // Increase of 10% each time

	int b = CURRENT_HEALTH;
	int x = CHARACTER_LEVEL;
	int m = b * PERCENT_INCREASE;

	int health;

	for (; x <= 99; x++) {
		health = (m * x) + b;

		std::cout << "Lvl: " << x << "\t" << "Hp: " << health  << std::endl;
	}

return 0;
}
