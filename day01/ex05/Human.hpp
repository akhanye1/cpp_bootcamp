/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:21:16 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/06 17:23:45 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human {
	private:
		const std::string	_brain;
	public:
		void				identify(void);
		Brain				*getBrain(void);

};
