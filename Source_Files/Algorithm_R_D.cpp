#include "..\Header_Files\Algorithm_R_D.h"

bool MANSIH::ROOPA::VIRAT::Algorithm_R_D::OddorEvenNumber(const int& number) const
{
    if(number & 1) //number is odd
    {
        return true;
    }
    else //number is even
    {
        return false;
    }
}

// template<typename T, std::size_t iSize>
// int MANSIH::ROOPA::VIRAT::Algorithm_R_D::OddOccuranceOfANumber(T (&iArray)[iSize])
// {
//     int result = 0;
//     //int iArray[] = {11,11,13,13,14,13,13};
//     //const int iSize = *(&iArray+1) - iArray;
//     for(int i = 0; i < iSize; ++i)
//     {
//         result ^= iArray[i];
//     }
//     return result;
// }