#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

# include <iostream>
# include <string>

class Harl
{
private:
	std::string _level[4];
	void		_debug(void);
	void		_info(void);
	void		_warning(void);
	void		_error(void);
public:
	void 		m_complain(std::string level);
	Harl();
	~Harl();
};

#endif