#include "..\Header_Files\callback_function.h"

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            void callback_function::addfunc(const int &a, const int &b)
            {
                std::cout<<"callback_function::addfunc.\n"<<std::endl;
                std::cout<<"a+b = "<<a+b<<std::endl;
            }
            void callback_function::subfunc(const int &a, const int &b)
            {
                std::cout<<"callback_function::subfunc.\n"<<std::endl;
                std::cout<<"a-b = "<<a-b<<std::endl;
            }
            void callback_function::mulfunc(const int &a, const int &b)
            {
                std::cout<<"callback_function::mulfunc.\n"<<std::endl;
                std::cout<<"a*b = "<<a*b<<std::endl;
            }
            void callback_function::divfunc(const int &a, const int &b)
            {
                std::cout<<"callback_function::divfunc.\n"<<std::endl;
                std::cout<<"a/b = "<<a/b<<std::endl;
            }
            void callback_function::printval(void (callback_function::*callbackfunc)(const int&, const int&), const int& a,const int& b)
            {
                std::cout<<"callback_function::printval.\n"<<std::endl;
                (this->*callbackfunc)(a,b);
            }
        }
    }
}