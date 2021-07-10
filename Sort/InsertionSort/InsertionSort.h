#ifndef InsertionSort_H
#define InsertionSort_H
#include <cstdlib>
class InsertionSort
{
    private:
        int *Dir_Array;
        int *nb_data;
        int Aux;
    public:
        InsertionSort(int *Diir_array,int *nb_data);
        ~InsertionSort();
        void InitSort();
    private:
        void Sort();
        void Exchange(int,int);

};

#endif