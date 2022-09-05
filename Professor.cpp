#include"Professor.h"

Professor::Professor()
{
    setDptoFiliado();
    Inicializa();
    setUnivFiliado();
    //setRA();

}
/*
 void Professor::setUnivFiliado(Universidade* universidade, int id,Departamento* dpto)
 {  
    universidadeP=universidade;
    idP = id;
    setDptoFiliado(dpto);
 }*/

 
void Professor::setDptoFiliado(Departamento* dpto)
{
    dptoP=dpto;
}


void Professor::informaNomeUniversidadeDptoRA()
{   if(idP==0 && dptoP == NULL)

    cout << nomeP << " trabalha na " << universidadeP->getNome() << endl;

    else if( idP==0)
    
    cout << nomeP << " trabalha na " << universidadeP->getNome() <<" no departamento "<< dptoP->getNome()<< endl;

    else if(dptoP==NULL)

    cout << nomeP << " trabalha na " << universidadeP->getNome() <<" e seu Id e "<< idP<< endl;

    else 

    cout << nomeP << " trabalha na " << universidadeP->getNome() <<" no departamento "<< dptoP->getNome()<< " e seu Id e "<< idP<< endl;
   
}