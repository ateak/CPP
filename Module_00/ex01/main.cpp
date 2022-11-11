#include "PhoneBook.hpp"

int	main(void)
{
	std::string str; // command
	PhoneBook	phones; //phonebook

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::cin >> str;
		if (std::cin.fail())
			exit(1);
		if (!str.compare("ADD"))
			phones.setContact();
		else if (!str.compare("SEARCH"))
			phones.getContact();
		else if (!str.compare("EXIT"))
			return (0);
		else
			std::cout << "Incorrect input. Please try again." << std::endl;
	}
}
