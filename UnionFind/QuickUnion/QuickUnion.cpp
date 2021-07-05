#include "QuickUnion.h"

QuickUnion::QuickUnion(int *id_r, int nb_data_r)
{
    nb_data=nb_data_r;
    id=id_r;
}

QuickUnion::~QuickUnion()
{
    id = new int;
    delete id;
    id = NULL;
}

int QuickUnion::root(int i)
{
    while(i!=id[i]) i=id[i];
    return i;
}

bool QuickUnion::Connected(int p, int q)
{
    return root(p)==root(q);
}

void QuickUnion::Union(int p, int q)
{
    int i=root(p);
    int j=root(q);
    id[i]=j;
}

