#include "Departamento.h"
#include "Universidade.h"
#include "string.h"
#include"Disciplina.h"

Departamento::Departamento()
{
    Inicializa();
}
void Departamento::Inicializa(const char n[], int id)
{
    setNome(n);
    idD = id;

    proxDpto=0;
    
    univDpto=0;

    atualDisc=0;
   firstDisc=0;
}

    void Departamento::setUnivassociada(Universidade* univ)
    {
        univDpto=univ;
        if(univ!=0)
        univ->registraDpto(this);
    }
    Universidade* Departamento::getUnivassociada()
    {
        return(univDpto);
    }
void Departamento::setNome(const char nome[])
{
    strcpy(nomeD, nome);
}

char *Departamento::getNome()
{
    return (nomeD);
}

Departamento* Departamento::getProxDpto()
{
    return(proxDpto);
}

void Departamento::setProxDpto(Departamento *newDpto)
{
    proxDpto = newDpto;
}

void Departamento::regDisciplina(Disciplina* newdisc)
{   if(newdisc->getDepartamento()!=this);
        newdisc->setDepartamento(this);
    newdisc->setProxDisc(0);

    if (firstDisc==0)
    {
        firstDisc=newdisc;
        atualDisc=newdisc;
    }

    else{
    //newdisc->setProxDisc(atualDisc->getProxDisc());

    atualDisc->setProxDisc(newdisc);

    atualDisc=newdisc;
    }
}
