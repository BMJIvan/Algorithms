#ifndef MergeSort_H
#define MergeSort_H
#include <cstdlib>

class MergeSort
{
    private:
        int *nb_data;
        int *Dir_Array;
        int *Dir_Aux;
        
    public:
        MergeSort(int *Dir_array_r, int *Dir_aux_r, int *nb_data_r);
        ~MergeSort();
        void InitSort();
    
    private:
        void Merge(int low, int middle, int high);
        void Sort(int low, int high);
};
#endif