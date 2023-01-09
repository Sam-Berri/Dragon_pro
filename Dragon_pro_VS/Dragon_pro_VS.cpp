
#include <cstdlib>
#include <iostream>
#include <vector>
#include "Header1.h"
#include <time.h>


int main(){
	           
	
	Dragon Igneal("Igneal", "Fire",500, 500, 40, 60, { "Slash", "Crunch" }, { "Blast Breath","Burning Spiral" });
	Dragon Roknol("Roknol", "Earth",700, 700, 20, 60, { "Ram","Stomp" }, { "Terraform","Rock Blast" });
	

	
	int move_selector ,


	srand(time(NULL));
	
	
	
	Roknol.health_bar();
	Igneal.health_bar();
	std::cout << "\n\n";

	while (Roknol.Health_points > 0 && Igneal.Health_points > 0) {
	
		int user_move_selector;
		
		for (int i = 1; i < 6 ; i++) {

			user_move_selector = Igneal.Move_selector(user_move_selector);
			if (user_move_selector == 1) {
				Roknol.Health_points = basic_attack(Igneal.Name, Roknol.Name, Igneal.Physical_attacks[0], Roknol.Health_points, Igneal.Physical_power);
			}
			else if (user_move_selector == 2) {
				Roknol.Health_points = basic_attack(Igneal.Name, Roknol.Name, Igneal.Physical_attacks[1], Roknol.Health_points, Igneal.Physical_power);
			}
			else if (user_move_selector == 3) {
				Roknol.Health_points = boosted_attack(Igneal.Name, Roknol.Name, Igneal.Magical_attacks[0], Roknol.Health_points, Igneal.Magic_power);
			}
			else if (user_move_selector == 4) {
				Roknol.Health_points = basic_attack(Igneal.Name, Roknol.Name, Igneal.Magical_attacks[1], Roknol.Health_points, Igneal.Magic_power);
			}
			else {
				std::cout << "\ninvalid input\n";
			}


			std::cout << Roknol.Health_points << "\n";
			Roknol.health_bar();
			std::cout << Igneal.Health_points << "\n";
			Igneal.health_bar();
			std::cout << "\n";

			if (i == 1) {
				Igneal.Health_points = basic_attack(Roknol.Name, Igneal.Name, Roknol.Physical_attacks[0], Igneal.Health_points, Roknol.Physical_power);
				std::cout << Roknol.Health_points << "\n";
				Roknol.health_bar();
				std::cout << Igneal.Health_points << "\n";
				Igneal.health_bar();
				std::cout << "\n";
			}
			if (i == 2) {
				Igneal.Health_points = basic_attack(Roknol.Name, Igneal.Name, Roknol.Magical_attacks[1], Igneal.Health_points, Roknol.Physical_power);
				std::cout << Roknol.Health_points << "\n";
				Roknol.health_bar();
				std::cout << Igneal.Health_points << "\n";
				Igneal.health_bar();
				std::cout << "\n";
			}
			if (i == 3) {
				Igneal.Health_points = basic_attack(Roknol.Name, Igneal.Name, Roknol.Physical_attacks[0], Igneal.Health_points, Roknol.Physical_power);
				std::cout << Roknol.Health_points << "\n";
				Roknol.health_bar();
				std::cout << Igneal.Health_points << "\n";
				Igneal.health_bar();
				std::cout << "\n";
			}
			if (i == 4) {
				Igneal.Health_points = boosted_attack(Roknol.Name, Igneal.Name, Roknol.Physical_attacks[1], Igneal.Health_points, Roknol.Physical_power);
				std::cout << Roknol.Health_points << "\n";
				Roknol.health_bar();
				std::cout << Igneal.Health_points << "\n";
				Igneal.health_bar();
				std::cout << "\n";
			}
			if (i == 5) {
				Igneal.Health_points = basic_attack(Roknol.Name, Igneal.Name, Roknol.Magical_attacks[0], Igneal.Health_points, Roknol.Physical_power);
				std::cout << Roknol.Health_points << "\n";
				Roknol.health_bar();
				std::cout << Igneal.Health_points << "\n";
				Igneal.health_bar();
				std::cout << "\n";
			}
			if (i == 6) {
				Igneal.Health_points = basic_attack(Roknol.Name, Igneal.Name, Roknol.Physical_attacks[1], Igneal.Health_points, Roknol.Physical_power);
				std::cout << Roknol.Health_points << "\n";
				Roknol.health_bar();
				std::cout << Igneal.Health_points << "\n";
				Igneal.health_bar();
				std::cout << "\n";
			}
			if (i > 6) {
				Igneal.Health_points = basic_attack(Roknol.Name, Igneal.Name, Roknol.Physical_attacks[1], Igneal.Health_points, Roknol.Physical_power);
				std::cout << Roknol.Health_points << "\n";
				Roknol.health_bar();
				std::cout << Igneal.Health_points << "\n";
				Igneal.health_bar();
				std::cout << "\n";
			}
		

		}

	}


	Decide_victor(Igneal.Name, Roknol.Name, Igneal.Health_points, Roknol.Health_points);

}









