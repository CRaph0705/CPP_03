/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:26:54 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/27 16:17:25 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {

private :
	std::string	_name;
	int	hit_points = 10;
	int	energy_points = 10;
	int	attack_damage = 0;

public :
	ClapTrap( std::string name );
	ClapTrap(const ClapTrap& cpy);
	ClapTrap	&operator=(const ClapTrap &cpy);
	~ClapTrap( void );
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

} ;