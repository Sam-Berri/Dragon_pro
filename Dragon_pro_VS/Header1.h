#pragma once

int basic_attack(std::string, std::string, std::string, int, int);
int boosted_attack(std::string, std::string, std::string, int, int);
void Decide_victor(std::string , std::string , int, int );

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


	void health_bar() {
		
		
		
		if (Health_points > MAX_hp * 0.99) {
			std::cout << Name << " HP[][][][][][][][][][]\n";
		}
		else if (Health_points >= MAX_hp * 0.9) {
			std::cout << Name << " HP[][][][][][][][][]--\n";
		}
		else if (Health_points >= MAX_hp * 0.8) {
			std::cout << Name << " HP[][][][][][][][]----\n";
		}
		else if (Health_points >= MAX_hp * 0.7) {
			std::cout << Name << " HP[][][][][][][]------\n";
		}
		else if (Health_points >= MAX_hp * 0.6) {
			std::cout << Name << " HP[][][][][][]--------\n";
		}
		else if (Health_points >= MAX_hp * 0.5) {
			std::cout << Name << " HP[][][][][]----------\n";
		}
		else if (Health_points >= MAX_hp * 0.4) {
			std::cout << Name << " HP[][][][]------------\n";
		}
		else if (Health_points >= MAX_hp * 0.3) {
			std::cout << Name << " HP[][][]--------------\n";
		}
		else if (Health_points >= MAX_hp * 0.2) {
			std::cout << Name << " HP[][]----------------\n";
		}
		else if (Health_points >= MAX_hp * 0.1) {
			std::cout << Name << " HP[]------------------\n";
		}
		else if (Health_points >= MAX_hp * 0.01) {
			std::cout << Name << " HP[]------------------\n";
		}
		else if (Health_points <= 0) {
			std::cout << Name << " HP--------------------\n";
		}
		else {
			std::cout << "Error\n";
		}
	}


	int Move_selector(int move_selector) {

		std::cout << "Physical Attacks -\n";
		std::cout << "1. " << Physical_attacks[0] << "\n";
		std::cout << "2. " << Physical_attacks[1] << "\n\n";

		std::cout << "Magical Attacks -\n";
		std::cout << "3. " << Magical_attacks[0] << "\n";
		std::cout << "4. " << Magical_attacks[1] << "\n\n";

		std::cout << "Key in corrisponding number\n";
		std::cin >> move_selector;

		return move_selector;

	}

	

	
};
