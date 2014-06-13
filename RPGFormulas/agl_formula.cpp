/**************************************************************************************************
 * Formula used to calculate teh agility attribute
 * Aglility is the character stat that is used as speed
 * It's combined with the speed and weight stats to calculate how many turns you get.
 * It's also used with the opponents accuracy stat to 
 * calculate whether they hit you or you evade them.
 * Accuracy and critical rates are also included in this file because they are depedent on
 * the accuracy stat
 *
 * agl_formula.cpp
 * RPGFormulas
 *
 * Created by Derek Kadwell on 06/12/14
 * Copyright (c) 2014 DMajorStudios. All rights reserved
 **************************************************************************************************/

#include <iostream>
// #include <cstdlib>

int main() {
	int agility;
	int speed = 10; // Speed is achieved from shoes
	int final_speed;
	int right_hand_weight = 1;
	int left_hand_weight = 1; // Weight is accumulated from equipment
	int helmet_weight = 4;
	int armor_weight = 9;
	int weight;
	int accuracy;

	int luck;
	
	float evasion;
	int hit_rate;
	int critical_rate;

	srand(time(0));

	for(int character_level = 1; character_level <= 71; character_level++) {
		agility = (character_level * 3) + 17;
		accuracy = (character_level * 5) + 35;
		luck = character_level * 2;
		evasion = speed + luck;
		
		weight = right_hand_weight + left_hand_weight + helmet_weight + armor_weight;
		final_speed = (agility - weight) + speed;

		// This comes to be the chance that you'll miss
		// Enemy speed and luck divided by character speed and accuracy
		hit_rate = (((float)final_speed + (float)luck) / ((float)final_speed + (float)accuracy)) * 10.0;
		
		// Character (speed + luck) / enemy (speed)
		critical_rate = ((float)final_speed + (float)luck) / (float)final_speed;

		std::cout << "Lvl: " << character_level << "\t\tSpeed: " << final_speed << "\t\tAgility: " << agility << "\t\tEquipment speed: " << speed << "\t\tWeight: " << weight << std::endl;
		std::cout << hit_rate << "%" << "\t" << critical_rate << "%" << "\t\tAccuracy: " << accuracy << "\n" << std::endl;
	}
return 0;
}
