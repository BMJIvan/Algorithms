#include "QuickSort3way.h"

QuickSort3way::QuickSort3way(int *DirArray,int *Datos)
{
    Dir_Array=DirArray;
    NumDat=Datos;
}

QuickSort3way::~QuickSort3way()
{
    Dir_Array=new int;
    delete Dir_Array;
    Dir_Array=NULL;
    NumDat=new int;
    delete NumDat;
    NumDat=NULL;
}

void QuickSort3way::Sort(int low,int high)
{
    if(high<=low)   return;
    Auxl=low;
    Auxh=high;
    AuxV=*(Dir_Array+low);
    Auxi=low;

    while(Auxi<=Auxh)
    {
        AuxCmp=Compare(AuxV,*(Dir_Array+Auxi));
        if      (AuxCmp<0)  Exchange(Auxl++,Auxi++);
        else if (AuxCmp>0)  Exchange(Auxi,Auxh--);
        else    Auxi++;
    }

    Sort(low,Auxl-1);
    Sort(Auxh+1,high);
}

void QuickSort3way::Exchange(int i,int j)
{
    if(i==j) return;
    Aux=*(Dir_Array+i);
    *(Dir_Array+i)=*(Dir_Array+j);
    *(Dir_Array+j)=Aux;
}

void QuickSort3way::InitSort()
{
    Sort(0,*NumDat-1);
}

int QuickSort3way::Compare(int i,int j)
{
    if(i==j) return 0;
    return 1*(i<j)-1*(i>j);
}


