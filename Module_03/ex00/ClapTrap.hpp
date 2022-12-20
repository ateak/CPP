#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
private:
	std::string _Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const std::string &name, int hp, int energy, int damage);
	ClapTrap(const ClapTrap &val);
	ClapTrap& operator=(const ClapTrap &val);
	~ClapTrap();

	const std::string&	getName() const;
	int					getHP() const;
	int					getEnergy() const;
	int					getDamage() const;
	void				setName(const std::string name);
	void				setHP(const int hp);
	void				setEnegy(const int energy);
	void				setDamage(const int damage);

	void 				attack(const std::string& target);
	void 				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
};


#endif