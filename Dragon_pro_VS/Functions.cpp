#include <iostream>
#include <cstdlib>
#include <vector>
#include "Header1.h"
#include <time.h>


int basic_attack(std::string D1_name, std::string D2_name, std::string D1_move, int D2_hp, int D1_atk) {

	std::cout << D1_name << " uses " << D1_move << "!\n\n";

	D2_hp -= D1_atk;

	std::cout << D2_name << " takes " << D1_atk << " Damage.\n\n";
	std::cout << "=============================================\n\n";
	return D2_hp;
}

int boosted_attack(std::string D1_name, std::string D2_name, std::string D1_move, int D2_hp, int D1_atk) {

	std::cout << D1_name << " uses " << D1_move << "!\n\n";

	std::cout << "Perfect hit!\n\n";

		D2_hp = D2_hp - D1_atk * 2;

	std::cout << D2_name << " takes " << D1_atk * 2 << " Damage!\n\n";
	std::cout << "=============================================\n\n";
	return D2_hp;
}

void Decide_victor(std::string d1_name, std::string d2_name,int d1_hp,int d2_hp) {
	if (d1_hp > d2_hp) {
		std::cout << "\n" << d1_name << " Wins!\n";
	}
	if (d2_hp > d1_hp) {
		std::cout << "\n" << d2_name << " Wins!\n";
	}
}


int Computers_move(int move_selector) {


}