/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChangeText.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:15:29 by ateak             #+#    #+#             */
/*   Updated: 2022/11/23 19:46:26 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "ChangeText.hpp"

ChangeText::ChangeText(){}
ChangeText::~ChangeText(){}

int ChangeText::replaceStr(std::string fileName, std::string s1, std::string s2)
{
	std::string		bufStr;
	size_t			searchPos; 
	std::ifstream	originalFile;
	std::ofstream	newFile;

	originalFile.open(fileName);
	if (!originalFile.is_open())
	{
		std::cerr << "Error: cannot open and read the file " << fileName << std::endl;
		return 1;
	}

	newFile.open(fileName + ".replace");
	if (!newFile.is_open())
	{
		std::cerr << "Error: cannot open and write to the file" << fileName + ".replace" << std::endl;
		return 1;
	}

	searchPos = 0;
	while (!originalFile.eof()) 
	{
		getline(originalFile, bufStr);
		while (bufStr.find(s1, searchPos) != std::string::npos) // std::string::npos - константа, самое большое возможное число типа size_t
		{
			searchPos = bufStr.find(s1, searchPos);
			bufStr.erase(searchPos, s1.length());
			bufStr.insert(searchPos, s2);
			searchPos = searchPos + s2.length();	
		}
		newFile << bufStr;
		searchPos = 0;
		if (!originalFile.eof())
			newFile << std::endl;
	}
	originalFile.close(); 
	newFile.close();

	return 0;
}
