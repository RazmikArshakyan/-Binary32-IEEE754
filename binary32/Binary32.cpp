#include "Binary32.h"
#include <iostream>
#include "Binary32Format.h"
#include "cmath"

Binary32::Binary32(float fNum)
{
    mFloat.num = fNum;
}

void Binary32::printIEEE()
{
    std::cout << "Sign bit is : " << mFloat.binRow.sign << std::endl;
    std::cout << "Exponent bits are : ";
    for (int i = expBits - 1; i >= 0; --i) {
        if ((mFloat.binRow.exponent >> i) & 1) {
            std::cout << "1";
        }
        else { std::cout << "0"; }
    }
    std::cout << std::endl;
    std::cout << "Mantissa bits are : ";
    for (int i = mantBits - 1; i >=0; --i) {
        if ((mFloat.binRow.mantissa >> i) & 1) {
            std::cout << "1";
        }
        else { std::cout << "0"; }
    }
}

Binary32 Binary32::Add(Binary32 objOne, Binary32 objTwo)
{
    Binary32 resObject;
    resObject.mFloat.num = objOne.mFloat.num + objTwo.mFloat.num;
    if (objOne.mFloat.binRow.exponent == 0) {
        return Binary32(std::numeric_limits<float>::quiet_NaN()); 
    }
    else if (objOne.mFloat.binRow.exponent == 0b11111111) {
        return Binary32(std::numeric_limits<float>::quiet_NaN());
    }
    return resObject;
}

Binary32 Binary32::Sub(Binary32 objOne, Binary32 objTwo)
{
    Binary32 resObject;
    resObject.mFloat.num = objOne.mFloat.num - objTwo.mFloat.num;
    if (objOne.mFloat.binRow.exponent == 0) {
        return Binary32(std::numeric_limits<float>::quiet_NaN()); 
    }
    else if (objOne.mFloat.binRow.exponent == 0b11111111) {
        return Binary32(std::numeric_limits<float>::quiet_NaN());
    }
    return resObject;
}

Binary32 Binary32::Mul(Binary32 objOne, Binary32 objTwo)
{
    Binary32 resObject;
    resObject.mFloat.num = objOne.mFloat.num * objTwo.mFloat.num;
    if (objOne.mFloat.binRow.exponent == 0) {
        return Binary32(std::numeric_limits<float>::quiet_NaN()); 
    }
    else if (objOne.mFloat.binRow.exponent == 0b11111111) {
        return Binary32(std::numeric_limits<float>::quiet_NaN());
    }
    return resObject;
}

Binary32 Binary32::Div(Binary32 objOne, Binary32 objTwo)
{
    Binary32 resObject;
    resObject.mFloat.num = objOne.mFloat.num / objTwo.mFloat.num;
    if (objOne.mFloat.binRow.exponent == 0) {
        return Binary32(std::numeric_limits<float>::quiet_NaN()); 
    }
    else if (objOne.mFloat.binRow.exponent == 0b11111111) {
        return Binary32(std::numeric_limits<float>::quiet_NaN());
    }
    return resObject;
}

bool Binary32::IsZero()
{
    if (this->mFloat.num == 0) {
        return true;
    }
    else { return false; }
}

bool Binary32::Equals(Binary32 obj)
{
    if (this->mFloat.num == obj.mFloat.num) {
        return true;
    }
    else { return false; }
}
