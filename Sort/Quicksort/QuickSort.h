#ifndef QuickSort_H
#define QuickSort_H
#include <cstdlib>

class QuickSort
{
    private:
        int *Dir_Array;
        int *NumDat;
        int Aux;
    public:
        QuickSort(int *,int *);
        ~QuickSort();
        void InitSort();
    private:
        int Partition(int,int);
        void Exchange(int,int);
        void Sort(int,int);
};

#endif