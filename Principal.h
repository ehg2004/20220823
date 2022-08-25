#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_

#include"header.h"



class Principal
{

    private:
        Pessoa Simao;
        Pessoa Enzo;
        Pessoa Einstein;
        Pessoa Newton;
        Universidade Utfpr;

        int diaAtual;
        int mesAtual;
        int anoAtual;

    public:
        Principal();
        void Executar();
        //Universidade* getAdress();


};
#endif