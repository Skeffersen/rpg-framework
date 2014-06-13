#include <iostream>
#include <cmath>

// These are possible formulas for calculating the exp need to level up.
// These are just quick starts and need to be tested in the game environment.

int main() {
	double answer;
	double answer2;
	float b1 = 1;
	float a2 = 1;
	float b2 = 100;
	for (int x1 = 1; x1 < 99; x1++) {
		// (1.4^x+6)
		answer += pow(b1, (x1));
		answer += 106 * (x1 / 1.6);
		answer = (int)answer;

		answer2 = a2 + (b2 * x1);
		answer2 += 106;
		
		std::cout << "Lvl " << x1 << " : "<< answer << "\t\tLvl " << x1 << " : " <<  answer2 << std::endl;
	}
return 0;
}
