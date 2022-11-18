#include "app.h"
#include <iostream>;  // cout, cin
#include <format>;  // format

// read animal id's (until 0) and display species name
// display total leg count
// 
// Napi�ite program koji koriste�i te klase :
//
// unosi �ifre �ivotinja(cijeli broj) dok se ne unese 0 i ispisuje naziv vrste svake �ivotinje
// na kraju ispi�e ukupan broj nogu �ivotinja.

using namespace vsite::oop::v4;  // I added this.

int main()
{
	leg_counter lc;
	while (true) {
		std::cout << "Insert animal id: ";
		unsigned input; 
		std::cin >> input;
		if (input == 0) {
			std::cout << std::format("Number of legs: {}\n", lc.legs());
			break;
		}
		else if (input < 1 || input > 3) {
			std::cout << "Wrong input.\n";
				continue;
		}
		std::cout << std::format("{}\n",lc.add_animal(animal_factory(input).get()).c_str());
	}
}
