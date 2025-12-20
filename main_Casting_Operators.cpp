//This is main_Casting_Operators.cpp
#include "Header_Files\Casting_Operators.h"
#include <memory>

int main()
{
    MANISH::ROOPA::VIRAT::baseClass* pbaseClass = new MANISH::ROOPA::VIRAT::derivedClass();
    pbaseClass->baseclassFunc();
    pbaseClass->DiaplayFunc();
    MANISH::ROOPA::VIRAT::derivedClass* pderivedClass = dynamic_cast<MANISH::ROOPA::VIRAT::derivedClass*>(pbaseClass);
    pderivedClass->baseclassFunc();
    pderivedClass->DiaplayFunc();
    pderivedClass->driveclassFunc();
    delete pderivedClass;
    return 0;
}