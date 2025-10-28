/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:02:34 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/28 13:34:30 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#define FRAGTRAP "\033[1;92mScavTrap\033[0m"

FragTrap::FragTrap(void)
{
	std::cout << FRAGTRAP " Default constructor called.\n";
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << FRAGTRAP " overloaded constructor called.\n";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap &cpy) : ClapTrap(cpy)
{
	std::cout << FRAGTRAP " Copy constructor called.\n";
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap cpy)
{
	std::cout << FRAGTRAP " Assignation constructor called.\n";
	this->_name = cpy._name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_damage = cpy.attack_damage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << FRAGTRAP " Destructor function called.\n";
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << FRAGTRAP << " asks politely for a high-five : \"";
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAARG\"\n";
}