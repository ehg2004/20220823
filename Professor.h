#ifndef _PROFESSOR_H_ 
#define _PROFESSOR_H_

#include"Universidade.h"
#include"Pessoa.h"
#include "Academico.h"

#include<iostream>
using namespace std;

class Professor: public Academico
{
    private:
    //Universidade* universidadeP;
    Departamento* dptoP;

    public:
    Professor();
    //~Professor();
    //void setUnivFiliado(Universidade* universidade=NULL, int id = 0,Departamento* dpto=NULL);
    void setDptoFiliado(Departamento* dpto=NULL);
    void informaNomeUniversidadeDptoRA();
};


#endif