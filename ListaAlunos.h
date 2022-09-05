#ifndef __LISTA__ALUNOS__
#define __LISTA__ALUNOS__

#include"ElAluno.h"

class ListaAlunos
{   public:
    ElAluno* firstpElAluno; 
    ElAluno* prespElAluno;

    ListaAlunos();
    //~ListaAlunos();

    void incluaAlunos(Aluno* pa);

};



#endif