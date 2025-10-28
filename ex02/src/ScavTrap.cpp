/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:28:35 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/28 12:59:52 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#define SCAVTRAP "\033[1;96mScavTrap\033[0m"
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << SCAVTRAP;
	std::cout<< " Default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy)
{
	std::cout<< SCAVTRAP " Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &cpy)
{
	std::cout<< SCAVTRAP "Assignation constructor called" << std::endl;
	this->_name = cpy._name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_damage = cpy.attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout<< SCAVTRAP " Destructor called" << std::endl;
	return ;
}


void	ScavTrap::guardGate()
{
	//
	std::cout << "Beep boop ... " SCAVTRAP " " << this->_name << " activated gate keeper mode.";
	std::cout << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	//
	if (this->energy_points == 0 || this->hit_points <= 0)
	{
		std::cout << SCAVTRAP " " << _name << " is KO.";
		std::cout << " Unfortunately it can't attack " << target << ".";
		std::cout << std::endl;
		return ;
	}
	std::cout << SCAVTRAP " " << _name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << attack_damage << " points of damage !";
	std::cout << std::endl;
	this->energy_points --;
}