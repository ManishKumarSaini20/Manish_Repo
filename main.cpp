#include <memory>
#include <iostream>
#include "Header_Files\do_while_loop.h"
#include "Header_Files\tuple_pair_return_multi_val.h"
#include "Header_Files\enumclass_switchcase.h"
#include "Header_Files\callback_function.h"
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

class C : public A
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

class CBASE
{
};

class CDERIVED : public CBASE
{
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
    // casting operator functionality starts
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
    B *pBB = static_cast<B *>(pAA);
    B *pBB1 = dynamic_cast<B *>(pAA);
    if (pBB1 != nullptr)
    {
        std::cout << "dynamic_cast is successfull for A to B" << std::endl;
    }
    else
    {
        std::cout << "dynamic_cast is failed for A to B" << std::endl;
    }
    C *pCC = dynamic_cast<C *>(pAA);
    if (pCC != nullptr)
    {
        std::cout << "dynamic_cast is successfull for A to C" << std::endl;
    }
    else
    {
        std::cout << "dynamic_cast is failed for A to C" << std::endl;
    }

    CBASE *pBbbb = new CBASE;
    CDERIVED *pD = static_cast<CDERIVED *>(pBbbb);
    // casting operator functionality ends

    //do_while_loop.h functionlity starts
    int iValue = 5;
    std::unique_ptr<MANISH::ROOPA::VIRAT::dowhileloop> objdowhileloop = std::make_unique<MANISH::ROOPA::VIRAT::dowhileloop>(iValue);
    objdowhileloop->FuncDoWhileLoop(7);
    //do_while_loop.h functionlity ends

    // tuple_pair_return_multi_val.h functionality starts
    std::unique_ptr<MANISH::ROOPA::VIRAT::tuple_pair_return_multi_val> objtuple_pair_return_multi_val = std::make_unique<MANISH::ROOPA::VIRAT::tuple_pair_return_multi_val>();
    objtuple_pair_return_multi_val->tuple_get_make();
    int iSize = 0;
    objtuple_pair_return_multi_val->tuple_size(iSize);
    std::cout << "iSize = " << iSize << std::endl;
    objtuple_pair_return_multi_val->tuple_swap();
    objtuple_pair_return_multi_val->tuple_cat();
    objtuple_pair_return_multi_val->tuple_tie();
    std::pair<int, char> myPair = objtuple_pair_return_multi_val->func_retrun_pair();
    std::cout << "myPair.first = " << myPair.first << " myPair.second = " << myPair.second << std::endl;
    int aa = 0;
    char cc{};
    float ff = 0;
    std::tie(aa, cc, ff) = objtuple_pair_return_multi_val->func_retrun_tuple();
    std::cout << "aa = " << aa << " cc = " << cc << " ff = " << ff << std::endl;
    std::unique_ptr<MANISH::ROOPA::VIRAT::retfromfunc> objretfromfunc = std::make_unique<MANISH::ROOPA::VIRAT::retfromfunc>();
    objtuple_pair_return_multi_val->funcreturningstruct(objretfromfunc.get());
    std::cout << "objretfromfunc->a = " << objretfromfunc->a << " objretfromfunc->c = " << objretfromfunc->c << " objretfromfunc->f = " << objretfromfunc->f << std::endl;
    std::array<int, 5> objarray = objtuple_pair_return_multi_val->funcreturningarray();
    for (int &value_arr : objarray)
    {
        std::cout << value_arr << std::endl;
    }
    std::vector<int> myvect = objtuple_pair_return_multi_val->funcreturningvector();
    for (int &value_vect : myvect)
    {
        std::cout << value_vect << std::endl;
    }
    int aaa{0};
    char ccc;
    float fff{0};
    objtuple_pair_return_multi_val->funcreturningreferenceandpointer(aaa, &ccc, fff);
    std::cout << "aaa = " << aaa << " ccc = " << ccc << " fff = " << fff << std::endl;
    // tuple_pair_return_multi_val.h functionality ends

    //enumclass_switchcase.h functionality starts
    std::unique_ptr<MANISH::VIRAT::enumclass_switchcase> objenumclass_switchcase = std::make_unique<MANISH::VIRAT::enumclass_switchcase>();
    MANISH::VIRAT::DIRECTION edirectionvalue = MANISH::VIRAT::DIRECTION::EAST;
    objenumclass_switchcase->enumswitchcasefunction(edirectionvalue);
    //enumclass_switchcase.h functionality ends

    //callback_function.h functionality starts
    std::unique_ptr<MANISH::ROOPA::VIRAT::callback_function> objcallback_function = std::make_unique<MANISH::ROOPA::VIRAT::callback_function>();
    const int aaaa = 10;
    const int bbbb = 20;
    int returnval = 0;
    objcallback_function->printval(MANISH::ROOPA::VIRAT::callback_function::addfunc, aaaa, bbbb);
    //callback_function.h functionality ends
    return 0;
}