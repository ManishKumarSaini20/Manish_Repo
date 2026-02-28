#include "Header_Files\R&D.h"
#include <memory>

int main()
{
    int x = 777;
    std::unique_ptr<MANISH::ROOPA::VIRAT::CManish> objManish = std::make_unique<MANISH::ROOPA::VIRAT::CManish>(x,22,"IPL");
    objManish->DisplayVal();
    return 0;
}