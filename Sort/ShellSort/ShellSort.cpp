#include "ShellSort.h"

ShellSort::ShellSort(int *DirArray,int nb_data_r)
{
    Dir_Array = DirArray;
    nb_data = nb_data_r;
}

ShellSort::~ShellSort()
{
    Dir_Array = new int;
    delete Dir_Array;
    Dir_Array = NULL;
}

void ShellSort::InitSort(bool ascendant)
{
    Sort(ascendant ? 1 : -1);
}

void ShellSort::Sort(int ascendant)
{
    int h = 1;
    while(h < nb_data/3)    h=3*h + 1;

    while(h >= 1)
    {//h-asort the array
        for(int i = h; i < nb_data; i++)
        {
            for(int j = i; j >= h && (Dir_Array[j]*ascendant < Dir_Array[j-h]*ascendant); j -= h)
            {
                Exchange(j, j-h);
            }
        }
        h = h/3;
    }
}

void ShellSort::Exchange(int i, int j)
{
    if(i == j) return;
    Aux = Dir_Array[i];
    Dir_Array[i] = Dir_Array[j];
    Dir_Array[j] = Aux;
}