/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:09:20 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 17:19:30 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

class	Brain {
	private:
		std::string	_leftHemisphere;
		std::string	_rightHemisphere;
		std::string	_address;

	public:
		Brain(void);
		void		identify(void);
};

#endif
