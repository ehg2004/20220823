#ifndef __EL__ALUNO__
#define __EL__ALUNO__
#include"Aluno.h"
//class terciaria: surge em funçao do relacionamento

//


class ElAluno
{   private:
    Aluno * pAluno;

    public:
    ElAluno* proxEl;
    ElAluno* anteEl;

    ElAluno();
    //~ElAluno();
    void setAluno(Aluno* pA=0);
    Aluno* getALuno();
    char* getNome();



};

#endif