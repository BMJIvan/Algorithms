#include "InsertionSort.h"

InsertionSort::InsertionSort(int *DirArray,int *Datos)
{
    Dir_Array=DirArray;
    NumDat=Datos;
}

InsertionSort::~InsertionSort()
{
    Dir_Array=new int;
    delete Dir_Array;
    Dir_Array=NULL;
    NumDat=new int;
    delete NumDat;
    NumDat=NULL;
}

void InsertionSort::InitSort()
{
    Sort();
}

void InsertionSort::Sort()
{
    for(int i=0;i<*NumDat;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(*(Dir_Array+j)-*(Dir_Array+j-1)<0)
            {
                Exchange(j,j-1);
            }   
            else break;
        }
    }
}

void InsertionSort::Exchange(int i,int j)
{
    if(i==j) return;
    Aux=*(Dir_Array+i);
    *(Dir_Array+i)=*(Dir_Array+j);
    *(Dir_Array+j)=Aux;
}