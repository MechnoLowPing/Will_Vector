#include<iostream>
#include<vector>
#include"vector.hpp"


void mainloop(std::vector<int>& intcontainer){

    int option;

    while(true){

        std::cout<<"Quit 0) Addition 1)"<<std::endl;
        std::cin>>option;

        namespace vc = vectorcalc;

        switch (option){
        default: std::cout<<"Fehler"<<std::endl; break;
        case 1: vectorcalc::addition(intcontainer);  break;
        case 0: return;
        }
    }
}


int main(){

    std::vector<int> container{0, 1};
    mainloop(container);

}

