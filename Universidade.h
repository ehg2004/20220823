#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "Departamento.h"
#include"Departamento.h"
#include<stdio.h>
//#include<vector>

#include<list> 
 using namespace std;
class Universidade
{
    private:
    char nomeU[30];
   //vector< Departamento*> dptos;
   //Departamento* dptos[50];
   list<Departamento*> dptos;

    int ndpto;


    public:
    Universidade();
    //~Universidade();
    void setNome( const char n[]="");
    char* getNome();
    void registraDpto(Departamento* newdpto= NULL, int index=0);
    void imprimeDptos();
    
};

#endif