#include"ElAluno.h"

    ElAluno::ElAluno()
    {
        setAluno();
        proxEl=0;
        anteEl=0;
    }
    //ElAluno::~ElAluno();
    void ElAluno::setAluno( Aluno* pA)
    {
        pAluno=pA;
    }
    Aluno* ElAluno::getALuno()
    {
        return(pAluno);
    }
    char* ElAluno::getNome()
    {
        if(pAluno==0)
            return("");
        else
            return (pAluno->getNome());
    }