#include <iostream>
#include <memory>
#include <functional>

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class vManish
            {
                int m_i;

            public:
                vManish(int i = 0) : m_i(i)
                {
                }

                ~vManish()
                {
                }

                volatile int& GetVal() volatile
                {
                    return m_i;
                }
            };
        }
    }
}

class Example
{
public:
    void normal()
    {
        std::cout<<"nomal.\n";
    }
    void volatileFunc() volatile
    {
        std::cout<<"volatileFunc.\n";
    }
};

int addf(int a, int b)
{
    std::cout<<"addf is called.\n";
    return a+b;
}

int main()
{
    // Volatile keyword functionality starts
    volatile int a = 10;
    std::cout << "a = " << a << std::endl;
    std::unique_ptr<MANISH::ROOPA::VIRAT::vManish> objvManish = std::make_unique<MANISH::ROOPA::VIRAT::vManish>(777);
    auto i = objvManish->GetVal();
    std::cout << "i = " << i << std::endl;
    MANISH::ROOPA::VIRAT::vManish obj(999);
    std::cout << obj.GetVal() << std::endl;

    Example e;           // non-volatile object
    volatile Example ve; // volatile object
    e.normal();
    e.volatileFunc();
    // Volatile functionality ends

    //std::function class functionality starts
    std::function<void()> greet = [](){ std::cout << "Hello!\n"; };
    greet(); // Output: Hello!
    std::function<int(int,int)> addFunc = addf;
    std::cout<<addFunc(11,22)<<std::endl;
    //std::function clas functionality ends

    return 0;
}