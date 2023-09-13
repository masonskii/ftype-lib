#include "pch.h"
#include "uint8_f.h"

#include <stdexcept>
#include <typeinfo>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <limits>

uint8_f::uint8_f(int value) {

	if (typeid(value) != typeid(int))
	{
		throw std::runtime_error("Value must be integer, float or double");
	}
	this->value = value & 0xFF;
};
uint8_f::uint8_f(float value) {
	if (typeid(value) == typeid(float))
		this->value = static_cast<int>(value);
	else
		throw std::runtime_error("Value must be integer, float or double");
};
uint8_f::uint8_f(double value) {

	if (typeid(value) == typeid(double))
		this->value = static_cast<int>(value);
	else
		throw std::runtime_error("Value must be integer, float or double");
};
uint8_f::uint8_f(const uint8_f& value) {

	if (typeid(value) == typeid(uint8_f))
		this->value = value.number();
	else
		throw std::runtime_error("Value must be integer, float or double");
}
const uint8_t* uint8_f::ptr() const {
	return &this->value;
};
uint8_t uint8_f::number() const {
	return this->value;
}
uint8_f uint8_f::real() const {
	return uint8_f(this->value);
};
uint8_f uint8_f::imag() const {
	return uint8_f(0);
};
uint8_f uint8_f::numerator() const {
	return uint8_f(this->value);
};
uint8_f uint8_f::denominator() const {
	return uint8_f(1);
};
uint8_f uint8_f::call() const {
	return this->value;
};
uint8_f uint8_f::integer() const {
	return uint8_f(this->value);
};
std::string uint8_f::hex() const {
	std::stringstream stream;
	stream << "0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(this->value);
	return stream.str();
};
std::string uint8_f::to_oct() const {
	std::stringstream stream;
	stream << "0" << std::oct << static_cast<int>(this->value);
	return stream.str();
}

std::string uint8_f::to_dec() const {
	std::stringstream stream;
	stream << std::dec << static_cast<int>(this->value);
	return stream.str();
}

std::string uint8_f::binary() const {
	return std::bitset<8>(this->value).to_string();
};
uint8_f uint8_f::conjugate() const {
	return uint8_f(this->value);
};
uint8_f uint8_f::bit_length() const {
	return std::numeric_limits<std::uint8_t>::digits;
};


template<typename type_value>
uint8_f uint8_f::__mul__(type_value value) {
	if (typeid(value) == typeid(int))
		return uint8_f(this->value * value);
	if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return uint8_f(this->value * static_cast<int>(value));
	if (typeid(value) == typeid(uint8_f))
		return uint8_f(this->value * value.number());
};

template<typename type_value>
uint8_f uint8_f::__div__(type_value value) {
	if (typeid(value) == typeid(int))
		return uint8_f(this->value / value);
	if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return uint8_f(this->value / static_cast<int>(value));
	if (typeid(value) == typeid(uint8_f))
		return uint8_f(this->value / value.number());
};

template<typename type_value>
uint8_f uint8_f::__mod__(type_value value) {
	if (typeid(value) == typeid(int))
		return uint8_f(this->value % value);
	if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return uint8_f(this->value % static_cast<int>(value));
	if (typeid(value) == typeid(uint8_f))
		return uint8_f(this->value % value.number());
};

template<typename type_value>
uint8_f uint8_f::__rmod__(type_value value) {
	return this->__mod__<type_value>(value);
};

std::string uint8_f::repr() const {
	return std::to_string(this->value);
};

template<typename type_value>
bool uint8_f::__eq__(type_value value) {
	if (typeid(value) == typeid(int))
		return this->value == value;
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return this->value == static_cast<int>(value);
	else if (typeid(value) == typeid(uint8_f))
		return this->value == value.number();
	else
		return false;
};

template<typename type_value>
bool uint8_f::__ne__(type_value value) {
	if (typeid(value) == typeid(int))
		return this->value != value;
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return this->value != static_cast<int>(value);
	else if (typeid(value) == typeid(uint8_f))
		return this->value != value.number();
	else
		return true;
};

template<typename type_value>
bool uint8_f::__lt__(type_value value) {
	if (typeid(value) == typeid(int))
		return this->value < value;
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return this->value < static_cast<int>(value);
	else if (typeid(value) == typeid(uint8_f))
		return this->value < value.number();
	else
		return false;
};

template<typename type_value>
bool uint8_f::__gt__(type_value value) {
	if (typeid(value) == typeid(int))
		return this->value > value;
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return this->value > static_cast<int>(value);
	else if (typeid(value) == typeid(uint8_f))
		return this->value > value.number();
	else
		return false;
};

template<typename type_value>
uint8_f uint8_f::__and__(type_value value) {
	if (typeid(value) == typeid(int))
		return uint8_f(this->value & value);
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return uint8_f(this->value & static_cast<int>(value));
	else if (typeid(value) == typeid(uint8_f))
		return uint8_f(this->value & value.number());
	else
		throw std::runtime_error("It is impossible to apply to these types of data &");
};

template<typename type_value>
uint8_f uint8_f::__or__(type_value value) {
	if (typeid(value) == typeid(int))
		return uint8_f(this->value | value);
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return uint8_f(this->value | static_cast<int>(value));
	else if (typeid(value) == typeid(uint8_f))
		return uint8_f(this->value | value.number());
	else
		throw std::runtime_error("It is impossible to apply to these types of data |");
};

template<typename type_value>
uint8_f uint8_f::__xor__(type_value value) {
	if (typeid(value) == typeid(int))
		return uint8_f(this->value ^ value);
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return uint8_f(this->value ^ static_cast<int>(value));
	else if (typeid(value) == typeid(uint8_f))
		return uint8_f(this->value ^ value.number());
	else
		throw std::runtime_error("It is impossible to apply to these types of data |");
};

template<typename type_value>
uint8_f uint8_f::__lshift__(type_value value) {
	if (typeid(value) == typeid(int))
		return uint8_f(this->value << value);
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return uint8_f(this->value << static_cast<int>(value));
	else if (typeid(value) == typeid(uint8_f))
		return uint8_f(this->value << value.number());
	else
		throw std::runtime_error("It is impossible to apply to these types of data <<");
};

template<typename type_value>
uint8_f uint8_f::__rshift__(type_value value) {
	if (typeid(value) == typeid(int))
		return uint8_f(this->value >> value);
	else if ((typeid(value) == typeid(float)) || (typeid(value) == typeid(double)))
		return uint8_f(this->value >> static_cast<int>(value));
	else if (typeid(value) == typeid(uint8_f))
		return uint8_f(this->value >> value.number());
	else
		throw std::runtime_error("It is impossible to apply to these types of data <<");
};

uint8_f uint8_f::__invert__() {
	return uint8_f(~this->value);
};
template<typename type_value>
uint8_f uint8_f::__pow__(type_value value) {
	if ((typeid(value) != typeid(int)))
	{
		throw std::runtime_error("Value must be integer");
	}
	if ( value == 0 || value == 1) {
		return uint8_f(value);
	}
	uint8_t guess(value / 2);
	uint8_t prevGuess;
	do {
		prevGuess = guess;
		guess = (guess + value / guess) / 2;
	} while (guess != prevGuess);

	return uint8_f(guess);

};