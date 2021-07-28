#include <iostream>
//#include <cstdlib>
#include <time.h>
#include <math.h>
#include "Search/QuickSelect/QuickSelect.h" 

void show_array(int *array, int nb_data);

int main ()
{
    //head
    srand(time(NULL));
    unsigned t0 = 0, t1 = 0;
    double Time;
    int nb_data = 30;
    int array[30] = {};
    int value;
    
    for (int i = 0; i < nb_data; i++)   array[i]=nearbyint(rand()%(nb_data*5));
    QuickSelect Srt(array, &nb_data);
    
    //body
    t0=clock();
    std::cout<<std::endl<<"inicio programa"<<std::endl;
    show_array(array, nb_data);

    std::cout<<std::endl<<"QuickSelect Min"<<std::endl;
    value = Srt.Min();
    std::cout<<value<<std::endl;
    show_array(array, nb_data);

    std::cout<<std::endl<<"QuickSelect Min 3rd"<<std::endl;
    value = Srt.Min(3);
    std::cout<<value<<std::endl;
    show_array(array, nb_data);

    std::cout<<std::endl<<"QuickSelect Max"<<std::endl;
    value = Srt.Max();
    std::cout<<value<<std::endl;
    show_array(array, nb_data);

    std::cout<<std::endl<<"QuickSelect Max 3rd"<<std::endl;
    value = Srt.Max(3);
    std::cout<<value<<std::endl;
    show_array(array, nb_data);
 
    t1=clock();
    Time=(double(t1-t0)/CLOCKS_PER_SEC)*1000;
    std::cout<<std::endl<<"Time: "<<Time<<std::endl;
    //system("Pause");
    return 0;   
}

void show_array(int *array, int nb_data){
    for(int i = 0; i < nb_data; i++)    std::cout<<array[i]<<",";
    std::cout<<std::endl;
};