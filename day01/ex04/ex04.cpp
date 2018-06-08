/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:40:42 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 16:45:17 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	std::string	original = "HI THIS IS BRAIN";
	std::string	*point = &original;
	std::string &ref = original;

	std::cout << "String  : " << original << std::endl;
	std::cout << "String pointer : " << *point << std::endl;
	std::cout << "String Reference : " << ref << std::endl;
	return (0);
}
