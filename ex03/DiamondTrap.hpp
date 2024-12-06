/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:22:28 by egermen           #+#    #+#             */
/*   Updated: 2024/11/19 12:22:28 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap &other);
    void whoAmI();
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;
};

#endif
