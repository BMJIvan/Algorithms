#ifndef QuickSort_H
#define QuickSort_H
#include <cstdlib>

class QuickSort
{
    private:
        int *Dir_Array;
        int *nb_data;
        int Aux;
    public:
        QuickSort(int *Dir_array_r,int *nb_data_r);
        ~QuickSort();
        void InitSort();
    private:
        int Partition(int low, int high);
        void Exchange(int , int);
        void Sort(int , int);
};

#endif