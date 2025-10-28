/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:26:37 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/28 11:52:47 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	Clappy("Clap");
	
	ScavTrap	Scav("Scav");
	
	Clappy.attack("a Moxxi poster");
	Clappy.takeDamage(5);
	Scav.takeDamage(7);
	Scav.attack("the Jakobs chest");
	Scav.takeDamage(7);
	Clappy.beRepaired(10);
	Scav.beRepaired(1);
	Scav.attack("this pretentious mailbox");
	Scav.guardGate();
	return (0);
}