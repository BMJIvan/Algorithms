#include "MergeSortBU.h"

MergeSortBU::MergeSortBU(int *DirArray,int *DirAux,int *Data)
{
    Dir_Array=DirArray;
    Dir_Aux=DirAux;
    NumDat=Data;
    for(int i=0;i<*NumDat;i++)
    {
        *(Dir_Aux+i)=*(DirArray+i);
    }
}

MergeSortBU::~MergeSortBU()
{
    Dir_Array=new int;
    delete Dir_Array;
    Dir_Array=NULL;
    NumDat=new int;
    delete NumDat;
    NumDat=NULL;
}

void MergeSortBU::Merge(int low,int middle,int high)
{
    int i=low;
    int j=middle+1;
    for(int k=low;k<=high;k++)
    {
        if(i>middle)                            *(Dir_Array+k)=*(Dir_Aux+(j++));
        else if(j>high)                         *(Dir_Array+k)=*(Dir_Aux+(i++));
        else if((*(Dir_Aux+i)-*(Dir_Aux+j))>0)  *(Dir_Array+k)=*(Dir_Aux+(j++));
        else                                    *(Dir_Array+k)=*(Dir_Aux+(i++)); 
    }

    for(int k=low;k<=high;k++)  
    {
        *(Dir_Aux+k)=*(Dir_Array+k);
    }
}

void MergeSortBU::Sort(int low,int high)
{
    for (int sz=1;sz<*NumDat;sz+=sz)
    {
        for(int low=0;low<*NumDat-sz;low+=sz+sz)
        {
            int high=(low+sz+sz-*NumDat)<0 ? low+sz+sz-1:*NumDat-1;
            Merge(low,low+sz-1,high);
        }
            
    }
}

void MergeSortBU::InitSort()
{
    Sort(0,*NumDat-1);
}