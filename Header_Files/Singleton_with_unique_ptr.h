#include <iostream>
#include <memory>

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            class Singleton
            {
                Singleton()
                {
                    std::cout << "Singleton::Singleton.\n";
                }
                static std::unique_ptr<Singleton> instance;
                Singleton(const Singleton &) = delete;
                Singleton *operator=(const Singleton &) = delete;

            public:
                static Singleton &CreateInstance()
                {
                    if (nullptr == instance)
                    {
                        instance = std::unique_ptr<Singleton>(new Singleton());
                        // instance = std::make_unique<Singleton>();
                    }
                    return *instance;
                }
                void ShowValue()
                {
                    std::cout << "Singleton::ShowValue is called.\n";
                }
            };
            std::unique_ptr<Singleton> Singleton::instance = nullptr;
        }
    }
}