#include <iostream>
//#include <cstdlib>
#include <time.h>
#include "UnionFind/QuickFind/QuickFind.h"

void show_array(int *array, int nb_data);

int main ()
{
    //head
    srand(time(NULL));
    unsigned t0=0,t1=0;
    double Time;
    int nb_data=10;
    int array[nb_data]={};
    
    for (int i = 0; i < nb_data; i++)
    {
        array[i]=i;
    } 
    /*
    for(int i=0; i<nb_data; i++)
    {
        array[i]=rand()%10+1;
    }
    std::cout<<"Fin de array"<<std::endl;
    */
    
    //body
    QuickFind UF(array, nb_data);

    std::cout<<"inicio del programa"<<std::endl;
    t0=clock();
    show_array(array, nb_data);

    std::cout<<std::endl<<"Union(0,4)"<<std::endl;
    UF.Union(0, 4);
    show_array(array, nb_data);
    std::cout<< (UF.Connected(4, 0) ? "Connected" : "No connected")<<std::endl;

    std::cout<<std::endl<<"Union(2,6)"<<std::endl;
    UF.Union(2, 6);
    show_array(array, nb_data);
    std::cout<< (UF.Connected(6, 2) ? "Connected" : "No connected")<<std::endl;

    std::cout<<std::endl<<"Connected(6,4)"<<std::endl;
    show_array(array, nb_data);
    std::cout<< (UF.Connected(6, 4) ? "Connected" : "No connected")<<std::endl;
    
    t1=clock();
    Time=(double(t1-t0)/CLOCKS_PER_SEC)*1000;
    std::cout<<std::endl<<"Time: "<<Time<<std::endl;
    system("Pause");
    return 0;   
}

void show_array(int *array, int nb_data){
    for(int i=0; i<10; i++){
        std::cout<<array[i]<<",";
    }
    std::cout<<std::endl;
};