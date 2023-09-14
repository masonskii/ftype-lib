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
	std::string uint8_f::repr() const;
	uint8_f uint8_f::pow(int value);
	uint8_f uint8_f::pow(const uint8_f& value);
	uint8_f operator+(int other) const;
	uint8_f operator+(float other) const;
	uint8_f operator+(double other) const;
	uint8_f operator+(const uint8_f& other) const;
	uint8_f operator-(int other) const;
	uint8_f operator-(float other) const;
	uint8_f operator-(double other) const;
	uint8_f operator-(const uint8_f& other) const;
	uint8_f operator*(int other) const;
	uint8_f operator*(float other) const;
	uint8_f operator*(double other) const;
	uint8_f operator*(const uint8_f& other) const;
	uint8_f operator/(int other) const;
	uint8_f operator/(float other) const;
	uint8_f operator/(double other) const;
	uint8_f operator/(const uint8_f& other) const;
	uint8_f operator%(int other) const;
	uint8_f operator%(float other) const;
	uint8_f operator%(double other) const;
	uint8_f operator%(const uint8_f& other) const;
	bool operator==(int other) const;
	bool operator==(float other) const;
	bool operator==(double other) const;
	bool operator==(const uint8_f& other) const;
	bool operator!=(int other) const;
	bool operator!=(float other) const;
	bool operator!=(double other) const;
	bool operator!=(const uint8_f& other) const;
	bool operator<(int other) const;
	bool operator<(float other) const;
	bool operator<(double other) const;
	bool operator<(const uint8_f& other) const;
	bool operator>(int other) const;
	bool operator>(float other) const;
	bool operator>(double other) const;
	bool operator>(const uint8_f& other) const;
	uint8_f operator&(int other) const;
	uint8_f operator&(float other) const;
	uint8_f operator&(double other) const;
	uint8_f operator&(const uint8_f& other) const;
	uint8_f operator|(int other) const;
	uint8_f operator|(float other) const;
	uint8_f operator|(double other) const;
	uint8_f operator|(const uint8_f& other) const;
	uint8_f operator^(int other) const;
	uint8_f operator^(float other) const;
	uint8_f operator^(double other) const;
	uint8_f operator^(const uint8_f& other) const;
	uint8_f operator<<(int other) const;
	uint8_f operator<<(float other) const;
	uint8_f operator<<(double other) const;
	uint8_f operator<<(const uint8_f& other) const;
	uint8_f operator>>(int other) const;
	uint8_f operator>>(float other) const;
	uint8_f operator>>(double other) const;
	uint8_f operator>>(const uint8_f& other) const;
	uint8_f operator~() const;
private:
	std::uint8_t value;
};

#endif /*	UINT8_F_H END	*/
