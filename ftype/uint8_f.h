#pragma once
#ifndef UINT8_F_H
#define UINT8_F_H
#include "pch.h"

class uint8_f
{
public:
	uint8_f(void);
	
	uint8_f(const uint8_f& value);

	template<typename type_value>
	uint8_f(type_value value);

	char* ptr() const;

	uint8_f real() const;
	uint8_f imag() const;
	uint8_f numerator() const;
	uint8_f denominator() const;
	uint8_f call() const;
	uint8_f integer() const;
	uint8_f hex() const;
	uint8_f binary() const;
	uint8_f conjugate() const;
	uint8_f bit_length() const;

	template<typename type_value>
	uint8_f __add__(type_value value);

	template<typename type_value>
	uint8_f __sub__(type_value value);

	template<typename type_value>
	uint8_f __mul__(type_value value);
	
	template<typename type_value>
	uint8_f __div__(type_value value);

	template<typename type_value>
	uint8_f __mod__(type_value value);

	template<typename type_value>
	uint8_f __rmod__(type_value value);

	char* repr() const;

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

	uint8_f __pow__();
private:
	unsigned char value;
};

#endif /*	UINT8_F_H END	*/
