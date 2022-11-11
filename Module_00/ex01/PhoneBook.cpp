/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:35:24 by ateak             #+#    #+#             */
/*   Updated: 2022/11/11 19:35:25 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip> // для setw

PhoneBook::PhoneBook()
{
	m_index = 0;
	m_totalContacts = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::setContact()
{
	std::string str[m_fieldsNumber];

	std::cout << "Enter first name: ";
	std::cin >> str[0];
	if (std::cin.fail())
		exit(1); 
	std::cout << "Enter last name: ";
	std::cin >> str[1];
	if (std::cin.fail())
		exit(1); 
	std::cout << "Enter nickname: ";
	std::cin >> str[2];
	if (std::cin.fail())
		exit(1); 
	std::cout << "Enter phone number: ";
	std::cin >> str[3];
	if (std::cin.fail())
		exit(1); 
	std::cout << "Enter darkest secret: ";
	std::cin >> str[4];
	if (std::cin.fail())
		exit(1);
	fillContact(str);
	incrementIndex();
}

void	PhoneBook::fillContact(const std::string str[m_fieldsNumber])
{
	m_contacts[m_index].setFirstName(str[0]);
	m_contacts[m_index].setLastName(str[1]);
	m_contacts[m_index].setNickname(str[2]);
	m_contacts[m_index].setPhoneNumber(str[3]);
	m_contacts[m_index].setDarkestSecret(str[4]);
}

void	PhoneBook::incrementIndex()
{
	if (m_index < 7)
		m_index++;
	else
		m_index = 0;
	if (m_totalContacts <= 7)
		m_totalContacts++;
}

void	PhoneBook::getContact() const
{
	std::string index;
	int			id;

	if (m_totalContacts == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}
	for (int i = 0; i < m_totalContacts; i++)
	{
		std::cout << std::setw(10) << "index" << '|' << std::setw(10) << "first name" << '|'
		<< std::setw(10) << "last name" << '|' << std::setw(10) << "nickname" << '|' << std::endl;
		std::cout << std::setw(10) << i + 1 << '|';
		displayField(m_contacts[i].getFirstName());
		displayField(m_contacts[i].getLastName());
		displayField(m_contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "Enter the index (1-8): ";
	std::cin >> id;
	if (std::cin.fail() || id < 1 || id > 8)
	{
		if (std::cin.eof())
			exit(1);
		std::cout << "Wrong index!" << std::endl;
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		return ;
	}
	else {
		if (id > m_totalContacts)
		{
			std::cout << "This contact does not exist" << std::endl;
			return ;
		}
		std::cout << "First name: " << m_contacts[id - 1].getFirstName() << std::endl;
		std::cout << "Last name: " << m_contacts[id - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << m_contacts[id - 1].getNickname() << std::endl;
		std::cout << "Phone number: " << m_contacts[id - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << m_contacts[id - 1].getDarkestSecret() << std::endl;
	}
	return;
}

void	PhoneBook::displayField(std::string field) const
{
	std::cout << std::setw(10);
	if (field.length() > 10)
		std::cout << field.substr(0, 9) + '.';
	else
		std::cout << field;
	std::cout << '|';
}