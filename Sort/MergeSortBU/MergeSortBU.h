#ifndef MergeSortBU_H
#define MergeSortBU_H
#include <cstdlib>

class MergeSortBU
{
    private:
        int *NumDat;
        int *Dir_Array;
        int *Dir_Aux;
        
    public:
        MergeSortBU(int *,int *,int *);
        ~MergeSortBU();
        void InitSort();

    private:
        void Merge(int,int,int);
        void Sort(int,int);
};
#endif

