#include "QuickSort.h"


QuickSort::QuickSort(int *Array_r, int *nb_data_r)
{
    Array = Array_r;
    nb_data = nb_data_r;
    kshuffle.AddArray(Array_r, nb_data_r);
    CUTOFF = 1;
}

QuickSort::QuickSort(int *Array_r, int *nb_data_r, int CUTOFF_r)
{
    Array = Array_r;
    nb_data = nb_data_r;
    kshuffle.AddArray(Array_r, nb_data_r);
    CUTOFF = CUTOFF_r > 1 ? CUTOFF_r : 1;
    InSort.AddArray(Array_r);
}

QuickSort::~QuickSort()
{
    Array = new int;
    delete Array;
    Array = NULL;
    nb_data = new int;
    delete nb_data;
    nb_data = NULL;}

int QuickSort::Partition(int low, int high)
{
    int i = low;
    int j = high + 1;
    while(true)
    {
        while(Array[++i]*ascendant - Array[low]*ascendant < 0) 
        {   
            if(i == high) break;
        }

        while(Array[low]*ascendant - Array[--j]*ascendant < 0)
        {
            if(j==low) break;
        }    

        if(i >= j) break;
        Exchange(i, j);
    }
    Exchange(low, j);
    return j;
}


void QuickSort::Sort(int low,int high)
{
    if(high <= (low + CUTOFF - 1))
    {
        InSort.InitSort(low, high); //improvement: use insertion sort for small arrays 
        return;
    } 
    
    //int median = medianOf3(low, low + (high - low)/2, high);
    //swap(low, median);

    int j = Partition(low, high);
    Sort(low, j-1);
    Sort(j+1, high);
}

void QuickSort::Exchange(int i,int j)
{
    if(i == j) return;
    Aux = *(Array+i);
    Array[i] = Array[j];
    Array[j] = Aux;
}

void QuickSort::InitSort(bool ascendant_bool)
{
    Shuffle(); //shuffle needed for performance guarantee
    ascendant = ascendant_bool == true ? 1 : -1;
    InSort.AddAscendant(ascendant);
    Sort(0,*nb_data-1);
}

void QuickSort::Shuffle()
{
    kshuffle.Shuffle();
}