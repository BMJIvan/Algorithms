#ifndef QuickFind_H
#include <iostream>

#define QuickFind_H

class QuickFind
{
    private:
        int nb_data;
        int *id;
    public:
        QuickFind(int *id_r,int nb_data_r);
        ~QuickFind();
        bool Connected(int p, int q);
        void Union(int p, int q);
        int return_nb_data();
    private:
};

#endif