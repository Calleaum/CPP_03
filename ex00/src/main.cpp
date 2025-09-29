/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:38:36 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 13:42:55 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// int main()
// {
// 	{
// 		std::cout << "Constructing" << std::endl;
// 		ClapTrap a;
// 		ClapTrap b("oui");

// 		std::cout << "\033[34mTesting\033[0m" << std::endl;
// 		a.attack("non");
// 		a.takeDamage(10);
// 		a.takeDamage(10);
// 		a.beRepaired(12);
// 		a.attack("A guy");
// 		b.beRepaired(3);
// 		for (int i = 0; i < 12; i++)
// 			b.attack("non-clone");
// 		b.beRepaired(3);
// 		std::cout << "Deconstructing" << std::endl;
// 	}
// 	return (0);
// }

int	main(void)
{
	ClapTrap	oui("Oui");
	ClapTrap	non("Non");
	ClapTrap	claptrap;
	std::cout << std::endl;

	oui.attack("Non");
	non.takeDamage(0);
	non.beRepaired(42);
	std::cout << std::endl;

	non.takeDamage(2);
	non.beRepaired(3);
	non.beRepaired(2);
	std::cout << std::endl;

	non.takeDamage(10);
	non.takeDamage(1);

	for (int i = 0; i < 12; i++)
			non.attack("??????");

	non.takeDamage(1000);
	std::cout << std::endl;
}