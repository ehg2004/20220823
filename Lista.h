#define __LISTA_H__
#ifndef __LISTA_H__
#include"Elemento.h"

template <class TIPO>
class Lista
{
private:
    Elemento<TIPO>* pPrim;
    Elemento<TIPO>* pAtual;

public:
    Lista(/* args */);
    ~Lista();
    void inicializa();
    bool incluaELemento(Elemento<TIPO>*pElemento);
    bool incluaInfo(TIPO* pInfo);
    void limpar();

    //void listeInfos();
    //NAO LISTA POR PADRAO
};

Lista<TIPO>::Lista(/* args */)
{
    inicializa();
}

Lista<TIPO>::~Lista()
{

}
    template <class TIPO>
    void Lista<TIPO>::inicializa()
    {
        pPrim =NULL;
        pAtual=NULL;

    }
    template <class TIPO>
    bool Lista<TIPO>::incluaELemento(Elemento<TIPO>*pElemento)
    {
        if (pAtual!=NULL)
        {
            pAtual->pProx = pElemento;
            novoElemento->pAnt = pAtual;
            pAtual=pELemento;
        }
        else
        {
            pAtual = pElemento;
            pPrim=pELemento;
        }

    }

    template <class TIPO>
    bool Lista<TIPO>::incluaInfo(TIPO* pInfo)
    {   
        if(pInfo==NULL){return(false); printf("Erro, elemento nulo (info) na lista");}

        Elemento<TIPO>* novoELemento = new Elemento<TIPO>*;
        novoELemento->setInfo(pInfo);
        if (pAtual!=NULL)
        {
            pAtual->pProx = novoElemento;
            novoElemento->pAnt = pAtual;
            pAtual=novoELemento;
        }
        else
        {
            pAtual = novoElemento;
            pPrim=novoELemento;
        }
        return  true;
    }
    template <class TIPO>
    void Lista<TIPO>::limpar()
    {
        
    }
    /*
    template <class TIPO>
    void Lista<TIPO>::listeInfos()
    {   if(pPrim==NULL){printf("Lista vazia");}
        
        int j = 0;
        for(Elemento<TIPO> i =pPrim;i!=NULL;i=i->pProx)
        {
            printf("ELemento %d na lista: %s \n",j++, i->pInfo->getNome());
           
        }


    }
    */
#endif