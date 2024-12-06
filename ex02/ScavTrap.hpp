/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:23:16 by egermen           #+#    #+#             */
/*   Updated: 2024/11/19 12:23:16 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    void attack(const std::string& target);
    void guardGate();
};

#endif
