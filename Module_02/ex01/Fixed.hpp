/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:14:26 by ateak             #+#    #+#             */
/*   Updated: 2022/12/14 18:57:41 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include "iostream"
#include <cmath>

class Fixed
{
private:
	int	_value;	
	static const int _nbFractionalBits = 8;
public:
	Fixed();
	Fixed (const Fixed &num);
	Fixed (const int intNum);
	Fixed (const float floatNum);
	~Fixed();
	Fixed& operator=(const Fixed &num);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<< (std::ostream &stream, const Fixed &num);


#endif