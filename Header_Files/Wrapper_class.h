#pragma once

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class WrapperClass
            {
                int* m_p;
                public:
                explicit WrapperClass(const int& iVal = 0);
                ~WrapperClass();
                int& GetVal() const;
                void SetVAl(const int& ival);
            };
        }
    }
}