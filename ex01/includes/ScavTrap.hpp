/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:28:25 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/28 12:55:34 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

// To inherit from a class, use the : symbol.
class ScavTrap : public ClapTrap
{

public :
	ScavTrap( std::string name );
	ScavTrap(const ScavTrap& cpy);
	ScavTrap	&operator=(const ScavTrap &cpy);
	~ScavTrap( void );

	void	attack(const std::string& target);
	void	guardGate();
};