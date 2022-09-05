#include"Academico.h"
#include"Universidade.h"
#include"Pessoa.h"


Academico::Academico()
{
    setUnivFiliado();
    //setRA();
    
}

 void Academico::setUnivFiliado(Universidade* universidade, int id)
 {  
    universidadeP=universidade;
    idP = id;
    //setRA(id);

    //setDptoFiliado(dpto);
 }
/*
void Academico::setRA(int n)
{
    RA=n;
}
int Academico::getRA()
{
    return(RA);
}
*/
/*
void Academico::setDptoFiliado(Departamento* dpto)
{
    dptoP=dpto;
}*/

void Academico::informaNomeUniversidade()
{

    cout << nomeP << " trabalha na " << universidadeP->getNome() <<" e seu RA e "<< idP<< endl;
   
}

