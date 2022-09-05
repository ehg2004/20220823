#ifndef _DISCIPLINA_H_ 
#define _DISCIPLINA_H_

#include"Departamento.h"
#include"Aluno.h"


class Disciplina
{
    protected:
    int id;
    char nome[30];
    Departamento* dptoAssociado;
    Disciplina* proxDisc;

    public:
    Disciplina();
    //~Disciplina();



    void setId(int newId);

    void setNome(const char n[]="");
    char* getNome();

    Disciplina* getProxDisc();
    void setProxDisc(Disciplina* newdisc =NULL);

    void setDepartamento(Departamento* newdpto=NULL);
    Departamento* getDepartamento();

};

#endif