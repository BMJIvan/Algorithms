#include "QuickSort3Way.h"

QuickSort3Way::QuickSort3Way(int *Array_r,int *nb_data_r)
{
    Array = Array_r;
    nb_data = nb_data_r;
}

QuickSort3Way::~QuickSort3Way()
{
    Array=new int;
    delete Array;
    Array=NULL;
    nb_data=new int;
    delete nb_data;
    nb_data=NULL;
}

void QuickSort3Way::Sort(int low,int high)
{
    if(high<=low)   return;
    Auxlow = low;
    Auxhigh = high;
    value = Array[low];
    index = low;

    while(index <= Auxhigh)
    {
        compare = Compare(value, Array[index]);
        if      (compare < 0)  Exchange(Auxlow++, index++);
        else if (compare > 0)  Exchange(index , Auxhigh--);
        else    index++;
    }

    Sort(low, Auxlow - 1);
    Sort(Auxhigh + 1, high);
}

void QuickSort3Way::Exchange(int i, int j)
{
    if(i==j) return;
    Aux = Array[i];
    Array[i] = Array[j];
    Array[j] = Aux;
}

void QuickSort3Way::InitSort(bool ascendant_bool)
{
    ascendant = ascendant_bool == true ? 1 : -1;
    Sort(0,*nb_data-1);
}

int QuickSort3Way::Compare(int i,int j)
{
    if(i == j) return 0;
    return ascendant*(i < j) - ascendant*(i > j);
}


