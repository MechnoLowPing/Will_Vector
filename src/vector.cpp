#include<iostream>
#include<vector>
#include"vector.hpp"



namespace vectorcalc{

    void vector_T::addition(){

        std::cout<<"Geben Sie 2 Zahlen ein!"<<std::endl;
        std::cin>>vector_T::_container.at(0);
        std::cin>>vector_T::_container.at(1);

        int a = vector_T::_container.at(0)+vector_T::_container.at(1);
        std::cout<<"Das Ergebniss ist: "<< a << std::endl;

    }

}

