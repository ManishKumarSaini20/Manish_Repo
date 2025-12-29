#include "Header_Files\Singleton_with_unique_ptr.h"

int main()
{
    MANISH::ROOPA::VIRAT::Singleton& obj = MANISH::ROOPA::VIRAT::Singleton::CreateInstance();
    obj.ShowValue();
    return 0;
}