#include"Universidade.h"
#include <string.h>
#include<iostream>
using namespace std;

#include <stdio.h>

Universidade::Universidade()
{   
    ndpto = 0;
    setNome();
    atualDpto=0;
    firstDpto=0;
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
    
    newdpto->setProxDpto(0);

    if(firstDpto==0)
    {
        firstDpto=newdpto;
        atualDpto=newdpto;
    }
    else
    {
        //newdpto->setProxDpto(atualDpto->getProxDpto());
        atualDpto->setProxDpto(newdpto);
        atualDpto=newdpto;
    }
    

}

void Universidade::imprimeDptos()
{   
    Departamento* i=firstDpto;
    if(i!=0)
    cout<<"lista de departamentos \n da "<< nomeU <<endl;
    else
    cout<<"lista vazia dos dptos de \n"<<nomeU<<endl;
    
    int flag =0;

    while((i!=firstDpto || flag != 1)&&i!=0)
    {   
        flag =1;

        cout<<i->getNome()<<endl;

        i= i->getProxDpto();
    }
}
