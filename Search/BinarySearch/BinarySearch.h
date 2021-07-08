#ifndef BinarySearch_H
#include <iostream>
#define BinarySearch_H


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