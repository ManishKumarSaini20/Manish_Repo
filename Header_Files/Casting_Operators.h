#include <iostream>

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class baseClass
            {
            public:
                baseClass();

                virtual ~baseClass();

                virtual void DiaplayFunc();

                void baseclassFunc();
            };

            class derivedClass : public baseClass
            {
            public:
                derivedClass();

                ~derivedClass();

                void DiaplayFunc() override;

                void driveclassFunc();
            };

            class const_cast_class
            {
                int m_i;
                int m_j;

            public:
                const_cast_class(int ival = 0, int jval = 0);
                ~const_cast_class();
                void DisplayVal();
                void SetValue(int , int ) const;
            };
        }
    }
}
