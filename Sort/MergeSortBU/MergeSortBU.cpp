#include "MergeSortBU.h"

MergeSortBU::MergeSortBU(int *Array_r, int *Aux_r, int *nb_data_r)
{
    Array = Array_r;
    Aux = Aux_r;
    nb_data = nb_data_r;
    for(int i = 0; i < *nb_data; i++)   Aux[i] = Array[i];
}

MergeSortBU::~MergeSortBU()
{
    Array = new int;
    delete Array;
    Array = NULL;
    Aux = new int;
    delete Aux;
    Aux = NULL;
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
        if(i > middle)                                      Array[k] = Aux[j++];
        else if(j > high)                                   Array[k] = Aux[i++];
        else if((Aux[i]*ascendant - Aux[j]*ascendant) > 0)  Array[k] = Aux[j++];
        else                                                Array[k] = Aux[i++]; 
    }

    for(int k = low; k <= high; k++)  Aux[k] = Array[k];
}

void MergeSortBU::Sort()
{
    int high;
    for (int sz = 1; sz < *nb_data; sz += sz)
    {
        for(int low = 0; low < *nb_data - sz; low += sz + sz)
        {
            high=(low + sz + sz - *nb_data) < 0 ? low + sz + sz - 1 : *nb_data - 1;
            Merge(low, low+sz - 1, high);
        }
    }
}

void MergeSortBU::InitSort(bool ascendant_bool)
{
    ascendant = ascendant_bool==true ? 1 : -1;
    Sort();
}