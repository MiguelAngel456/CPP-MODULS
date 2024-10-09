
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
/* 	std::cout << "-----PARTE DE CLAPTRAP-----" << std::endl;
	ClapTrap a("Artorias");
	ClapTrap ml("Meier Link");

	a.attack("Meier Link");
	ml.takeDamage(9);

	ml.beRepaired(5);
	a.takeDamage(7);
 */

	std::cout << "----------------------------" << std::endl;
 	std::cout << "-----PARTE DE SCRAVTRAP-----" << std::endl;
	ScavTrap as("Adam Sandler");
	ScavTrap as2(as);
	
	as.guardGate();
	as.attack("Artorias");
	as.takeDamage(99);

	as2.attack("Adam Sandler");
	as.takeDamage(100);
	as2.beRepaired(10);
	as.beRepaired(10);

    
}