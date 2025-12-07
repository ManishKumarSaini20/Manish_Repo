#include "Header_Files\Algorithm_R_D.h"
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<MANSIH::ROOPA::VIRAT::Algorithm_R_D> objAlgorithm_R_D = std::make_unique<MANSIH::ROOPA::VIRAT::Algorithm_R_D>();
    int a = 5;
    bool b_OddNumber = false;
    b_OddNumber = objAlgorithm_R_D->OddorEvenNumber(a);
    if(true == b_OddNumber)
    {
        std::cout<<"Number is odd"<<std::endl;
    }
    else
    {
        std::cout<<"Number is even"<<std::endl;
    }

    int iresult = objAlgorithm_R_D->OddOccuranceOfANumber();
    std::cout<<"OddOccuranceOfANumber result = "<<iresult<<std::endl;
    return 0;
}
