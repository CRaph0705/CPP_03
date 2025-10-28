/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:02:28 by rcochran          #+#    #+#             */
/*   Updated: 2025/10/28 13:27:51 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	//
private :

public :
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap &cpy);
	FragTrap	&operator=(FragTrap cpy);
	~FragTrap(void);
	
	void highFivesGuys(void);
};