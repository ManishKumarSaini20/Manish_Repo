#include "Header_Files\stack.h"
#include <memory>

int main()
{
    std::unique_ptr<MANISH::ROOPA::VIRAT::stack_c<int>> objstack = std::make_unique<MANISH::ROOPA::VIRAT::stack_c<int>>();
    objstack->push(30);
    objstack->push(20);
    objstack->push(10);
    std::cout<<objstack->size()<<std::endl;
    std::cout<<objstack->top()<<std::endl;
    objstack->pop();
    std::cout<<objstack->size()<<std::endl;
    std::cout<<objstack->top()<<std::endl;
    return 0;
}