#ifndef MergeSort_H
#define MergeSort_H
#include <cstdlib>

class MergeSort
{
    private:
        int *NumDat;
        int *Dir_Array;
        int *Dir_Aux;
        
    public:
        MergeSort(int *,int *,int *);
        ~MergeSort();
        void InitSort();
    
    private:
        void Merge(int,int,int);
        void Sort(int,int);
};
#endif