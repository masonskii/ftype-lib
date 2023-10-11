// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#define BOOST_PYTHON_STATIC_LIB

#include <boost/python.hpp>
#include "uint8_f.h"

BOOST_PYTHON_MODULE(ftype) {
    using namespace boost::python;
    class_<uint8_f>("uint8_f")
        .def(init<uint8_f>())
        .def(init<int>())
        .def(init<float>())
        .def(init<double>())
        .add_property("real", &uint8_f::real)
        .add_property("imag", &uint8_f::imag)
        .add_property("numerator", &uint8_f::numerator)
        .add_property("number", &uint8_f::number)
        .add_property("denominator", &uint8_f::denominator)
        .add_property("integer", &uint8_f::integer)
        .add_property("hex", &uint8_f::hex)
        .add_property("oct", &uint8_f::to_oct)
        .add_property("dec", &uint8_f::to_dec)
        .add_property("binary",&uint8_f::binary)
        .add_property("conjugate", &uint8_f::conjugate)
        .add_property("bit_length", &uint8_f::bit_length)
        .def("__add__", (uint8_f(uint8_f::*)(int) const) &uint8_f::operator+)
        .def("__add__", (uint8_f(uint8_f::*)(float) const) &uint8_f::operator+)
        .def("__add__", (uint8_f(uint8_f::*)(double) const) &uint8_f::operator+)
        .def("__add__", (uint8_f(uint8_f::*)(const uint8_f&) const) &uint8_f::operator+)
        .def("__sub__", (uint8_f(uint8_f::*)(int) const) &uint8_f::operator-)
        .def("__sub__", (uint8_f(uint8_f::*)(float) const) &uint8_f::operator-)
        .def("__sub__", (uint8_f(uint8_f::*)(double) const) &uint8_f::operator-)
        .def("__sub__", (uint8_f(uint8_f::*)(const uint8_f&) const) &uint8_f::operator-)
        .def("__repr__",&uint8_f::repr)
        .def("__str__", &uint8_f::repr)
        ;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

