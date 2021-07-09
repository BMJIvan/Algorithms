#ifndef QuickSort3way_H
#define QuickSort3way_H
#include <cstdlib>

class QuickSort3way
{
    private:
        int *Dir_Array;
        int *NumDat;
        int Aux;
        int Auxi;
        int Auxl;
        int Auxh;
        int AuxV;
        int AuxCmp;
    public:
        QuickSort3way(int *,int *);
        ~QuickSort3way();
        void InitSort();
    private:
        void Exchange(int,int);
        void Sort(int,int);
        int Compare(int,int);
};

#endif