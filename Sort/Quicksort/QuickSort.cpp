#include "QuickSort.h"


QuickSort::QuickSort(int *Dir_Array_r, int *nb_data_r)
{
    Dir_Array = Dir_Array_r;
    nb_data = nb_data_r;
}

QuickSort::~QuickSort()
{
    Dir_Array = new int;
    delete Dir_Array;
    Dir_Array = NULL;
    nb_data = new int;
    delete nb_data;
    nb_data = NULL;}

int QuickSort::Partition(int low, int high)
{
    int i = low;
    int j = high + 1;
    while(true)
    {
        while(*(Dir_Array+(++i)) - *(Dir_Array+low) < 0) 
        {   
            if(i == high) break;
        }

        while(*(Dir_Array+low) - *(Dir_Array+(--j)) < 0)
        {
            if(j==low) break;
        }    

        if(i>=j) break;

        Exchange(i,j);

    }
    Exchange(low,j);
    return j;
}


void QuickSort::Sort(int low,int high)
{
    if(high<=low)   return;
    int j=Partition(low,high);
    Sort(low,j-1);
    Sort(j+1,high);
}

void QuickSort::Exchange(int i,int j)
{
    if(i==j) return;
    Aux=*(Dir_Array+i);
    *(Dir_Array+i)=*(Dir_Array+j);
    *(Dir_Array+j)=Aux;
    /*if(a==b) return;
    *(Dir_Array+a)-=*(Dir_Array+b);
    *(Dir_Array+b)+=*(Dir_Array+a);
    *(Dir_Array+a)=*(Dir_Array+b)-*(Dir_Array+a);*/ 
}

void QuickSort::InitSort()
{
    Sort(0,*nb_data-1);
}
