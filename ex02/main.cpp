/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 00:20:15 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/24 00:21:56 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {

	FragTrap frag("frag1");
    FragTrap frag2(frag);
    FragTrap frag3;

    frag3 = frag2;
    frag3.setName("frag3");
    frag2.setName("frag2");
    frag.attack(frag2.getName());
    frag2.takeDamage(5);
    frag2.takeDamage(5);
    frag2.takeDamage(5);
    frag2.beRepaired(5);
    frag2.attack(frag3.getName());

	return 0;
}