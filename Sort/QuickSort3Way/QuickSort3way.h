#ifndef QuickSort3Way_H
#define QuickSort3Way_H
#include <cstdlib>

class QuickSort3Way
{
    private:
        int *Array;
        int *nb_data;
        int Aux;
        int index;
        int Auxlow;
        int Auxhigh;
        int value;
        int compare;
        int ascendant;
    public:
        QuickSort3Way(int *Array,int *nb_data);
        ~QuickSort3Way();
        void InitSort(bool ascendant_bool);
    private:
        void Exchange(int, int);
        void Sort(int, int);
        int Compare(int, int);
};

#endif