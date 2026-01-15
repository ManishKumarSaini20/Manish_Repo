#include "..\Header_Files\Casting_Operators.h"

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            baseClass::baseClass()
            {
                std::cout << "baseClass::baseClass" << std::endl;
            }

            baseClass::~baseClass()
            {
                std::cout << "baseClass::~baseClass" << std::endl;
            }

            void baseClass::DiaplayFunc()
            {
                std::cout << "baseClass::DiaplayFunc" << std::endl;
            }

            void baseClass::baseclassFunc()
            {
                std::cout << "baseClass::baseclassFunc" << std::endl;
            }

            derivedClass::derivedClass()
            {
                std::cout << "derivedClass::derivedClass" << std::endl;
            }

            derivedClass::~derivedClass()
            {
                std::cout << "derivedClass::~derivedClass" << std::endl;
            }

            void derivedClass::DiaplayFunc()
            {
                std::cout << "derivedClass::DiaplayFunc" << std::endl;
            }

            void derivedClass::driveclassFunc()
            {
                std::cout << "derivedClass::driveclassFunc" << std::endl;
            }

            const_cast_class::const_cast_class(int ival, int jval) : m_i(ival), m_j(jval)
            {
                std::cout << "const_cast_class::const_cast_class.\n";
            }

            const_cast_class::~const_cast_class()
            {
                std::cout << "const_cast_class::~const_cast_class.\n";
            }

            void const_cast_class::DisplayVal()
            {
                std::cout << "m_i = " << m_i << " m_j = " << m_j << std::endl;
            }

            void const_cast_class::SetValue(int ival, int jval) const
            {
                const_cast<const_cast_class *>(this)->m_i = ival;
                const_cast<const_cast_class *>(this)->m_j = jval;
            }
        }
    }
}