#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define INFO  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
# define ERROR "This is unacceptable! I want to speak to the manager now."

class Harl
{
private:
	void (Harl::*m_ptrToFunc[4])();
	std::string m_level[4];
	void m_debug(void);
	void m_info(void);
	void m_warning(void);
	void m_error(void);
public:
	void m_complain(std::string level);
	Harl();
	~Harl();
};

#endif