#include "..\Header_Files\Wrapper_class.h"

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            WrapperClass::WrapperClass(const int &iVal):m_p(new int(iVal))
            {
            }
            WrapperClass::~WrapperClass()
            {
                delete m_p;
            }
            int &WrapperClass::GetVal() const
            {
                return *m_p;
            }
            void WrapperClass::SetVAl(const int &ival)
            {
                *m_p = ival;
            }
        }
    }
}