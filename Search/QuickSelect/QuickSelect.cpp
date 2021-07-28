#include "QuickSelect.h"

QuickSelect::QuickSelect(int *Array_r, int *Datos)
{
    Array = Array_r;
    nb_data = Datos;
    for(int i=0; i < *nb_data; i++)     Array[i] = Array[i];
}

QuickSelect::~QuickSelect()
{
    Array = new int;
    delete Array;
    Array = NULL;
    nb_data = new int;
    delete nb_data;
    nb_data = NULL;
}

int QuickSelect::Partition(int low, int high)
{
    int i = low;
    int j = high+1;
    while(true)
    {
        while(Array[++i]*ascendant - Array[low]*ascendant < 0) 
        {   
            if(i == high) break;
        }

        while(Array[low]*ascendant - Array[--j]*ascendant < 0)
        {
            if(j == low) break;
        }    

        if(i >= j) break;
        Exchange(i, j);
    }
    Exchange(low, j);	
    return j;
}

void QuickSelect::Exchange(int i,int j)
{
    if(i == j) return;
    Aux = Array[i];
    Array[i] = Array[j];
    Array[j] = Aux;
      
}

void QuickSelect::Select(int k)
{
    int j;
    int low = 0;
    int high = *nb_data-1;
    while(high > low)
    {
        j = Partition(low, high);
        if      (j < k) low = j+1;
        else if (j > k) high = j-1;
        else            return;
    }
    return;
}

int QuickSelect::Min(int k)
{
    ascendant = 1;
    Select(k-1);
    return Array[k-1];
}

int QuickSelect::Max(int k)
{
    ascendant = -1;
    Select(k-1);
    return Array[k-1];
}

int QuickSelect::Min()
{
    ascendant = 1;
    Select(0);
    return Array[0];
}

int QuickSelect::Max()
{
    ascendant = -1;
    Select(0);
    return Array[0];
}
