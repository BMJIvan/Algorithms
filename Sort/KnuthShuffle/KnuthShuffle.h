#ifndef KnuthShuffle_H
#define KnuthShuffle_H
#include <cstdlib>
#include <time.h>

class KnuthShuffle
{
    private:
        int *Dir_Array;
        int *NumDat;
        int Aux;

    public:
        KnuthShuffle(int *,int *);
        ~KnuthShuffle();
        void Shuffle();

    private:
        void Exchange(int,int);
};

#endif