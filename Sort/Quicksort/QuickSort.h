#ifndef QuickSort_H
#define QuickSort_H
#include <cstdlib>
#include "KnuthShuffle.h"
#include "InsertionSort.h"

class QuickSort
{
    private:
        int *Array;
        int *nb_data;
        int Aux;
        int ascendant;
        KnuthShuffle kshuffle;

        int CUTOFF;
        InsertionSort InSort;

    public:
        QuickSort(int *Array_r,int *nb_data_r, int CUTOFF_r);
        QuickSort(int *Array_r,int *nb_data_r);
        ~QuickSort();
        void InitSort(bool ascendant_bool);

    private:
        int Partition(int low, int high);
        void Exchange(int , int);
        void Sort(int , int);
        void Shuffle();
};

#endif