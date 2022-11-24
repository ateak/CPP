
#include "Harl.hpp"

Harl::Harl()
{
	m_ptrToFunc[0] = &Harl::m_debug;
	m_ptrToFunc[1] = &Harl::m_info;
	m_ptrToFunc[2] = &Harl::m_warning;
	m_ptrToFunc[3] = &Harl::m_error;
	m_level[0] = "DEBUG";
	m_level[1] = "INFO";
	m_level[2] = "WARNING";
	m_level[3] = "ERROR";
}

Harl::~Harl()
{
}

void Harl::m_debug()
{
	std::cout << DEBUG << std::endl;
}

void Harl::m_info()
{
	std::cout << INFO << std::endl;
}

void Harl::m_warning()
{
	std::cout << WARNING << std::endl;
}

void Harl::m_error()
{
	std::cout << ERROR << std::endl;
}

void Harl::m_complain(std::string level)
{	
	int i;
	for (i = 0; i < 4; i++)
	{
		if (this->m_level[i] == level)
		{
			(this->*m_ptrToFunc[i])();
		}
	}
}