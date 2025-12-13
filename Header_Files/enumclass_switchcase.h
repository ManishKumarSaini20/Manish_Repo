#include <iostream>

namespace MANISH
{
    namespace VIRAT
    {
        enum class DIRECTION : uint8_t
        {
            EAST = 0,
            WEST = 1,
            NORTH = 2,
            SOUTH = 3
        };

        class enumclass_switchcase
        {
            public:
            enumclass_switchcase() = default;
            ~enumclass_switchcase() = default;
            void enumswitchcasefunction(DIRECTION edirection);
        };
    }
}