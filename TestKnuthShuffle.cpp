#include <iostream>
#include <time.h>
#include <math.h>
#include "Sort/KnuthShuffle/KnuthShuffle.h" 

void show_array(int *array, int nb_data);

int main ()
{
    //head
    srand(time(NULL));
    unsigned t0 = 0, t1 = 0;
    double Time;
    int nb_data = 30;
    int array[nb_data] = {};
    
    for (int i = 0; i < nb_data; i++)
    {
        array[i]=nearbyint(rand()%(nb_data*5));
    } 

    KnuthShuffle Srt(array, nb_data);
   
    
    //body
    t0=clock();
    std::cout<<std::endl<<"inicio programa"<<std::endl;
    show_array(array, nb_data);

    std::cout<<std::endl<<"KnuthShuffle"<<std::endl;
    Srt.Shuffle();
    show_array(array, nb_data);

    std::cout<<std::endl<<"KnuthShuffle"<<std::endl;
    Srt.Shuffle();
    show_array(array, nb_data);
    
    t1=clock();
    Time=(double(t1-t0)/CLOCKS_PER_SEC)*1000;
    std::cout<<std::endl<<"Time: "<<Time<<std::endl;
    //system("Pause");
    return 0;   
}

void show_array(int *array, int nb_data){
    for(int i = 0; i < nb_data; i++){
        std::cout<<array[i]<<",";
    }
    std::cout<<std::endl;
};