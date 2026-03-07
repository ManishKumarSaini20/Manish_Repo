#pragma once
#include <iostream>
#include <vector>
namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {   
            template<typename T>
            class stack_c
            {
                std::vector<int> v_stack;
                public:
                    void push(const T& value);

                    void pop();

                    T& top() const;

                    bool empty() const;

                    std::size_t size() const;
            };
        }
    }
}