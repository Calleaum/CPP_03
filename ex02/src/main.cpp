/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:38:36 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 11:23:20 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	oui("Oui");
	FragTrap	non("Non");
	std::cout << std::endl;

	oui.attack("Non");
	non.takeDamage(30);
	non.beRepaired(42);
	std::cout << std::endl;

	oui.highFiveGuys();
	oui.takeDamage(100);
	oui.takeDamage(1);
	oui.highFiveGuys();
	oui.beRepaired(42);
	oui.attack("Non");
	std::cout << std::endl;
}