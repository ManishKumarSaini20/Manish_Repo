#include "Header_Files\Casting_Operators.h"

struct A 
{

};

struct B:public A
{
public:
    B(A obj):A(obj)
    {

    }

    // operator double() const
    // {
    //     return A;
    // }
};

class CMAnish
{
    int m_i;
    int m_j;
public:
    CMAnish(int i = 0, int j = 0):m_i(i), m_j(j)
    {

    }

    ~CMAnish()
    {

    }

    void DisplayData()
    {
        std::cout<<"m_i = "<<m_i<<" m_j = "<<m_j<<std::endl;
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
    CMAnish objManish(11,22);
    objManish.DisplayData();
    double dd = objManish;
    std::cout<<"dd = "<<dd<<std::endl;
    return 0;
}