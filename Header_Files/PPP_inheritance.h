#pragma once
#include <iostream>

namespace MANSIH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class animal
            {
                int m_i;
                public:
                animal(int ival = 0):m_i(ival)
                {

                }

                ~animal()
                {

                }

                void animalpublic()
                {
                    std::cout<<"animal::animalpublic.\n";
                }

                void animaldisplay()
                {
                    std::cout<<"animal::animaldisplay = "<<"m_i = "<<m_i<<std::endl;
                }

                protected:
                void animalprotected()
                {
                    std::cout<<"animal::animalprotected.\n";
                }
                private:
                void animalprivate()
                {
                    std::cout<<"animal::animalprivate.\n";
                }
            };

            class property
            {
                int m_i;
                public:
                property(int ival = 0):m_i(ival)
                {

                }

                ~property()
                {

                }

                void propertypublic()
                {
                    std::cout<<"animal::propertypublic.\n";
                }

                void propertydisplay()
                {
                    std::cout<<"property::propertydisplay = "<<"m_i = "<<m_i<<std::endl;
                }

                protected:
                void propertyprotected()
                {
                    std::cout<<"animal::propertyprotected.\n";
                }
                private:
                void propertyprivate()
                {
                    std::cout<<"animal::propertyprivate.\n";
                }
            };

            class engine
            {
                int m_i;
                public:
                engine(int ival = 0):m_i(ival)
                {

                }

                ~engine()
                {

                }

                void enginepublic()
                {
                    std::cout<<"animal::enginepublic.\n";
                }

                void enginedisplay()
                {
                    std::cout<<"engine::enginedisplay = "<<"m_i = "<<m_i<<std::endl;
                }

                protected:
                void engineprotected()
                {
                    std::cout<<"animal::engineprotected.\n";
                }
                private:
                void engineprivate()
                {
                    std::cout<<"animal::engineprivate.\n";
                }
            };

            class dog:public animal
            {
                public:
                dog(int ival):animal(ival)
                {

                }

                ~dog()
                {

                }

                void dogfunc()
                {
                    animalpublic();
                    animalprotected();
                }
            };

            class son:protected property
            {
                public:
                son()
                {

                }

                ~son()
                {

                }

                void sonfunc()
                {
                    propertypublic();
                    propertyprotected();
                }
            };

            class car:private engine
            {
                public:
                car()
                {

                }

                ~car()
                {

                }

                void carfunc()
                {
                    enginepublic();
                    engineprotected();
                }
            };
        }
    }
}
