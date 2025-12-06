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
        }
    }
}
