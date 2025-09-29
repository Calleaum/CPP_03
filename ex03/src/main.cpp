/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:38:36 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 11:23:43 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	oui("Oui");
	DiamondTrap	Oui;
	DiamondTrap	non("Non");
	DiamondTrap	Non;
	std::cout << std::endl;

	oui.whoAmI();
	Oui.whoAmI();
	non.whoAmI();
	Non.whoAmI();
	std::cout << std::endl;

	oui.attack("Non");
	non.takeDamage(30);
	non.beRepaired(42);
	non.guardGate();
	non.guardGate();
	non.highFiveGuys();
	std::cout << std::endl;

	oui.takeDamage(100);
	oui.takeDamage(1);
	oui.beRepaired(42);
	oui.attack("Non");
	oui.guardGate();
	oui.highFiveGuys();
	std::cout << std::endl;
}