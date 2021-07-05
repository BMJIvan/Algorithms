#ifndef QuickUnion_H
#include <iostream>

#define QuickUnion_H

class QuickUnion
{
   private:
        int nb_data;
        int *id;
    public:
        QuickUnion(int *id_r,int nb_data_r);
        ~QuickUnion();
        bool Connected(int p, int q);
        void Union(int p, int q);
    private:
        int root(int i);
};

#endif