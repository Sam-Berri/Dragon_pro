#pragma once

int basic_attack(std::string, std::string, std::string, int, int);
int boosted_attack(std::string, std::string, std::string, int, int);

class Dragon {
public:
		//attributes
	std::string Name;
	std::string Type;
	int Health_points;
	int Magic_power;
	int Physical_power;
	std::vector<std::string> Physical_attacks;
	std::vector<std::string> Magical_attacks;

	Dragon(std::string name, std::string type, int hp, int mp, int pp, std::vector<std::string> P_A, std::vector<std::string> M_A) {
		Name = name;
		Type = type;
		Health_points = hp;
		Magic_power = mp;
		Physical_power = pp;
		Physical_attacks = P_A;
		Magical_attacks = M_A;
	}




};
