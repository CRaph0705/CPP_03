/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:26:37 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/28 10:22:51 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	Clappy("Clappy");
	
	ClapTrap	Clappo("Clappo");
	
	Clappy.attack("a Moxxi poster");
	Clappy.takeDamage(5);
	Clappo.takeDamage(7);
	Clappo.attack("the Jakobs chest");
	Clappo.takeDamage(7);
	Clappy.beRepaired(10);
	Clappo.beRepaired(1);
	Clappo.attack("this pretentious mailbox");
	return (0);
}