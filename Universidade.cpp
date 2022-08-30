#include"Universidade.h"
#include <string.h>
#include<iostream>
using namespace std;

#include <stdio.h>

Universidade::Universidade()
{   
    ndpto = 0;
    setNome();

    /*
    for(int i=0;i<ndpto;i++)
    {
        registraDpto(NULL,i);
    }*/


    

}
/*Universidade::~Universidade():
{
    setNome("");
}*/

void Universidade::setNome(const char n[])
{
    strcpy(nomeU,n);
}
char* Universidade::getNome()
{
    return(nomeU);
}
/* sem vector    void Universidade::registraDpto(Departamento* newdpto, int index)
{
    if (index<ndpto&&index>=0)
    {
        dptos[index]= newdpto;
    }

    else
        cout<< "index error = "<< index << endl;
}*/

//COM VECTOR
/*
void Universidade::registraDpto(Departamento* newdpto, int index)
{
    dptos.push_back(newdpto);
    ndpto++;
}

void Universidade::imprimeDptos()
{
    for(int i=0;i< dptos.size();i++)
    {
        cout<<dptos[i]->getNome()<<endl;
    }
}
*/


void Universidade::registraDpto(Departamento* newdpto, int index)
{
    dptos.push_back(newdpto);
    ndpto++;
}

void Universidade::imprimeDptos()
{   
    Departamento* pDep= NULL;

    list<Departamento*> ::iterator iterator;

    for(iterator=dptos.begin() ; iterator!= dptos.end(); iterator++)
    {   
        cout<<(*iterator)->getNome()<<endl;
    }
}
