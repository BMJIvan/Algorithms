#ifndef MergeSortBU_H
#define MergeSortBU_H
#include <cstdlib>

class MergeSortBU
{
    private:
        int *nb_data;
        int *Dir_Array;
        int *Dir_Aux;
        
    public:
        MergeSortBU(int *Dir_Array_r, int *Dir_Aux_r, int *nb_data_r);
        ~MergeSortBU();
        void InitSort();

    private:
        void Merge(int low, int middle, int high);
        void Sort(int low, int high);
};
#endif

