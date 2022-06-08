#include <iostream>

using namespace std;

struct Elem
{
    Elem* link;
    int inf;
};

void init(Elem* &f, Elem* &l, int inf) {
    Elem *tmp = new Elem;
    tmp->inf = inf;
    tmp->link = NULL;
    if (l != NULL)
        l->link = tmp;
    l = tmp;
    if (f == NULL)
        f = tmp;
}

void print(const Elem* f)
{
    int i = 0;
    while (f != nullptr)
    {
        cout << f->inf << " ";
        i++;
        f = f->link;
    }
    cout << endl;
}

int count(Elem* L, int x){
    int k=0;
    while (L != NULL) {
        if (L->inf == x)
        k++;
        L = L->link;
    }
return k;
}
