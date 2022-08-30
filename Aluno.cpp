#include"Aluno.h"

Aluno::Aluno()
{
    //setUnivFiliado();

    Inicializa();
    setUnivFiliado();
    setRA(); 
    
}
/*
 void Aluno::setUnivFiliado(Universidade* universidade, int id,Departamento* dpto)
 {  
    universidadeP=universidade;
    idP = id;
    setRA(id);

    setDptoFiliado(dpto);
 }
 */

void Aluno::setRA(int n)
{
    RA=n;
}
int Aluno::getRA()
{
    return(RA);
}
/*
void Aluno::setDptoFiliado(Departamento* dpto)
{
    dptoP=dpto;
}*/


void Aluno::informaNomeUniversidadeRA()
{   if( idP==0 )

    cout << nomeP << " estuda na " << universidadeP->getNome() << endl;

    else 

    cout << nomeP << " estuda na " << universidadeP->getNome() <<" e seu RA e "<< idP<< endl;

}
