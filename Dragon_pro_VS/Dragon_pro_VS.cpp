
#include <cstdlib>
#include <iostream>
#include <vector>
#include "Header1.h"
#include <time.h>


int main(){
	           
	
	Dragon Igneal("Igneal", "Fire", 500, 40, 60, { "Slash", "Crunch" }, { "Blast Breath","Burning Spiral" });
	Dragon Roknol("Roknol", "Earth", 700, 20, 60, { "Ram","Stomp" }, { "Terraform","Rock Blast" });

	
	
	srand(time(NULL));
	
	int perfect_hit = std::rand() % 4;
	
	

		if (perfect_hit < 3) {
			Roknol.Health_points = basic_attack(Igneal.Name, Roknol.Name, Igneal.Physical_attacks[std::rand() % 2], Roknol.Health_points, Igneal.Physical_power);
			std::cout << Roknol.Health_points;
		}
		else {
			Roknol.Health_points = boosted_attack(Igneal.Name, Roknol.Name, Igneal.Physical_attacks[std::rand() % 2], Roknol.Health_points, Igneal.Physical_power);
			std::cout << Roknol.Health_points;
		}
	
		Igneal.health_bar();
}






