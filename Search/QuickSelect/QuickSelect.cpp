#include "QuickSelect.h"

QuickSelect::QuickSelect(int *DirArray, int *DirAux, int *Datos)
{
    Dir_Array = DirArray;
    Dir_Aux = DirArray;
    NumDat = Datos;
    for(int i=0; i <* NumDat; i++)
    {
        Dir_Aux[i] = Dir_Aux[i];
    }
}

QuickSelect::~QuickSelect()
{
    Dir_Array = new int;
    delete Dir_Array;
    Dir_Array = NULL;
    NumDat = new int;
    delete NumDat;
    NumDat = NULL;
    Dir_Aux = new int;
    delete Dir_Aux;
    Dir_Aux = nullptr;
}

int QuickSelect::Partition(int low, int high, int S)
{
    int i = low;
    int j = high+1;
    while(true)
    {
        while(S*(*(Dir_Aux+(++i))-*(Dir_Aux+low))<0) 
        {   
            if(i == high) break;
        }

        while(S*(*(Dir_Aux+low)-*(Dir_Aux+(--j)))<0)
        {
            if(j == low) break;
        }    

        if(i >= j) break;

        Exchange(i, j);
    }
    Exchange(low, j);
    /*if(S==1) j=low revisar*/	
    return j;
}

void QuickSelect::Exchange(int i,int j)
{
    if(i == j) return;
    Aux = Dir_Array[i];
    Dir_Array[i] = Dir_Array[j];
    Dir_Array[j] = Aux;
    /*if(a==b) return;
    *(Dir_Array+a)-=*(Dir_Array+b);
    *(Dir_Array+b)+=*(Dir_Array+a);
    *(Dir_Array+a)=*(Dir_Array+b)-*(Dir_Array+a);*/     
}

void QuickSelect::Select(int k,int S)
{
    int j;
    int low = 0;
    int high = *NumDat-1;
    while(high > low)
    {
        j=Partition(low, high, S);
        if      (j < k) low = j+1;
        else if (j > k) high = j-1;
        else            return;
    }
    return;
}

int QuickSelect::Min(int k)
{
    Select(k-1, 1);
    return *(Dir_Aux+k-1);
}

int QuickSelect::Max(int k)
{
    Select(k-1, -1);
    return *(Dir_Aux+k-1);
}

int QuickSelect::Min()
{
    Select(0,1);
    return *(Dir_Aux);
}

int QuickSelect::Max()
{
    Select(0,-1);
    return *(Dir_Aux);
}
