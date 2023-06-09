#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		int getRawBits() const;
		void setRawBits(int const rawBits);

	private:
		int fixedValue;
		static const int fractalBits = 8;
};

#endif