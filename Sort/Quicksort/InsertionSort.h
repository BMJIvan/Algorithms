#ifndef InsertionSort_H
#define InsertionSort_H
#include <cstdlib>

class InsertionSort
{
    private:
        int *Array;
        int high;
        int low;
        int Aux;
        int ascendant;
    public:
        InsertionSort(int *Array_r);
        InsertionSort();
        ~InsertionSort();
        void AddArray(int *Array_r);
        void AddAscendant(int ascendant_r);
        void InitSort(int low, int high);
    private:
        void Sort(int ascendent);
        void Exchange(int, int);

};

#endif