#include "HeapSort.h"

HeapSort::HeapSort(int *Array_r, int length_r)
{
    Array = Array_r;
    length = length_r;
}

HeapSort::~HeapSort()
{
    Array = new int;
    delete Array;
    Array = NULL;
}

void HeapSort::InitSort(bool ascendant_r)
{
    ascendant = ascendant_r;
    Sort();
}

void HeapSort::Sort()
{
    int N = length;
    for(int k = k/2; k >= 1; k--)   Sink(k, N); //bootom-up method
    
    while(N > 1)
    {
        Exchange(1, N--);
        Sink(1, N);
    }
}

void HeapSort::Sink(int k, int N)
{
    while(2*k <= N)
    {
        int j = 2*k;
        if(j < N && Compare(j, j+1))  j++;
        if(!Compare(k, j)) break;
        Exchange(k, j);
        k = j;
    }
}

void HeapSort::Exchange(int i, int j)
{
    if(i-- == j--) return;
    Aux = Array[i];
    Array[i] = Array[j];
    Array[j] = Aux;
}

bool HeapSort::Compare(int i, int j)
{
    i--;
    j--;
    return ascendant==true ? Array[i] < Array[j] : Array[i] > Array[j];
}