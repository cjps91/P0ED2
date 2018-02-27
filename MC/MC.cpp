#include "MC.h"
#include <iostream>
using namespace std;

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

};

template <typename T> bool Multiconjunto<T>::pertenece(const T& objeto) const
{

};
