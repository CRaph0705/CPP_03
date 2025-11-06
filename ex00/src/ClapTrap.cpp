/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:26:50 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/06 09:58:17 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	std::cout<< "ClapTrap overloaded constructor called" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	std::cout<< "ClapTrap Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cpy)
{
	std::cout<< "ClapTrap Assignation constructor called" << std::endl;
	this->_name = cpy._name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_damage = cpy.attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout<< "ClapTrap Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	//
	if (this->energy_points == 0 || this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " is KO.";
		std::cout << " Unfortunately it can't attack " << target << ".";
		std::cout << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << attack_damage << " points of damage !";
	std::cout << std::endl;
	this->energy_points --;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	//
	this->hit_points -= amount;
	std::cout << "ClapTrap " << _name;
	std::cout << " has taken " << amount;
	std::cout << " points of damage !";
	
	std::cout << std::endl;

	std::cout << "ClapTrap " << _name;
	std::cout << " current hit points : " << this->hit_points;
	
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	//
	if (this->energy_points == 0 || this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " is KO and can't repair itself.";
		std::cout << std::endl;
		return ;
	}
	this->hit_points += amount;
	std::cout << "ClapTrap " << _name;
	std::cout << " has recovered ";
	std::cout << amount << " hit points.";
	std::cout << std::endl;

	std::cout << "ClapTrap " << _name;
	std::cout << " current hit points : " << this->hit_points;

	std::cout << std::endl;
	this->energy_points --;
}