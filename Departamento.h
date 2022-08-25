#ifndef _DPTO_H_
#define _DPTO_H_

#include"Pessoa.h"

class Departamento
{   private:
    char* nomeD;
    Pessoa* listaD;

    public:
    Departamento();
    void setNome(const char[]="");
    char* getNome();






};


#endif