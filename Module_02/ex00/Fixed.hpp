/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:14:26 by ateak             #+#    #+#             */
/*   Updated: 2022/12/14 17:29:32 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include "iostream"

class Fixed
{
private:
	int	_value;	
	static const int _nbFractionalBits = 8;
public:
	Fixed();
	Fixed (const Fixed &value);
	Fixed& operator=(const Fixed &value);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif