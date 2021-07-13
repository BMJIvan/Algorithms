#include "InsertionSort.h"

InsertionSort::InsertionSort(int *DirArray,int nb_data_r)
{
    Dir_Array = DirArray;
    nb_data = nb_data_r;
}

InsertionSort::~InsertionSort()
{
    Dir_Array = new int;
    delete Dir_Array;
    Dir_Array = NULL;
}

void InsertionSort::InitSort(bool ascendant)
{
    Sort(ascendant ? 1 : -1);
}

void InsertionSort::Sort(int ascendant)
{
    for(int i = 0; i < nb_data; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(Dir_Array[j]*ascendant < Dir_Array[j-1]*ascendant)
            {
                Exchange(j, j-1);
            }   
            else break;
        }
    }
}

void InsertionSort::Exchange(int i, int j)
{
    if(i == j) return;
    Aux = Dir_Array[i];
    Dir_Array[i] = Dir_Array[j];
    Dir_Array[j] = Aux;
}