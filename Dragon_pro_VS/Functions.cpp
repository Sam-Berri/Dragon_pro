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

	D2_hp = D2_hp - D1_atk * 2;

	std::cout << D2_name << " takes " << D1_atk * 2 << " Damage!\n\n";
	std::cout << "=============================================\n\n";
	return D2_hp;
}

void Health_bars() {

}