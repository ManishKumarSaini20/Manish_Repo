#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;

void callbackadd(int a, int b)
{
    int c = a+b;
    cout<<"c = "<<c<<endl;
}

void InitF(void (*callbackFunc)(int, int), int a, int b)
{
    a = a + 5;
    b = b + 5;
    callbackFunc(a,b);
}

class CManish
{
public:
    bool operator()(int x)
    {
        return x<0?true:false;
    }
};

using MYVECT = vector<int>;
int main()
{
    std::cout<<"Hello Manish.\n";
    callbackadd(10,20);
    InitF(callbackadd, 10, 20);
    MYVECT Vect1 {1,2,3,-4,5,6,-7};
    MYVECT::iterator it = find_if(Vect1.begin(), Vect1.end(), CManish());
    cout<<"*it = "<<*it<<endl;
    return 0;
}