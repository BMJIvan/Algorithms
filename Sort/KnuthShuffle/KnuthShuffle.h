#ifndef KnuthShuffle_H
#define KnuthShuffle_H
#include <cstdlib>
#include <time.h>

class KnuthShuffle
{
    private:
        int *Dir_Array;
        int nb_data;
        int Aux;

    public:
        KnuthShuffle(int *Dir_array, int nb_data);
        ~KnuthShuffle();
        void Shuffle();

    private:
        void Exchange(int i, int j);
};

#endif