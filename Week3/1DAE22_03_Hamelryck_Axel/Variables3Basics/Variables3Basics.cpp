// Hamelryck, Axel - 1DAE22

#include "pch.h"
#include <iostream>

void GetSizeOf();
void GetNumberPresentation();
void RangeOfSignedvsUnsigned();
void BitWiseAndOperation();
void BitWiseOrOperation();
void IsBitOrOne();
void SetBitInNumber();
void ShiftToRight();
void ShiftToLeft();
void BitwiseExcercise();
int main()
{
    GetSizeOf();
    std::cout << std::endl;
    GetNumberPresentation();
    std::cout << std::endl;
    RangeOfSignedvsUnsigned();
    std::cout << std::endl;
    BitWiseAndOperation();
    std::cout << std::endl;
    BitWiseOrOperation();
    std::cout << std::endl;
    IsBitOrOne();
    std::cout << std::endl;
    SetBitInNumber();
    std::cout << std::endl;
    ShiftToRight();
    std::cout << std::endl;
    ShiftToLeft();
    std::cout << std::endl;
    BitwiseExcercise();
    std::cin.get();
    std::cin.get();
}

void GetSizeOf()
{
    bool bBool{};
    int iInt{};
    float fFloat{};
    double dDouble{};

    std::cout << "bool: " << sizeof(bBool) << std::endl;
    std::cout << "int: " << sizeof(iInt) << std::endl;
    std::cout << "float: " << sizeof(fFloat) << std::endl;
    std::cout << "double: " << sizeof(dDouble) << std::endl;
}

void GetNumberPresentation()
{
    int value{ 12 };
    std::cout << "decimal: " << value << std::endl;

    value = 0b1100;
    std::cout << "binary: " << value << std::endl;

    value = 0xC ;
    std::cout << "hex: " << value << std::endl;

}

void RangeOfSignedvsUnsigned()
{
    unsigned int unsInt{ 0 };
    signed int sInt{ 2147483647 };

    unsigned char unsChar{ 0 };
    signed char sChar{ -128 };

    unsInt--;
    sInt++;
    unsChar--;
    sChar--;

    std::cout << "unsigned int min - 1: " << unsInt << std::endl;
    std::cout << "signed int max + 1: " << sInt << std::endl;
    std::cout << "unsigned char min - 1: " << unsChar << std::endl;
    std::cout << "signed char min - 1: " << sChar << std::endl;
}

void BitWiseAndOperation()
{
    unsigned int v1{ 3 };
    unsigned int v2{ 5 };
    unsigned int v3{ v1 & v2 };

    std::cout << "After & operator: " << v3 << std::endl;
}

void BitWiseOrOperation()
{
    unsigned int v1{ 3 };
    unsigned int v2{ 5 };
    unsigned int v3{ v1 | v2 };

    std::cout << "After & operator: " << v3 << std::endl;
}

void IsBitOrOne()
{
    int value{};
    std::cout << "Number to check which bits are set? ";
    std::cin >> value;

    std::cout << "1st bit: " << (value & 0b0001) << std::endl;
    std::cout << "2nd bit: " << (value & 0b0010) << std::endl;
    std::cout << "3rd bit: " << (value & 0b0100) << std::endl;
    std::cout << "4th bit: " << (value & 0b1000) << std::endl;
}

void SetBitInNumber()
{
    int value{};
    std::cout << "Number to set 3rd bit in? ";
    std::cin >> value;

    std::cout << "This number with 3rd bit set is " << (value | 0b0100) << std::endl;
}

void ShiftToRight()
{
    unsigned int value{ 2048 };

    std::cout << "2048/2 (shift to right) " << (value >> 1) << std::endl;

    unsigned int value2{ 4448 };
    std::cout << "Is 256 in 4448? " << ((value2 & 256) >> 8) << std::endl;
}

void ShiftToLeft()
{
    unsigned int value{ 2048 };
    std::cout << "2048*2 (shift to right) " << (value << 1) << std::endl;
}

void BitwiseExcercise()
{
    unsigned int value{ 0 };
    value = (1 << 21) | (1 << 19) | (1 << 17) | (1 << 16) | (1 << 14) | (1 << 13) | (1 << 11) | (1 << 9) | (1 << 8) | (1 << 7)
        | (1 << 5) | (1 << 4) | (1 << 3) | (1 << 2) | (1 << 1) | (1 << 0);
    std::cout << value;
}