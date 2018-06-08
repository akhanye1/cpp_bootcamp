/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:47:51 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 11:29:47 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {
	private:
		std::string	_name;
		std::string	_colour;
		std::string	_weight;

	public:
		Pony(std::string name, std::string colour, std::string weight);
		~Pony(void);
		void		showName(void) const;
		void		showColour(void) const;
		void		showWeight(void) const;
};

#endif
