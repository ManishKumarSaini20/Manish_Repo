#include "..\Header_Files\do_while_loop.h"

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            dowhileloop::dowhileloop(int ivalue) : m_initialvalue(ivalue)
            {
            }

            dowhileloop::~dowhileloop()
            {
            }

            void dowhileloop::FuncDoWhileLoop(int checkvalue)
            {
                int initialvalue = GetValue();
                std::cout << "checkvalue = " << checkvalue << std::endl;
                std::cout << "initialvalue = " << initialvalue << std::endl;
                int ValueToBeSet = 0;
                if (initialvalue < checkvalue)
                {
                    std::cout<<"We are opting for checkvalue as it is > initialvalue.\n";
                    ValueToBeSet = checkvalue;
                }
                else
                {
                    std::cout<<"We are opting for checkvalue as it is > initialvalue.\n";
                    ValueToBeSet = initialvalue;
                }

                int iMinVal = 0;
                do
                {
                    std::cout << ValueToBeSet << std::endl;
                    --ValueToBeSet;
                } while (ValueToBeSet > iMinVal);
            }

            int dowhileloop::GetValue() const
            {
                return m_initialvalue;
            }
        } // namespace VIRAT
    } // namespace ROOPA
} // namespace MANISH