#include <iostream>

namespace MANSIH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class Algorithm_R_D
            {
            public:
                bool OddorEvenNumber(const int &number) const;
                template <typename T, std::size_t iSize>
                int OddOccuranceOfANumber(T (&iArray)[iSize])
                {
                    int result = 0;
                    // int iArray[] = {11,11,13,13,14,13,13};
                    // const int iSize = *(&iArray+1) - iArray;
                    std::cout<<"iSize = "<<iSize<<std::endl;
                    for (int i = 0; i < iSize; ++i)
                    {
                        result ^= iArray[i];
                    }
                    return result;
                }
            };
        }
    }
}