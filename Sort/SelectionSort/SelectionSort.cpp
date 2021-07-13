#include "SelectionSort.h"

SelectionSort::SelectionSort(int *DirArray, int Datos)
{
    Dir_Array = DirArray;
    nb_data = Datos;
}

SelectionSort::~SelectionSort()
{
    Dir_Array = new int;
    delete Dir_Array;
    Dir_Array = NULL;
}

void SelectionSort::InitSort(bool ascendant)
{
    Sort(ascendant ? 1 : -1);
}

void SelectionSort::Sort(int ascendant)
{
    int min;
    for(int i = 0; i < nb_data; i++)
    {
        min = i;
        for(int j = i+1; j < nb_data; j++)
        {
            if(Dir_Array[j]*ascendant < Dir_Array[min]*ascendant)
            {
                min = j;
            }
        }
        Exchange(i, min);
    }
}

void SelectionSort::Exchange(int i, int j)
{
    if(i == j) return;
    Aux = Dir_Array[i];
    Dir_Array[i] = Dir_Array[j];
    Dir_Array[j] = Aux;
}