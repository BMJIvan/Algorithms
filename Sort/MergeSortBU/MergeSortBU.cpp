#include "MergeSortBU.h"

MergeSortBU::MergeSortBU(int *Dir_Array_r, int *Dir_Aux_r, int *nb_data_r)
{
    Dir_Array = Dir_Array_r;
    Dir_Aux = Dir_Aux_r;
    nb_data = nb_data_r;
    for(int i = 0; i < *nb_data; i++)
    {
        *(Dir_Aux+i) = *(Dir_Array+i);
    }
}

MergeSortBU::~MergeSortBU()
{
    Dir_Array = new int;
    delete Dir_Array;
    Dir_Array = NULL;
    nb_data = new int;
    delete nb_data;
    nb_data = NULL;
}

void MergeSortBU::Merge(int low, int middle, int high)
{
    int i = low;
    int j = middle + 1;
    for(int k = low; k <= high; k++)
    {
        if(i > middle)                              *(Dir_Array+k) = *(Dir_Aux+(j++));
        else if(j > high)                           *(Dir_Array+k) = *(Dir_Aux+(i++));
        else if((*(Dir_Aux+i) - *(Dir_Aux+j)) > 0)  *(Dir_Array+k) = *(Dir_Aux+(j++));
        else                                        *(Dir_Array+k) = *(Dir_Aux+(i++)); 
    }

    for(int k = low; k <= high; k++)  
    {
        *(Dir_Aux+k) = *(Dir_Array+k);
    }
}

void MergeSortBU::Sort(int low, int high)
{
    for (int sz = 1; sz < *nb_data; sz += sz)
    {
        for(int low = 0; low < *nb_data - sz; low += sz + sz)
        {
            int high=(low+sz + sz - *nb_data) < 0 ? low + sz + sz - 1:*nb_data - 1;
            Merge(low, low+sz - 1, high);
        }
            
    }
}

void MergeSortBU::InitSort()
{
    Sort(0,*nb_data-1);
}