#ifndef QuickSelect_H
#define QuickSelect_H
#include <cstdlib>
class QuickSelect
{
    private:
        int *Array;
        int Aux;
        int *nb_data;
        int ascendant;

    public:
        QuickSelect(int *Array, int *nb_data_r);
        ~QuickSelect();
        int Min();
        int Min(int);
        int Max();
        int Max(int);
    private:
        int Partition(int low, int high);
        void Exchange(int , int);
        void Select(int k);
};

#endif