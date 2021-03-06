#include "KnuthShuffle.h"

KnuthShuffle::KnuthShuffle(int *DirArray, int nb_data_r)
{
    srand(time(NULL));
    Dir_Array = DirArray;
    nb_data = nb_data_r;

}

KnuthShuffle::~KnuthShuffle()
{
    Dir_Array = new int;
    delete Dir_Array;
    Dir_Array = NULL;
}

void KnuthShuffle::Shuffle()
{
    for(int i = 0; i < nb_data; i++)
    {
        Aux = rand()%(i + 1);
        Exchange(i, Aux);
    }
}

void KnuthShuffle::Exchange(int i, int j)
{
    if(i == j) return;
    Aux = Dir_Array[i];
    Dir_Array[i] = Dir_Array[j];
    Dir_Array[j] = Aux;
}