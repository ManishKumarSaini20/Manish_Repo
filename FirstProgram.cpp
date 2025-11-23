#include<iostream>
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

int main()
{
    std::cout<<"Hello Manish.\n";
    callbackadd(10,20);
    InitF(callbackadd, 10, 20);
    return 0;
}