#ifndef _ACADEMICO_H_ 
#define _ACADEMICO_H_

#include"Universidade.h"
#include"Pessoa.h"
#include"Departamento.h"
#include<iostream>
using namespace std;

class Academico : public Pessoa
{
    protected:

    Universidade* universidadeP;
    //Departamento* dptoP;
    //int RA;

    public:
    
    Academico();
    //~Academico();
    //void setRA( int n=0);
    //int getRA();
    void setUnivFiliado(Universidade* universidade=NULL, int id = 0);
    //void setDptoFiliado(Departamento* dpto=NULL);
    void informaNomeUniversidade();
};

#endif