/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:22:13 by egermen           #+#    #+#             */
/*   Updated: 2024/11/19 12:22:13 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("DiamonD");

    diamond.ScavTrap::attack("Target0");
    diamond.FragTrap::attack("Target01");
    diamond.ClapTrap::attack("Target02");
    diamond.whoAmI();

    std::cout << "Hit Points: " << diamond.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << diamond.getAttackDamage() << std::endl;

    diamond.guardGate();

    return 0;
}
