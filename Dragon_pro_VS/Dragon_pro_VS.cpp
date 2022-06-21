
#include <cstdlib>
#include <iostream>
#include <vector>
#include "Header1.h"
#include <time.h>


int main(){
	           
	
	Dragon Igneal("Igneal", "Fire",500, 500, 40, 60, { "Slash", "Crunch" }, { "Blast Breath","Burning Spiral" });
	Dragon Roknol("Roknol", "Earth",700, 700, 20, 60, { "Ram","Stomp" }, { "Terraform","Rock Blast" });

	
	
	srand(time(NULL));
	
	
	
	Roknol.health_bar();
	Igneal.health_bar();

	while (Roknol.Health_points >= 0 && Igneal.Health_points >= 0) {
	
		
		Roknol.Health_points = basic_attack(Igneal.Name, Roknol.Name, Igneal.Physical_attacks[0], Roknol.Health_points, Igneal.Physical_power);
		std::cout << Roknol.Health_points << "\n";
		Roknol.health_bar();
		std::cout << Igneal.Health_points << "\n";
		Igneal.health_bar();
		std::cout << "\n";
		Igneal.Health_points = basic_attack(Roknol.Name, Igneal.Name, Roknol.Physical_attacks[0], Igneal.Health_points, Roknol.Physical_power);
		std::cout << Roknol.Health_points << "\n";
		Roknol.health_bar();
		std::cout << Igneal.Health_points << "\n";
		Igneal.health_bar();
		std::cout << "\n";
		Roknol.Health_points = boosted_attack(Igneal.Name, Roknol.Name, Igneal.Magical_attacks[0], Roknol.Health_points, Igneal.Magic_power);
		std::cout << Roknol.Health_points << "\n";
		Roknol.health_bar();
		std::cout << Igneal.Health_points << "\n";
		Igneal.health_bar();
		std::cout << "\n";
		Igneal.Health_points = boosted_attack(Roknol.Name, Igneal.Name, Roknol.Magical_attacks[1], Igneal.Health_points, Roknol.Magic_power);
		std::cout << Roknol.Health_points << "\n";
		Roknol.health_bar();
		std::cout << Igneal.Health_points << "\n";
		Igneal.health_bar();
		std::cout << "\n";
	}
}






