#ifndef HeapSort_H
#define HeapSort_H
#include <cstdlib>

class HeapSort
{
    private:
        int *Array;
        int length;
        int Aux;
        bool ascendant;
    public:
        HeapSort(int *Array_r, int nb_data_r);
        ~HeapSort();
        void InitSort(bool ascendent);
    private:
        void Sort();
        void Exchange(int, int);
        void Sink(int k, int N);
        bool Compare(int , int);

};

#endif