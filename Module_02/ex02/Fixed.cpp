/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:14:20 by ateak             #+#    #+#             */
/*   Updated: 2022/12/15 18:20:15 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &num)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = num;
}

Fixed::Fixed(const int intNum)
{
	//std::cout << "Int constructor called" << std::endl;	
	_value = intNum << _nbFractionalBits;
}

Fixed::Fixed(const float floatNum)
{
	//std::cout << "Float constructor called" << std::endl;
	_value = std::roundf(floatNum * (1 << _nbFractionalBits));
}

Fixed &Fixed::operator=(const Fixed &num)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this == &num)
		return *this;
	this->_value = num.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return (_value);
}

void Fixed::setRawBits(const int raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / float(1 << _nbFractionalBits));
}

int		Fixed::toInt(void) const
{
	return (_value >> _nbFractionalBits);
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;

	++(*this);
	return old;
}
Fixed Fixed::operator++()
{
	++_value;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed old = *this;

	--(*this);
	return old;
}
Fixed Fixed::operator--()
{
	--_value;
	return *this;
}

Fixed Fixed::operator+(const Fixed &num) const
{
	return (this->toFloat() + num.toFloat());
}
Fixed Fixed::operator-(const Fixed &num) const
{
	return (this->toFloat() - num.toFloat());
}
Fixed Fixed::operator*(const Fixed &num) const
{
	return (this->toFloat() * num.toFloat());
}
Fixed Fixed::operator/(const Fixed &num) const
{
	return (this->toFloat() / num.toFloat());
}

bool Fixed::operator<(const Fixed &num) const
{
	return (this->getRawBits() < num.getRawBits());
}
bool Fixed::operator>(const Fixed &num) const
{
	return (this->getRawBits() > num.getRawBits());
}
bool Fixed::operator<=(const Fixed &num) const
{
	return (this->getRawBits() <= num.getRawBits());
}
bool Fixed::operator>=(const Fixed &num) const
{
	return (this->getRawBits() >= num.getRawBits());
}
bool Fixed::operator==(const Fixed &num) const
{
	return (this->getRawBits() == num.getRawBits());
}
bool Fixed::operator!=(const Fixed &num) const
{
	return (this->getRawBits() != num.getRawBits());
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	return (num1.getRawBits() < num2.getRawBits() ? num1 : num2);
}
Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
	return (num1.getRawBits() > num2.getRawBits() ? num1 : num2);
}
const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
	return (num1.getRawBits() < num2.getRawBits() ? num1 : num2);
}
const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
	return (num1.getRawBits() > num2.getRawBits() ? num1 : num2);
}


std::ostream& operator<< (std::ostream &stream, const Fixed &num)
{
	stream << num.toFloat();
	return (stream);
}