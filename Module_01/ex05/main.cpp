#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	std::cout << "Correct requests:" << std::endl;
	harl.m_complain("DEBUG");
	harl.m_complain("INFO");
	harl.m_complain("WARNING");
	harl.m_complain("ERROR");

	std::cout << "\nIncorrect requests:" << std::endl;
	harl.m_complain("DEBU");
	harl.m_complain("Debug");
	harl.m_complain("debug");
	harl.m_complain("123");
	harl.m_complain("");

	std::cout << "\nMixed requests:" << std::endl;
	harl.m_complain("ERROR");
	harl.m_complain("INFO");
	harl.m_complain("INFORM");

	return (0);
}