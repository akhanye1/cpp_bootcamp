#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
	private:
		int					_fixedPointValue;
		static const int	_fractionBits;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed				operator+(Fixed const &rhs) const;
		Fixed&				operator=(Fixed const &rhs);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif
