#include <iostream>
#include <memory>
#include <functional>
#include <array>
#include <algorithm>

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

std::array<int, 7> retarray()
{
    return {11,22,33,44,55,66,77};
}

bool asscendingorder(const int& a, const int& b)
{
    return a<b;
}

bool descendingorder(const int& a, const int& b)
{
    return a>b;
}

class CManish
{
public:
    CManish()
    {
    }

    ~CManish()
    {
    }

    bool operator()(const int& a, const int& b)
    {
        return a<b;
    }
};

class CVirat
{
public:
    CVirat()
    {
    }

    ~CVirat()
    {
    }

    bool operator()(const int& a, const int& b)
    {
        return a>b;
    }
};

union uManish
{
    int a = 0;
    double dd;
    char c;
};

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

    //std::array container class functionality starts
    std::cout<<"std::array functionality starts.\n";
    std::array<int ,7> retarr = retarray();
    for(int& i : retarr)
    {
        std::cout<<i<<std::endl;
    }
    std::cout<<"retarr.size = "<<retarr.size()<<std::endl;
    std::cout<<"retarr.fromt = "<<retarr.front()<<std::endl;
    std::cout<<"retarr.back = "<<retarr.back()<<std::endl;
    std::array<int,7>::iterator it;
    for(it = retarr.begin(); it != retarr.end(); ++it)
    {
        std::cout<<"*it = "<<*it<<std::endl;
    }
    std::array<int,7> intarray = {3,1,7,5,9,6,4};
    std::sort(intarray.begin(), intarray.end(), asscendingorder);
    std::cout<<"intarray in asscendingorder order using callback.\n";
    for(int& a : intarray)
    {
        std::cout<<a<<std::endl;
    }
    std::sort(intarray.begin(), intarray.end(), descendingorder);
    std::cout<<"intarray in descendingorder order using callback.\n";
    for(int& a : intarray)
    {
        std::cout<<a<<std::endl;
    }
    std::sort(intarray.begin(), intarray.end(), [](const int& a, const int& b){return a<b;});
    std::cout<<"intarray in asscendingorder order using lambda.\n";
    for(int& a : intarray)
    {
        std::cout<<a<<std::endl;
    }
    std::sort(intarray.begin(), intarray.end(), [](const int& a, const int& b){return a>b;});
    std::cout<<"intarray in descendingorder order using lambda.\n";
    for(int& a : intarray)
    {
        std::cout<<a<<std::endl;
    }

    std::sort(intarray.begin(), intarray.end(), CManish());
    std::cout<<"intarray in asscendingorder order using functor.\n";
    for(int& a : intarray)
    {
        std::cout<<a<<std::endl;
    }
    std::sort(intarray.begin(), intarray.end(), CVirat());
    std::cout<<"intarray in descendingorder order using functor.\n";
    for(int& a : intarray)
    {
        std::cout<<a<<std::endl;
    }
    //std::array container class functionality ends

    //union example starts
    std::cout<<"sizeof(uManish) = "<<sizeof(uManish)<<std::endl;
    uManish objuManish;
    objuManish.a = 67;
    std::cout<<"objuManish.a = "<<objuManish.a<<std::endl;
    std::cout<<"objuManish.c = "<<objuManish.c<<std::endl;
    std::cout<<"objuManish.dd = "<<objuManish.dd<<std::endl;
    objuManish.c = 'A';
    std::cout<<"objuManish.a = "<<objuManish.a<<std::endl;
    std::cout<<"objuManish.c = "<<objuManish.c<<std::endl;
    std::cout<<"objuManish.dd = "<<objuManish.dd<<std::endl;
    objuManish.dd = 30;
    std::cout<<"objuManish.a = "<<objuManish.a<<std::endl;
    std::cout<<"objuManish.c = "<<objuManish.c<<std::endl;
    std::cout<<"objuManish.dd = "<<objuManish.dd<<std::endl;
    //union example ends
    return 0;
}