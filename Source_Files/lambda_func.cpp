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
                for(auto f : handlervect)
                {
                    std::cout<<"lambdafunc::subscribe.\n";
                    f();
                }
            }
        }
    }
}