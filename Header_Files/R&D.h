#pragma once
#include <iostream>

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class CManish
            {
                static int a;
                int &b;
                const int c;
                char* d;
                public:
                explicit CManish(int iValb = 100, int ivalc = 0, const char* cVald = nullptr):b(iValb), c(ivalc), d(const_cast<char*>(cVald))
                {

                }

                ~CManish()
                {
                    if(d != nullptr)
                    {
                        delete d;
                        d = nullptr;
                    }
                }

                void DisplayVal() const;
            };
        }
    }
}