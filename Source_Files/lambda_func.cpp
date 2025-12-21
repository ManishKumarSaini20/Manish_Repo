#include "..\Header_Files\lambda_func.h"

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            void lambdafunc::subscribe(std::function<void()> handler)
            {
                std::cout<<"lambdafunc::subscribe.\n";
                handlervect.push_back(handler);
            }
            void lambdafunc::trigger()
            {
                for(std::function<void()> f : handlervect)
                {
                    std::cout<<"lambdafunc::trigger.\n";
                    f();
                }
            }

            int lambdafunc::addf(int a, int b)
            {
                std::cout<<"lambdafunc::addf.\n";
                return a+b;
            }
        }
    }
}