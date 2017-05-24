#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int			fixedPoint;
		static const int	numOfFractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(const Fixed &rhs);
};


#endif
