# include "Zombie.hpp"

Zombie::Zombie()
{
	m_name = "default name";
	std::cout << m_name << " appeared" << std::endl;
}

Zombie::Zombie( std::string name )
{
	m_name = name;
	std::cout << m_name << " was born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << m_name << " is dead!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
	
void	Zombie::setName(const std::string &m_name)
{
	this->m_name = m_name;
}