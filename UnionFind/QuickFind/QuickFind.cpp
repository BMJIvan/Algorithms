#include "QuickFind.h"

QuickFind::QuickFind(int *id_r, int nb_data_r)
{
    nb_data = nb_data_r;
    id = id_r;
}

QuickFind::~QuickFind()
{
    id = new int;
    delete id;
    id = NULL;
}  

bool QuickFind::Connected(int p, int q)
{
    return id[p] == id[q];
}

void QuickFind::Union(int p, int q)
{
    int pid = id[p];
    int qid = id[q];
    for(int i=0; i<nb_data; i++)
    {
        if(id[i]==pid) id[i]=qid;
    } 
}

int QuickFind::return_nb_data()
{
    return nb_data;
}