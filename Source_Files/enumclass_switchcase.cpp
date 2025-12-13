#include "..\Header_Files\enumclass_switchcase.h"
namespace MANISH
{
    namespace VIRAT
    {
        void enumclass_switchcase::enumswitchcasefunction(DIRECTION edirection)
        {
            switch(edirection)
            {
                case DIRECTION::EAST:
                std::cout<<"It is EAST.\n";
                break;
                case DIRECTION::WEST:
                std::cout<<"It is WEST.\n";
                break;
                case DIRECTION::NORTH:
                std::cout<<"It is NORTH.\n";
                break;
                case DIRECTION::SOUTH:
                std::cout<<"It is SOUTH.\n";
                break;
                default:
                std::cout<<"wrong direction value.\n";
            }
        }
    }
}