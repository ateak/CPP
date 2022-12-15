/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:14:26 by ateak             #+#    #+#             */
/*   Updated: 2022/12/15 18:07:20 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
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
	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();
	Fixed operator+(const Fixed &num) const;
	Fixed operator-(const Fixed &num) const;
	Fixed operator*(const Fixed &num) const;
	Fixed operator/(const Fixed &num) const;
	bool operator<(const Fixed &num) const;
	bool operator>(const Fixed &num) const;
	bool operator<=(const Fixed &num) const;
	bool operator>=(const Fixed &num) const;
	bool operator==(const Fixed &num) const;
	bool operator!=(const Fixed &num) const;

	static Fixed& min(Fixed &num1, Fixed &num2);
	static Fixed& max(Fixed &num1, Fixed &num2);
	const static Fixed& min(const Fixed &num1, const Fixed &num2);
	const static Fixed& max(const Fixed &num1, const Fixed &num2);
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<< (std::ostream &stream, const Fixed &num);


#endif