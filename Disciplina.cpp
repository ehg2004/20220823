#include"Disciplina.h"
#include"string.h"
Disciplina::Disciplina()
{
    setNome();
    id=0;
   dptoAssociado=0;
    proxDisc=0;
}
void Disciplina::setDepartamento(Departamento* newdpto)
{   
    if(dptoAssociado!=newdpto)
    {   
    dptoAssociado=newdpto;
    newdpto->regDisciplina(this);
    }
}
Departamento* Disciplina::getDepartamento()
{
    return(dptoAssociado);
}
void Disciplina::setProxDisc(Disciplina* newdisc )
{
    proxDisc=newdisc;
    
}
    void Disciplina::setNome(const char n[])
    {
        strcpy(nome,n);
    }
    char* Disciplina::getNome()
    {
        return(nome);
    }