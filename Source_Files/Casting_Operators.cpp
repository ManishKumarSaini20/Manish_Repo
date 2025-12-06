#include "..\Header_Files\Casting_Operators.h"


MANISH::ROOPA::VIRAT::baseClass::baseClass()
{
    std::cout<<"baseClass::baseClass"<<std::endl;
}

MANISH::ROOPA::VIRAT::baseClass::~baseClass()
{
    std::cout<<"baseClass::~baseClass"<<std::endl;
}

void MANISH::ROOPA::VIRAT::baseClass::DiaplayFunc()
{
    std::cout<<"baseClass::DiaplayFunc"<<std::endl;
}

void MANISH::ROOPA::VIRAT::baseClass::baseclassFunc()
{
    std::cout<<"baseClass::baseclassFunc"<<std::endl;
}

MANISH::ROOPA::VIRAT::derivedClass::derivedClass()
{
    std::cout<<"derivedClass::derivedClass"<<std::endl;
}

MANISH::ROOPA::VIRAT::derivedClass::~derivedClass()
{
    std::cout<<"derivedClass::~derivedClass"<<std::endl;
}

void MANISH::ROOPA::VIRAT::derivedClass::DiaplayFunc()
{
    std::cout<<"derivedClass::DiaplayFunc"<<std::endl;
}

void MANISH::ROOPA::VIRAT::derivedClass::driveclassFunc()
{
    std::cout<<"derivedClass::driveclassFunc"<<std::endl;
}