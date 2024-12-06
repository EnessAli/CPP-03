/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:23:01 by egermen           #+#    #+#             */
/*   Updated: 2024/11/19 12:23:01 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap claptrap("SeveruS");
    claptrap.attack("Target0");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Target1");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    std::cout << std::endl << std::endl;

    ScavTrap scavtrap("NickName");
    scavtrap.attack("Target2");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
    scavtrap.attack("Target3");
    scavtrap.takeDamage(100);
    scavtrap.beRepaired(5);
    
    std::cout << std::endl << std::endl;

    FragTrap fragtrap("NickSeveruS");
    fragtrap.attack("Target4");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();
    fragtrap.attack("Target5");
    fragtrap.takeDamage(100);
    fragtrap.beRepaired(10);

    std::cout << std::endl << std::endl;

    return 0;
}
