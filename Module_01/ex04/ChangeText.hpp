/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeText.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:15:24 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 16:22:50 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHANGETEXT_HPP
# define CHANGETEXT_HPP

class ChangeText
{
public:
	ChangeText();
	~ChangeText();
	int	m_replaceStr(std::string fileName, std::string s1, std::string s2);
};


#endif