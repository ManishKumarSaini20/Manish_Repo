#include "Header_Files\Wrapper_class.h"
#include <memory>
#include <iostream>

int main()
{
    int ival = 11;
    std::unique_ptr<MANISH::ROOPA::VIRAT::WrapperClass> objManish = std::make_unique<MANISH::ROOPA::VIRAT::WrapperClass>(ival);
    std::cout<<objManish->GetVal();
    ival = 22;
    objManish->SetVAl(ival);
    std::cout<<objManish->GetVal();
}