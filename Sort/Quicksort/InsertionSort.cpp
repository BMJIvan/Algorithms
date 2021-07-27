#include "InsertionSort.h"

InsertionSort::InsertionSort(int *Array_r)
{
    Array = Array_r;
}

InsertionSort::InsertionSort()
{

}

InsertionSort::~InsertionSort()
{
    Array = new int;
    delete Array;
    Array = NULL;
}

void InsertionSort::AddArray(int *Array_r)
{
    Array = Array_r;
}

void InsertionSort::AddAscendant(int ascendant_r)
{
    ascendant = ascendant_r;
}

void InsertionSort::InitSort(int low_r, int high_r)
{
    low = low_r;
    high = high_r;
    Sort(ascendant);
}

void InsertionSort::Sort(int ascendant)
{
    for(int i = low; i <= high; i++)
    {
        for(int j = i; j > low; j--)
        {
            if(Array[j]*ascendant < Array[j-1]*ascendant)
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
    Aux = Array[i];
    Array[i] = Array[j];
    Array[j] = Aux;
}