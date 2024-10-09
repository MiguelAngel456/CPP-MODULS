
#include "ClapTrap.hpp"
int main(void)
{
   	ClapTrap a("Artorias");
	ClapTrap b("Meier Link");
	ClapTrap c("Mata Nui Titan");

	a.attack("Meier Link");
	b.takeDamage(5);

	b.attack("Artorias");
	a.takeDamage(5);

	c.attack("Artorias");
	a.takeDamage(5);

	a.beRepaired(5);
	b.beRepaired(5);

	c.attack("Artorias");
	a.takeDamage(5);
	c.attack("Artorias");
	a.takeDamage(5);
	c.attack("Artorias");
	a.takeDamage(5);
	c.attack("Meier Link");
	b.takeDamage(5);
	c.attack("Meier Link");
	b.takeDamage(5);
	c.attack("Meier Link");
	b.takeDamage(5);
	c.attack("Meier Link");
	b.takeDamage(5);
	c.attack("Meier Link");
	b.takeDamage(5);
	c.attack("Meier Link");

	a.attack("Meier Link");
	b.takeDamage(5);
	b.beRepaired(5);

    
}