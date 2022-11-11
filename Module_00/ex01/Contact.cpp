/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:35:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/11 19:35:21 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::getLastName() const 
{
	return m_lastName;
}

void Contact::setLastName(const std::string &lastName) 
{
	this->m_lastName = lastName;
}

std::string Contact::getPhoneNumber() const 
{
	return m_phoneNumber;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->m_phoneNumber = phoneNumber;
}

std::string Contact::getFirstName() const 
{
	return m_firstName;
}

void Contact::setFirstName(const std::string &firstName) 
{
	this->m_firstName = firstName;
}

std::string Contact::getNickname() const 
{
	return m_nickname;
}

void Contact::setNickname(const std::string &nickName) 
{
	this->m_nickname = nickName;
}

std::string Contact::getDarkestSecret() const 
{
	return m_darkestSecret;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) 
{
	this->m_darkestSecret = darkestSecret;
}