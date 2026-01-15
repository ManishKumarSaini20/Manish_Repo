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

    //const_cast_class functionality starts
    std::unique_ptr<MANISH::ROOPA::VIRAT::const_cast_class> myconst_cast_classobj = std::make_unique<MANISH::ROOPA::VIRAT::const_cast_class>(11,22);
    myconst_cast_classobj->DisplayVal();
    myconst_cast_classobj->SetValue(88,99);
    myconst_cast_classobj->DisplayVal();
    //const_cast_class functionality ends
    return 0;
}