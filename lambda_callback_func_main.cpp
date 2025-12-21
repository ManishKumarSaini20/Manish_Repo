#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include "Header_Files\lambda_func.h"


using MYVECT = std::vector<int>;

void printvector(MYVECT vect)
{
    for (int &i : vect)
    {
        std::cout << i << std::endl;
    }
}

bool ascendingvector(const int& a, const int& b)
{
    return (a<b)?true:false;
}

bool descendingvector(const int& a, const int& b)
{
    return (a>b)?true:false;
}

void logerror(const std::string& logmsg)
{
    std::cout<<"Error : "<<logmsg<<std::endl;
}

void raiseerror(void (*callback) (const std::string& ), int ival)
{
    if(ival < 0)
    {
        callback("value is less than 0 so raising the error log");
    }
}

int addf(int a, int b)
{
    return a+b;
}

int subf(int a, int b)
{
    return a-b;
}

int mulf(int a, int b)
{
    return a*b;
}

int divf(int a, int b)
{
    return a/b;
}

void Printfunc(std::function<int(int, int)> callback, int x, int y)
{
    std::cout<<callback(x,y)<<std::endl;
}

int main()
{
     //lambda functionality starts
    auto result_lam = [](int x)
    { 
        return x + x; 
    };

    MYVECT vect1;
    MYVECT vect2;

    auto vectbyref = [&](int x)
    {
        vect1.push_back(x);
        vect2.push_back(x);
    };

    auto vectbyval = [=](int x) mutable
    {
        vect1.push_back(x);
        vect2.push_back(x);
    };

    auto vectmix = [&vect1, vect2](int x) mutable
    {
        vect1.push_back(x);
        vect2.push_back(x);
    };
    std::cout << result_lam(7) << std::endl;
    vectbyref(10);
    vectbyval(20);
    vectmix(30);
    std::cout<<"vect1 is printing.\n";
    printvector(vect1);
    std::cout<<"vect2 is printing.\n";
    printvector(vect2);

    MYVECT vect3 {4,7,1,9,5,2};
    std::cout<<"Print vector without sort.\n";
    printvector(vect3);
    std::sort(vect3.begin(), vect3.end(), [](const int& x, const int& y){return x > y?true:false;});
    std::cout<<"Print vector after sort.\n";
    printvector(vect3);
    MYVECT::iterator it =  std::find_if(vect3.begin(), vect3.end(),[](const int& x){return x == 9?true:false;});
    if(it != vect3.end())
    {
        std::cout<<"*it = "<<*it<<std::endl;
    }   
    std::cout<<"Original vector.\n";
    printvector(vect3);
    std::for_each(vect3.begin(), vect3.end(), [](int& x ){x += 5;});
    std::cout<<"Vector after adding 5 to each variable.\n";
    printvector(vect3);
    //lambda functionality ends

    //callback function functionality starts
    MYVECT vect4{3,6,1,9,11,2,16,4};
    std::cout<<"vect4 before sorting.\n";
    printvector(vect4);
    std::sort(vect4.begin(), vect4.end(), ascendingvector);
    std::cout<<"vect4 after ascending order.\n";
    printvector(vect4);
    std::sort(vect4.begin(), vect4.end(), descendingvector);
    std::cout<<"vect4 after descending order.\n";
    printvector(vect4);
    raiseerror(logerror, -3);
    //callback function functionality ends
    
    //lambda_func.h functionality starts
    //std::unique_ptr<MANISH::ROOPA::VIRAT::lambdafunc> objlambdafunc = std::unique_ptr<MANISH::ROOPA::VIRAT::lambdafunc>();
    MANISH::ROOPA::VIRAT::lambdafunc objlambdafunc;
    objlambdafunc.subscribe([]()
    {
        std::cout<<"1st handler.\n";
    });
    objlambdafunc.subscribe([]()
    {
        std::cout<<"2nd handler.\n";
    });
    objlambdafunc.subscribe([]()
    {
        std::cout<<"3rd handler.\n";
    });
    std::cout << "Simulating button click...\n";
    objlambdafunc.trigger();
    //lambda_func.h functionality ends
    std::function<int(MANISH::ROOPA::VIRAT::lambdafunc&, int,int)> addff = &MANISH::ROOPA::VIRAT::lambdafunc::addf;
    std::cout<<"addf = "<<addff(objlambdafunc, 10,20)<<std::endl;
    Printfunc(addf, 11,22);
    Printfunc(subf, 22,11);
    Printfunc(mulf, 5,6);
    Printfunc(divf, 22,11);
    return 0;
}