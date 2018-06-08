/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:55:47 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 11:32:30 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void	ponyOnTheHeap() {
	Pony	*pony = new Pony("Lily", "Black", "Why are you asking");

	pony->showName();
	pony->showColour();
	pony->showWeight();
	delete pony;
}

static void	ponyOntheStack() {
	Pony	pony = Pony("Brenda", "White", "The right weight");

	pony.showName();
	pony.showColour();
	pony.showWeight();
}

int		main(void) {
	ponyOnTheHeap();
	ponyOntheStack();
}
