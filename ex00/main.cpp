/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:24:01 by egermen           #+#    #+#             */
/*   Updated: 2024/11/19 12:24:01 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() 
{
    ClapTrap claptrap("SeveruS");

    claptrap.attack("Target0");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Target1");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    return 0;
}
