# include "Zombie.hpp"

void	randomChump( std::string m_name )
{
	Zombie stack;
	stack.setName(m_name);
	stack.announce();
}