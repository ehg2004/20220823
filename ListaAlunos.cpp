#include "ListaAlunos.h"
/*
class ListaAlunos
{   public:
    ElAluno* firstpElAluno; 
    ElAluno* prespElAluno;

    ListaAlunos();
    //~ListaAlunos();

    void incluaAlunos(Aluno* pa);

};
*/
ListaAlunos::ListaAlunos()
{
    firstpElAluno=0;
    prespElAluno=0;
}
ListaAlunos::~ListaAlunos()
{
    while(prespElALuno !=0)
    {
        prespElAluno->setAluno(0);
        
        //dar free no aluno em outro lugar???
        ElAluno* aux=prespElAluno->anteEl;
        if(prespElAluno->anteEl!=0)
        prespElAluno->anteEl->proxEl=0;

        free(prespElAluno);

        prespElAluno=aux;
    }

}

void ListaAlunos::incluaAlunos(Aluno *pa)
{
    if(firstpElAluno=0)
    {
        firstpElAluno->setAluno(pa);
        prespElAluno=firstpElAluno;
    }
    else
    {   
        ElAluno* aux = (ElAluno*) malloc(sizeof(ElAluno));

        aux->setAluno(pa);
        aux->proxEl=prespElAluno->proxEl;
        aux->anteEl=prespElAluno;
        prespElAluno->proxEl=aux;
        prespElAluno=aux;
    }


}
