/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:44:11 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 20:30:54 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(std::string filter)
{
	std::string clevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	_filterLevel = 0;
	while (_filterLevel < 4)
	{
		if (clevel[_filterLevel] == filter)
			break;
		_filterLevel++;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "42 students are always trying to figure out ";
	std::cout << "how to cover up their messy project!";
	std::cout << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I can even read this code. What a mess! ";
	std::cout << "This Gordian Knot won't even pay attention to my cat!";
	std::cout << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "What is this suspicious code? ";
	std::cout << "Please, do not contaminate my clear mind. ";
	std::cout << "My stack memory is getting filled by disgusting trash!";
	std::cout << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Look at this! no error control, leaks on everywhere and... ";
	std::cout << "what is this? Segmentation Fault? That's crazy!";
	std::cout << std::endl << std::endl;
}

void	Harl::complain(void)
{
	std::string clevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*flevel[4])(void) = {&Harl::debug, &Harl::info, \
										&Harl::warning, &Harl::error};
	for (int i = _filterLevel; i < 4; i++)
		(this->*flevel[i])();
	if (_filterLevel == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl;
	}
}
