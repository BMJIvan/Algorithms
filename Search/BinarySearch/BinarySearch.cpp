#include "BinarySearch.h"

BinarySearch::BinarySearch(int *Dir,int Datos)
{
    Dir_A=Dir;
    Dat=Datos;
}

BinarySearch::~BinarySearch()
{
    Dir_A=new int;
    delete Dir_A;
    Dir_A=NULL;
}

int BinarySearch::Search(int Key)
{
    int low=0;
    int high=Dat-1;
    int middle;
    while(low<=high)
    {
        middle=low+(high-low)/2;
        if(Key<*(Dir_A+middle)) high=middle-1;
        else if(Key>*(Dir_A+middle)) low=middle+1;    
        else break;
    }
    if (Key==*(Dir_A+middle)) return 1;
    else return -1;
}
