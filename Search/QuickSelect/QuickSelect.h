#ifndef QuickSelect_H
#define QuickSelect_H
#include <cstdlib>
class QuickSelect
{
    private:
        int *Dir_Array;
        int *Dir_Aux;
        int *NumDat;
        int Aux;
    public:
        QuickSelect(int *,int *,int *);
        ~QuickSelect();
        int Min();
        int Min(int);
        int Max();
        int Max(int);
    private:
        int Partition(int,int,int);
        void Exchange(int,int);
        void Select(int,int);
};

#endif