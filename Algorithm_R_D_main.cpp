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
    int iArray[] = {13,13,14,14,15,16,16,19,19,20,20};
    int iresult = objAlgorithm_R_D->OddOccuranceOfANumber<int>(iArray);
    std::cout<<"OddOccuranceOfANumber result = "<<iresult<<std::endl;
    return 0;
}
