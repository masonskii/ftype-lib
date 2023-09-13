#pragma once
#ifndef UINT8_F_H
#define UINT8_F_H
#include "pch.h"
#include <cstdint>
#include <string>

class uint8_f
{
public:
	uint8_f(void) { this->value = 0; };

	uint8_f(int value);
	uint8_f(float value);
	uint8_f(double value);
	uint8_f(const uint8_f& value);
	uint8_t number() const;
	const uint8_t* ptr() const;

	uint8_f real() const;
	uint8_f imag() const;
	uint8_f numerator() const;
	uint8_f denominator() const;
	uint8_f call() const;
	uint8_f integer() const;
	std::string hex() const;
	std::string to_oct() const;
	std::string to_dec() const;
	std::string binary() const;
	uint8_f conjugate() const;
	uint8_f bit_length() const;

	uint8_f __add__(int value);
	uint8_f __add__(float value);
	uint8_f __add__(double value);
	uint8_f __add__(const uint8_f& value);
	uint8_f __sub__(int value);
	uint8_f __sub__(float value);
	uint8_f __sub__(double value);
	uint8_f __sub__(const uint8_f& value);

	template<typename type_value>
	uint8_f __mul__(type_value value);
	
	template<typename type_value>
	uint8_f __div__(type_value value);

	template<typename type_value>
	uint8_f __mod__(type_value value);

	template<typename type_value>
	uint8_f __rmod__(type_value value);

	std::string repr() const;

	template<typename type_value>
	bool __eq__(type_value value);

	template<typename type_value>
	bool __ne__(type_value value);

	template<typename type_value>
	bool __lt__(type_value value);

	template<typename type_value>
	bool __gt__(type_value value);

	template<typename type_value>
	uint8_f __and__(type_value value);

	template<typename type_value>
	uint8_f __or__(type_value value);

	template<typename type_value>
	uint8_f __xor__(type_value value);

	template<typename type_value>
	uint8_f __lshift__(type_value value);

	template<typename type_value>
	uint8_f __rshift__(type_value value);

	uint8_f __invert__();
	template<typename type_value>
	uint8_f __pow__(type_value value);


	uint8_f operator+(int other) const {
		return uint8_f(value + other);
	}
	uint8_f operator+(float other) const {
		return uint8_f(value + static_cast<int>(other));
	}
	uint8_f operator+(double other) const {
		return uint8_f(value + static_cast<int>(other));
	}
	uint8_f operator+(const uint8_f& other) const {
		return uint8_f(value + other.value);
	}
	uint8_f operator-(int other) const {
		return uint8_f(value - other);
	}
	uint8_f operator-(float other) const {
		return uint8_f(value - static_cast<int>(other));
	}
	uint8_f operator-(double other) const {
		return uint8_f(value - static_cast<int>(other));
	}
	uint8_f operator-(const uint8_f& other) const {
		return uint8_f(value - other.value);
	}
private:
	std::uint8_t value;
};

#endif /*	UINT8_F_H END	*/
