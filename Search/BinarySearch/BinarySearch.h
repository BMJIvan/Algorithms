#ifndef BinarySearch_H
#define BinarySearch_H
#include <iostream>

class BinarySearch
{
    private:
        int *Dir_A;
        int Dat;
    public:
        BinarySearch(int *Dir, int Datos);
        ~BinarySearch();
        int Search(int key);
};


#endif