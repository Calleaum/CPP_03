/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:37:51 by calleaum          #+#    #+#             */
/*   Updated: 2025/08/20 13:47:16 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap Constructor for the name " << this->_name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructor for " << this->_name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit = src._hit;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
		          << " causing " << this->_attack << " damage !" << std::endl;
		this->_energy--;
	}
	else if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << target
		          << " because he has no energy points left" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << target
		          << " because he has not enough hit points" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit > 0)
	{
		this->_hit -= amount;
		if (this->_hit < 0)
			this->_hit = 0;
		std::cout	<< "ClapTrap " << this->_name << " was attacked and lost " << amount
					<< " hit points, he now has " << this->_hit << " hit points" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " Why hit a dead body ? It’s already dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_hit += amount;
		std::cout << "ClapTrap " << this->_name << " repairs and restore "
		          << amount << " HP. Now at " << this->_hit << " HP" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " can't repair no energy left" << std::endl;
	else if (this->_hit == 0)
		std::cout << "ClapTrap " << this->_name << " can't repair no HP left" << std::endl;
}