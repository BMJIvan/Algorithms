#ifndef SelectionSort_H
#define SelectionSort_H
#include <cstdlib>
class SelectionSort
{
    private:
        int *Dir_Array;
        int nb_data;
        int Aux;
    public:
        SelectionSort(int *Dir_array,int nb_data);
        ~SelectionSort();
        void InitSort(bool ascendant);
    private:
        void Sort(int ascendant);
        void Exchange(int,int);

};

#endif