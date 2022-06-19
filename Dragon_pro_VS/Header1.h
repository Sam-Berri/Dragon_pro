#pragma once

int basic_attack(std::string, std::string, std::string, int, int);
int boosted_attack(std::string, std::string, std::string, int, int);

class Dragon {
public:
		//attributes
	std::string Name;
	std::string Type;
	int MAX_hp;
	int Health_points;
	int Magic_power;
	int Physical_power;
	std::vector<std::string> Physical_attacks;
	std::vector<std::string> Magical_attacks;

	Dragon(std::string name, std::string type,int max_HP, int hp, int mp, int pp, std::vector<std::string> P_A, std::vector<std::string> M_A) {
		Name = name;
		Type = type;
		MAX_hp = max_HP;
		Health_points = hp;
		Magic_power = mp;
		Physical_power = pp;
		Physical_attacks = P_A;
		Magical_attacks = M_A;
	}


	void health_bar(int Max_hp ) {
		
		
		
		if (Health_points > Health_points * 0.99) {
			std::cout << Name << " HP[][][][][][][][][][]\n";
		}
		else if (Health_points > Health_points * 0.9 || Health_points < Health_points * 0.98) {
			std::cout << Name << " HP[][][][][][][][][]--\n";
		}
		else if (Health_points > Health_points * 0.8 || Health_points < Health_points * 0.89) {
			std::cout << Name << " HP[][][][][][][][]----\n";
		}
		else if (Health_points > Health_points * 0.7 || Health_points < Health_points * 0.79) {
			std::cout << Name << " HP[][][][][][][]------\n";
		}
		else if (Health_points > Health_points * 0.6 || Health_points < Health_points * 0.69) {
			std::cout << Name << " HP[][][][][][]--------\n";
		}
		else if (Health_points > Health_points * 0.5 || Health_points < Health_points * 0.59) {
			std::cout << Name << " HP[][][][][]----------\n";
		}
		else if (Health_points > Health_points * 0.4 || Health_points < Health_points * 0.49) {
			std::cout << Name << " HP[][][][]------------\n";
		}
		else if (Health_points > Health_points * 0.4 || Health_points < Health_points * 0.49) {
			std::cout << Name << " HP[][][][]------------\n";
		}
		else if (Health_points > Health_points * 0.3 || Health_points < Health_points * 0.39) {
			std::cout << Name << " HP[][][]--------------\n";
		}
		else if (Health_points > Health_points * 0.2 || Health_points < Health_points * 0.29) {
			std::cout << Name << " HP[][]----------------\n";
		}
		else if (Health_points > Health_points * 0.01 || Health_points < Health_points * 0.19) {
			std::cout << Name << " HP[]------------------\n";
		}
		else if (Health_points < 0) {
			std::cout << Name << " HP--------------------\n";
		}
	}

};
