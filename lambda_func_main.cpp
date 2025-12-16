#include <iostream>
#include <vector>
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
    return 0;
}