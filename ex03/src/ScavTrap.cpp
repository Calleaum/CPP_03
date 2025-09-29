/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 08:35:36 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 13:33:16 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->_guardGate = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->_guardGate = copy._guardGate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->_guardGate = false;
	std::cout << "ScavTrap Constructor for the name " << this->_name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << this->_name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit = src._hit;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " damage !" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << ", because he has no energy points left" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is not able to attack " << target << ", because he has not enough hit points" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_guardGate == false && this->_hit > 0)
	{
		this->_guardGate = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate" << std::endl;
	}
	else if (_guardGate && this->_hit > 0)
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " cannot guard the gate because he is dead" << std::endl;
}