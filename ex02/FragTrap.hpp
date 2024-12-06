/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:22:58 by egermen           #+#    #+#             */
/*   Updated: 2024/11/19 12:22:58 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(const std::string& name);
    ~FragTrap();
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    void attack(const std::string& target);
    void highFivesGuys();
};

#endif
