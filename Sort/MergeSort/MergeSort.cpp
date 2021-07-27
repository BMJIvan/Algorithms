#include "MergeSort.h"

MergeSort::MergeSort(int *Array_r,int *Aux_r,int *nb_data_r)
{
    Array = Array_r;
    Aux = Aux_r;
    nb_data = nb_data_r;
    for(int i = 0; i < *nb_data; i++)   Aux[i] = Array[i];
    CUTOFF = 1;
}

MergeSort::MergeSort(int *Array_r,int *Aux_r,int *nb_data_r, int *CUTOFF_r)
{
    Array = Array_r;
    Aux = Aux_r;
    nb_data = nb_data_r;
    for(int i = 0; i < *nb_data; i++)   Aux[i] = Array[i];

    CUTOFF = *CUTOFF_r > 1 ? *CUTOFF_r : 1;
    InSort.AddArray(Aux_r);    
}

MergeSort::~MergeSort()
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

void MergeSort::Merge(int low, int middle, int high)
{
    int i = low;
    int j = middle+1;
    for(int k = low; k <= high; k++)
    {
        if(i > middle)                            Array[k] = Aux[j++];
        else if(j > high)                         Array[k] = Aux[i++];
        else if((Aux[i]*ascendant - Aux[j]*ascendant) > 0)            Array[k] = Aux[j++];
        else                                                          Array[k] = Aux[i++]; 
    }

    for(int k = low; k <= high; k++)    Aux[k] = Array[k];
}

void MergeSort::Sort(int low, int high)
{
    if(high <= (low + CUTOFF - 1))
    {
        InSort.InitSort(low, high); //improvement: use insertion sort for small arrays 
        for(int k = low; k <= high; k++)    Array[k] = Aux[k];
        return;
    } 
    int middle = low + (high - low)/2;
    Sort(low, middle);
    Sort(middle + 1, high);
    if( Array[middle+1]*ascendant - Array[middle]*ascendant > 0) return; //stop if already sort
    Merge(low, middle, high);
}

void MergeSort::InitSort(bool ascendant_bool)
{
    ascendant = ascendant_bool ? 1 : -1;
    InSort.AddAscendant(ascendant);
    Sort(0, *nb_data - 1);
}