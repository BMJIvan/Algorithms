#ifndef ShellSort_H
#define ShellSort_H
#include <cstdlib>

class ShellSort
{
    private:
        int *Dir_Array;
        int nb_data;
        int Aux;
    public:
        ShellSort(int *Dir_array, int nb_data_r);
        ~ShellSort();
        void InitSort(bool ascendent);
    private:
        void Sort(int ascendent);
        void Exchange(int, int);

};

#endif