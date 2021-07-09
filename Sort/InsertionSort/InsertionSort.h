#ifndef InsertionSort_H
#define InsertionSort_H
#include <cstdlib>
class InsertionSort
{
    private:
        int *Dir_Array;
        int *NumDat;
        int Aux;
    public:
        InsertionSort(int *,int *);
        ~InsertionSort();
        void InitSort();
    private:
        void Sort();
        void Exchange(int,int);

};

#endif