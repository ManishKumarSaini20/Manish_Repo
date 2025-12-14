#include <iostream>

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class callback_function
            {
                public:
                callback_function() = default;
                ~callback_function() = default;
                void addfunc(const int& a, const int& b);
                void subfunc(const int& a, const int& b);
                void mulfunc(const int& a, const int& b);
                void divfunc(const int& a, const int& b);
                void printval(void (callback_function::*) (const int&, const int&),const int&,const int&);
            };
        }
    }
}