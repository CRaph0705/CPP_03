/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:26:37 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/28 13:29:18 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	ClapTrap	Clappy("Clap");
	
	ScavTrap	Scav("Scav");
	FragTrap	Frag("Frag");
	
	Clappy.attack("a Moxxi poster");
	Clappy.takeDamage(5);
	Scav.takeDamage(7);
	Scav.attack("the Jakobs chest");
	Frag.attack("a pile of dust");
	Scav.takeDamage(7);
	Clappy.beRepaired(10);
	Scav.beRepaired(1);
	Scav.attack("this pretentious mailbox");
	Frag.takeDamage(20);
	Frag.beRepaired(20);
	Scav.guardGate();
	Frag.highFivesGuys();
	return (0);
}