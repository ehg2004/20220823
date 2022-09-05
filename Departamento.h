#ifndef _DPTO_H_
#define _DPTO_H_

//#include"Pessoa.h"


class Universidade;
class Disciplina;

class Departamento
{   protected:
    char nomeD[30];
    //Pessoa* listaD;

    int idD;

    Departamento* proxDpto;
    
    Universidade* univDpto;

    Disciplina* atualDisc;
    Disciplina * firstDisc;

    //Departamento* antDpto;

    public:
    Departamento();
    void Inicializa(  const char n[]= "", int id =0 );
    void setNome(const char nome[]="");
    char* getNome();
    Departamento* getProxDpto();
    void setProxDpto(Departamento* newDpto=0);
    void setUnivassociada(Universidade* univ=0);
        Universidade* getUnivassociada();
    void regDisciplina(Disciplina* newdisc=0);
    void listaDisciplina();

    //Departamento* getant






};


#endif