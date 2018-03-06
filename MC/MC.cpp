#include "MC.h"
#include <iostream>
using namespace std;
#include <new>

template <typename T> Multiconjunto<T>::Multiconjunto()
{
    num=0;
};

template <typename T> bool Multiconjunto<T>::esVacio() const
{
    if(num == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
};

template <typename T> int Multiconjunto<T>::cardinalidad() const
{
    return num;
};

template <typename T> void Multiconjunto<T>::anade(const T& objeto)
{
    c[num]=objeto;
    num++;
};

template <typename T> void Multiconjunto<T>::elimina(const T& objeto)
{
for(int i = 0; i<100; i++)
{
    if(c[i]==objeto)
    {
        c[i].aeliminar=-1;
        num--;
    }
}
T d[100];
int pos=0;
for(int f = 0;f<100; f++)
{
    if(c[f].aeliminar!=-1)
    {
        d[pos]=c[f];
        pos++;
    }
}
delete c;
T c[100];
for(int g=0; g<num; g++)
{
    c[g]=d[g];
}
};

template <typename T> bool Multiconjunto<T>::pertenece(const T& objeto) const
{
    for(int i = 0; i<num; i++)
    {
        if(c[i]==objeto)
        {
            return true;
        }
    }
    return false;
};

int main()
{
    return 0;
}
