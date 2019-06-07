#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int fxVal;
	static const int fracBits = 8;

public:
	Fixed(void);
	Fixed(Fixed const &n);
	Fixed(int const num);
	Fixed(float const num);
    ~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
	Fixed   &operator=(Fixed const &opval);
};

std::ostream & operator<<(std::ostream & o, Fixed const & res);


#endif