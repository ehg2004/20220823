#ifndef _ALUNO_H_ 
#define _ALUNO_H_

#include"Universidade.h"
#include"Pessoa.h"
#include"Academico.h"
#include<iostream>
using namespace std;

class Aluno: public Academico
{
    private:
    //Universidade* universidadeP;
    //Departamento* dptoP;
    int RA;

    public:
    Aluno();
    //~Aluno();
    void setRA( int n=0);
    int getRA();
    //void setUnivFiliado(Universidade* universidade=NULL, int id = 0,Departamento* dpto=NULL);
    //void setDptoFiliado(Departamento* dpto=NULL);
    void informaNomeUniversidadeRA();
};


#endif