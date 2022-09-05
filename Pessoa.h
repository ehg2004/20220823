#include <stdio.h>

#ifndef _PESSOA_H_
#define _PESSOA_H_

#include"Universidade.h"
#include"Departamento.h"

class Pessoa
{
    protected:

    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP [30];
    int idP;
    
    //Universidade* universidadeP;
    //Departamento* dptoP;

    public:
    Pessoa();
    void Inicializa(int diaNa=0, int mesNa=0, int anoNa=0, const char n[]= "" );
    void Calc_Idade(int diaAT, int mesAT, int anoAT);
    //void setUnivFiliado(Universidade* universidade=NULL, int id = 0,Departamento* dpto=NULL);
    //void setDptoFiliado(Departamento* dpto=NULL);

    int getId();
    int informaIdade();
    char* getNome();
    
    //void informaNomeUniversidadeDptoId();
    
    //void informaNomeUniversidade();
    //void informaNomeDepartamento();
    //~Pessoa();
};

#endif