/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:26:54 by rcochran          #+#    #+#             */
/*   Updated: 2025/11/06 09:59:48 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {

private :
	std::string	_name;
	int	hit_points;
	int	energy_points;
	int	attack_damage;

public :
	ClapTrap( std::string name = "DEFAULT" );
	ClapTrap(const ClapTrap& cpy);
	ClapTrap	&operator=(const ClapTrap &cpy);
	~ClapTrap( void );
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};