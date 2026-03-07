#include "..\Header_Files\stack.h"

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            template<typename T>
            void stack_c<T>::push(const T &value)
            {
                v_stack.push_back(value);
            }

            template<typename T>
            void stack_c<T>::pop()
            {
                if (empty() == false)
                {
                    v_stack.pop_back();
                }
                else
                {
                    std::cerr << "stack is empty.\n";
                }
            }

            template<typename T>
            T& stack_c<T>::top() const
            {
                if (empty() == false)
                {
                    v_stack.back();
                }
                else
                {
                    std::cerr << "stack is empty.\n";
                }
            }

            template<typename T>
            bool stack_c<T>::empty() const
            {
                return v_stack.empty();
            }

            template<typename T>
            std::size_t stack_c<T>::size() const
            {
                if (empty() == false)
                {
                    v_stack.size();
                }
                else
                {
                    std::cerr << "stack is empty.\n";
                    return 0;
                }
            }
        }
    }
}

template class MANISH::ROOPA::VIRAT::stack_c<int>;