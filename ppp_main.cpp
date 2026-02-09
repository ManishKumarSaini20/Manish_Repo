#include "Header_Files\PPP_inheritance.h"
#include <memory>

int main()
{
    std::unique_ptr<MANSIH::ROOPA::VIRAT::dog> objdog = std::make_unique<MANSIH::ROOPA::VIRAT::dog>(777);
    objdog->dogfunc();
    objdog->animalpublic();
    objdog->animaldisplay();
    //objdog->animalprotected();
    return 0;
}