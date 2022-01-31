#include<iostream>
#include<vector>
#include"vector.hpp"


void mainloop(vectorcalc::vector_T& container){

    int option;
        
    while(true){

        std::cout<<"Quit 0) Addition 1)"<<std::endl;
        std::cin>>option;

        switch (option){
        default: std::cout<<"Fehler"<<std::endl; break;
        case 1: container.addition();  break;
        case 0: return;
        }
    }
}



int main(){

    vectorcalc::vector_T container{};
    mainloop(container);
}

