#include <iostream>
#include <functional>
#include <vector>

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class lambdafunc
            {
                public:
                lambdafunc()
                {
                    std::cout<<"lambdafunc::lambdafunc.\n";
                }
                ~lambdafunc()
                {
                    std::cout<<"lambdafunc::~lambdafunc.\n";
                }
                void subscribe(std::function<void()> handler);
                void trigger();
                int addf(int, int);
                private:
                std::vector<std::function<void()>> handlervect;
            };
        }
    }
}