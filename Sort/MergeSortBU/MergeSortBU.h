#ifndef MergeSortBU_H
#define MergeSortBU_H
#include <cstdlib>

class MergeSortBU //Bottom-up
{
    private:
        int *nb_data;
        int *Array;
        int *Aux;
        int ascendant;
        
    public:
        MergeSortBU(int *Array_r, int *Aux_r, int *nb_data_r);
        ~MergeSortBU();
        void InitSort(bool ascendant);

    private:
        void Merge(int low, int middle, int high);
        void Sort();
};
#endif

