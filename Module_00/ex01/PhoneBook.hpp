/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:34:55 by ateak             #+#    #+#             */
/*   Updated: 2022/11/11 19:34:56 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
private:
	static const int 	m_maxContactsNumber = 8;
	static const int	m_fieldsNumber = 5;
	Contact				m_contacts[m_maxContactsNumber];
	int					m_index;
	int					m_totalContacts;
	void				incrementIndex();
	void				fillContact( const std::string str[m_fieldsNumber] ); //fillBook
	void				displayField( const std::string field) const; 
	
public:

	PhoneBook();
	~PhoneBook();

	void	setContact();
	void	getContact() const ;

};

#endif