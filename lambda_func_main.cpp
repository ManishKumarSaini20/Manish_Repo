#include <iostream>
#include <vector>
#include <algorithm>
using MYVECT = std::vector<int>;

void printvector(MYVECT vect)
{
    for (int &i : vect)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
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
    // now write the code for the STL algorithms and try to put the lambda functions in a class
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
    return 0;
}