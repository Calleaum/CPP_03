/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:38:36 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 13:45:33 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	oui("Oui");
	ScavTrap	non("Non");
	std::cout << std::endl;

	oui.attack("Non");
	non.takeDamage(20);
	non.beRepaired(42);
	std::cout << std::endl;

	oui.guardGate();
	oui.guardGate();
	oui.guardGate();
	std::cout << std::endl;

	oui.takeDamage(100);
	oui.takeDamage(1);
	oui.beRepaired(42);
	oui.attack("Non");
	oui.guardGate();
	std::cout << std::endl;
}