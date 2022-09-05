#include"header.h"
Pessoa::Pessoa()
{
    Inicializa();
}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, const char n[])
{   
    
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    strcpy(nomeP, n);
    idadeP = 0;
    //setUnivFiliado(universidade, id, dpto);
    
}

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT)
{
    idadeP = anoAT - anoP;
    if (mesP < mesAT)
    {
        idadeP = idadeP - 1;
    }
    else
    {
        if (mesP == mesAT)
        {
            if (diaP < diaAT)
            {
                idadeP = idadeP - 1;
            }
        }
    }
    // o comando passa a ser encapsulado dentro do método...
    cout<< "A idade da Pessoa "<< nomeP << " seria " << idadeP << endl;

    //printf("A idade da Pessoa %s seria %d \n", nomeP, idadeP);
}
int Pessoa::informaIdade()
{
    return idadeP;
}

/*Pessoa::~Pessoa():
{
    setUnivFiliado();
}*/

/*void Pessoa::setUnivFiliado(Universidade *universidade,int id,Departamento* dpto)
{   
    setDptoFiliado(dpto);
    universidadeP = universidade;
    idP = id;
}*/

/*
void Pessoa::informaNomeUniversidadeDptoId()
{   if(idP==0 && dptoP == NULL)

    cout << nomeP << " trabalha na " << universidadeP->getNome() << endl;

    else if( idP==0)
    
    cout << nomeP << " trabalha na " << universidadeP->getNome() <<" no departamento "<< dptoP->getNome()<< endl;

    else if(dptoP==NULL)

    cout << nomeP << " trabalha na " << universidadeP->getNome() <<" e seu Id e "<< idP<< endl;

    else 

    cout << nomeP << " trabalha na " << universidadeP->getNome() <<" no departamento "<< dptoP->getNome()<< " e seu Id e "<< idP<< endl;
   
}
*/

int Pessoa::getId()
{ 
    return (idP);
}

/*void Pessoa::setDptoFiliado(Departamento* dpto)
{
    dptoP =dpto;
}*/
