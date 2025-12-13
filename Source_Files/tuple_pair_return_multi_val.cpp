#include "..\Header_Files\tuple_pair_return_multi_val.h"

namespace MANISH
{
    namespace ROOPA
    {
        namespace VIRAT
        {
            void tuple_pair_return_multi_val::tuple_get_make()
            {
                std::cout<<"tuple_pair_return_multi_val::tuple_get_make.\n";
                std::tuple<int,char,float> objtup = std::make_tuple(11,'v',22);
                std::cout<<std::get<0>(objtup)<<std::endl;
                std::cout<<std::get<1>(objtup)<<std::endl;
                std::cout<<std::get<2>(objtup)<<std::endl;
            }
            void tuple_pair_return_multi_val::tuple_size(int& iSize) const
            {
                std::cout<<"tuple_pair_return_multi_val::tuple_size.\n";
                std::tuple<int,char,float,double> objtup = std::make_tuple(11,'v',22,33);
                iSize = std::tuple_size<decltype(objtup)>::value;
            }
            void tuple_pair_return_multi_val::tuple_swap()
            {
                std::cout<<"tuple_pair_return_multi_val::tuple_swap.\n";
                std::tuple<int,char,float> objtup1 = std::make_tuple(1,'a',2);
                std::tuple<int,char,float> objtup2 = std::make_tuple(3,'b',4);
                std::cout<<"Here is tup1.\n";
                std::cout<<std::get<0>(objtup1)<<std::endl;
                std::cout<<std::get<1>(objtup1)<<std::endl;
                std::cout<<std::get<2>(objtup1)<<std::endl;
                std::cout<<"Here is tup2.\n";
                std::cout<<std::get<0>(objtup2)<<std::endl;
                std::cout<<std::get<1>(objtup2)<<std::endl;
                std::cout<<std::get<2>(objtup2)<<std::endl;

                std::cout<<"Now we aare swaping objtup2 and objtup2 ";
                objtup1.swap(objtup2);
                std::cout<<"Here is tup1.\n";
                std::cout<<std::get<0>(objtup1)<<std::endl;
                std::cout<<std::get<1>(objtup1)<<std::endl;
                std::cout<<std::get<2>(objtup1)<<std::endl;
                std::cout<<"Here is tup2.\n";
                std::cout<<std::get<0>(objtup2)<<std::endl;
                std::cout<<std::get<1>(objtup2)<<std::endl;
                std::cout<<std::get<2>(objtup2)<<std::endl;
            }
            void tuple_pair_return_multi_val::tuple_cat()
            {
                std::cout<<"tuple_pair_return_multi_val::tuple_cat.\n";
                std::tuple<int,char,float> objtup1 = std::make_tuple(1,'a',2);
                std::tuple<int,int,float> objtup2 = std::make_tuple(3,777,4);
                std::cout<<"Here is tup1.\n";
                std::cout<<std::get<0>(objtup1)<<std::endl;
                std::cout<<std::get<1>(objtup1)<<std::endl;
                std::cout<<std::get<2>(objtup1)<<std::endl;
                std::cout<<"Here is tup2.\n";
                std::cout<<std::get<0>(objtup2)<<std::endl;
                std::cout<<std::get<1>(objtup2)<<std::endl;
                std::cout<<std::get<2>(objtup2)<<std::endl;
                std::cout<<"Here is tup3 after tuple_cat.\n";
                auto objtup3 = std::tuple_cat(objtup1, objtup2);
                std::cout<<std::get<0>(objtup3)<<std::endl;
                std::cout<<std::get<1>(objtup3)<<std::endl;
                std::cout<<std::get<2>(objtup3)<<std::endl;
                std::cout<<std::get<3>(objtup3)<<std::endl;
                std::cout<<std::get<4>(objtup3)<<std::endl;
                std::cout<<std::get<5>(objtup3)<<std::endl;
            }
            void tuple_pair_return_multi_val::tuple_tie()
            {
                std::cout<<"tuple_pair_return_multi_val::tuple_tie.\n";
                int a = 0;
                char b;
                float c = 0;
                std::tuple<int,char,float> objtup1 = std::make_tuple(11,'g',33);
                std::tie(a,b,c) = objtup1;
                std::cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<std::endl;
            }
            std::pair<int,char> tuple_pair_return_multi_val::func_retrun_pair()
            {
                std::cout<<"tuple_pair_return_multi_val::func_retrun_pair.\n";
                int a = 10;
                char c = 'a';
                return std::make_pair(a,c);
            }
            std::tuple<int,char,float> tuple_pair_return_multi_val::func_retrun_tuple()
            {
                std::cout<<"tuple_pair_return_multi_val::func_retrun_tuple.\n";
                int a = 20;
                char c = 'b';
                float f = 30;
                return std::make_tuple(a,c,f);
            }
            void tuple_pair_return_multi_val::funcreturningstruct(retfromfunc* objretfromfunc)
            {
                std::cout<<"tuple_pair_return_multi_val::funcreturningstruct.\n";
                objretfromfunc->a = 10;
                objretfromfunc->c = 'f';
                objretfromfunc->f = 20;
            }
            std::array<int,5> tuple_pair_return_multi_val::funcreturningarray()
            {
                std::cout<<"tuple_pair_return_multi_val::funcreturningarray.\n";
                return {1,2,3,4,5};
            }
            std::vector<int> tuple_pair_return_multi_val::funcreturningvector()
            {
                std::cout<<"tuple_pair_return_multi_val::funcreturningvector.\n";
                return {1,2,3,4,5,6,7,8,9};
            }
            void tuple_pair_return_multi_val::funcreturningreferenceandpointer(int& a, char* c, float& f)
            {
                std::cout<<"tuple_pair_return_multi_val::funcreturningreferenceandpointer.\n";
                a = 10;
                *c = 'b';
                f = 30;
            }
        }
    }
}