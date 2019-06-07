#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
private:
    // An integer to store the fixed point value
    int fxVal;
    // store the number of fractional bits.
    static const int fracBits = 8;
public:
    Fixed(void);
    ~Fixed(void);
    // copy constructor
    Fixed(Fixed const &copyCon);
    // An assignation operator overload
    Fixed   &operator=(Fixed const &opOval);
    // returns the raw value of the fixed point value.
    int getRawBits( void ) const;
    // sets the raw value of the fixed point value.
    void setRawBits( int const raw );
};

#endif