#include <stdio.h>

#ifndef _PESSOA_H_
#define _PESSOA_H_

#include"Universidade.h"

class Pessoa
{
    private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP [30];
    Universidade* universidadeP;

    public:
    Pessoa();
    void Inicializa(int diaNa=0, int mesNa=0, int anoNa=0, const char n[]= "" , Universidade* universidade= NULL);
    void Calc_Idade(int diaAT, int mesAT, int anoAT);
    void setUnivFiliado(Universidade* universidade=NULL);
    int informaIdade();
    void informaNomeUniversidade();
    //~Pessoa();
};

#endif