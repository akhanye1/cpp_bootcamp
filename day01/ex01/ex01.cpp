/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:42:12 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 12:18:59 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	memoryLeak() {
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
