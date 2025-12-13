#include <iostream>
#include <tuple>
#include <array>
#include <vector>

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            struct retfromfunc
            {
                int a{0};
                char c{};
                float f{0};
            };
            class tuple_pair_return_multi_val
            {
            public:
                tuple_pair_return_multi_val() = default;
                ~tuple_pair_return_multi_val() = default;
                void tuple_get_make();
                void tuple_size(int &size) const;
                void tuple_swap();
                void tuple_cat();
                void tuple_tie();
                std::pair<int,char> func_retrun_pair();
                std::tuple<int,char,float> func_retrun_tuple();
                void funcreturningstruct(retfromfunc* );
                std::array<int,5> funcreturningarray();
                std::vector<int> funcreturningvector();
                void funcreturningreferenceandpointer(int&, char*, float&);
            };
        }
    }
}
