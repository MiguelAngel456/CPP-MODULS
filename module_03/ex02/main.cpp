
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{

/* 	std::cout << "-----PARTE DE CLAPTRAP-----" << std::endl;
	ClapTrap a("Artorias");
	ClapTrap ml("Meier Link");

	a.attack("Meier Link");
	ml.takeDamage(9);

	ml.beRepaired(5);
	a.takeDamage(7);


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
 */

	std::cout << "----------------------------" << std::endl;
	std::cout << "-----PARTE DE FRAGTRAP------" << std::endl;
	FragTrap af("Aragorn");
	FragTrap af2(af);
	af2.attack("Adam Sandler");
	af.takeDamage(90);
	af.beRepaired(10);
	
	af.highFivesGuys();

	af.attack("Meier Link");
	af.takeDamage(100);
	af.beRepaired(10);
	
	return 0;
}
