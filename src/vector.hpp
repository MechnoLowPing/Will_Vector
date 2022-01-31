#ifndef vector_hpp
#define vector_hpp
#include<vector>

namespace vectorcalc{

    void dialog(std::vector<int>& container){

        std::cout<<"Geben Sie 2 Zahlen ein!"<<std::endl;
        std::cin>>container.at(0);
        std::cin>>container.at(1);
    }

    void addition(std::vector<int>& container){

        dialog(container);

        int a = container.at(0)+container.at(1);
        std::cout<<"Das Ergebniss ist: "<< a << std::endl;

    }
}



#endif