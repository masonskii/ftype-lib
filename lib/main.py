from ftype import uint8_f as uint8

num = uint8(10)

num = num + 50

print(
    f"num = {num}\n, type of num is: {type(num)}\n, real : {num.real}, number: {num.number}\n, conjugate: {num.cinjugate}\n, imag: {num.imag}\n, int: {num.integer} | hex {num.hex} | oct {num.oct} | dec {num.dec} | binary {num.binary}\n,numerator: {num.numerator} |  denominator: {num.denominator}\n"

)