#ifndef InsertionSort_H
#define InsertionSort_H
#include <cstdlib>

class InsertionSort
{
    private:
        int *Dir_Array;
        int nb_data;
        int Aux;
    public:
        InsertionSort(int *Dir_array, int nb_data_r);
        ~InsertionSort();
        void InitSort(bool ascendent);
    private:
        void Sort(int ascendent);
        void Exchange(int, int);

};

#endif