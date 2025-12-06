#include "Header_Files\Casting_Operators.h"
#include <memory>

class A
{
public:
    A()
    {
        std::cout << "A::A" << std::endl;
    }

    virtual ~A()
    {
        std::cout << "A::~A" << std::endl;
    }
};

class B : public A
{
public:
    B() = default;
    B(A obj) : A(obj)
    {
        std::cout << "B::B" << std::endl;
    }

    ~B()
    {
        std::cout << "B::~B" << std::endl;
    }

    // operator double() const
    // {
    //     return A;
    // }
};


class C:public A
{
public:
    C()
    {
        std::cout << "C::C" << std::endl;
    }

    virtual ~C()
    {
        std::cout << "C::~C" << std::endl;
    }
};

class CMAnish
{
    int m_i;
    int m_j;

public:
    CMAnish(int i = 0, int j = 0) : m_i(i), m_j(j)
    {
    }

    ~CMAnish()
    {
    }

    void DisplayData()
    {
        std::cout << "m_i = " << m_i << " m_j = " << m_j << std::endl;
    }

    operator double() const
    {
        return m_i;
    }
};

int main()
{
    A a;
    B b = static_cast<B>(a);
    // std::unique_ptr<A> pA = std::make_unique<A>();
    // std::unique_ptr<B> pB = static_cast<std::unique_ptr<B>>(pA.get());
    A *pA = new A;
    B *pB = static_cast<B *>(pA);
    CMAnish objManish(11, 22);
    objManish.DisplayData();
    double dd = objManish;
    std::cout << "dd = " << dd << std::endl;
    delete pB;

    const int e = 30;
    std::cout << "e = " << e << std::endl;
    const int *pe = &e;
    std::cout << "*pe = " << *pe << std::endl;
    int *pf = const_cast<int *>(pe);
    std::cout << "*pf = " << *pf << std::endl;
    *pf = 40;
    std::cout << "*pf = " << *pf << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "*pe = " << *pe << std::endl;
    std::cout << "*pf = " << *pf << std::endl;
    A *pAA = new B;
    B* pBB = static_cast<B*>(pAA);
    B* pBB1 = dynamic_cast<B*>(pAA);
    if(pBB1 != nullptr)
    {
        std::cout<<"dynamic_cast is successfull for A to B"<<std::endl;
    }
    else
    {
        std::cout<<"dynamic_cast is failed for A to B"<<std::endl;
    }
    C* pCC = dynamic_cast<C*>(pAA);
    if(pCC != nullptr)
    {
        std::cout<<"dynamic_cast is successfull for A to C"<<std::endl;
    }
    else
    {
        std::cout<<"dynamic_cast is failed for A to C"<<std::endl;
    }
    return 0;
}