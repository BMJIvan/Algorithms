#ifndef MergeSort_H
#define MergeSort_H
#include <cstdlib>
#include "InsertionSort.h"

class MergeSort: protected InsertionSort
{
    private:
        int *nb_data;
        int *Array;
        int *Aux;
        
        int CUTOFF; 
        InsertionSort InSort;
        int ascendant;

    public:
        MergeSort(int *Array_r, int *Aux_r, int *nb_data_r);
        MergeSort(int *Array_r, int *Aux_r, int *nb_data_r, int *CUTOFF_r);
        ~MergeSort();
        void InitSort(bool ascendant_bool);
    
    private:
        void Merge(int low, int middle, int high);
        void Sort(int low, int high);
};
#endif