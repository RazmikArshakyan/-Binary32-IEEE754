#include <iostream>
#include "Binary32.h"

int main(int argc, char** argv) {
    //Creation of object
    Binary32 obj0(5.0);

    //Objects representation in IEEE754 format
    obj0.printIEEE();
    std::cout << std::endl;
    
    Binary32 obj1(4.0);
    Binary32 obj2;
    //Addition
    obj2 = obj2.Add(obj0, obj1);
    std::cout << "Result of addition" << std::endl;
    std::cout << obj2.mFloat.num << std::endl;
    obj2.printIEEE();
    std::cout << std::endl;

    //Sub
    obj2 = obj2.Sub(obj0, obj1);
    std::cout << "Result of subtraction" << std::endl;
    std::cout << obj2.mFloat.num << std::endl;
    obj2.printIEEE();
    std::cout << std::endl;

    //Mul
    obj2 = obj2.Mul(obj0, obj1);
    std::cout << "Result of multiplication" << std::endl;
    std::cout << obj2.mFloat.num << std::endl;
    obj2.printIEEE();
    std::cout << std::endl;

    //Div
    obj2 = obj2.Div(obj0, obj1);
    std::cout << "Result of division" << std::endl;
    std::cout << obj2.mFloat.num << std::endl;
    obj2.printIEEE();
    std::cout << std::endl;

    //IsZero
    Binary32 obj3(0.0);
    std::cout << "Result of IsZero" << std::endl;
    std::cout << obj3.IsZero() << std::endl;

    //Equals
    Binary32 obj4(22.0);
    Binary32 obj5(22.0);
    std::cout << "Result of Equals" << std::endl;
    std::cout << obj4.Equals(obj5) << std::endl;


    return 0;
}