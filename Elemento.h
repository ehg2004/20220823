#define __ELEMENTO_H__
#ifndef __ELEMENTO_H__

template <class TIPO>
class Elemento
{
private:
    Elemento<TIPO> *pProx;
    Elemento<TIPO> *pAnt;
    TIPO* pInfo;
public:
    Elemento();
    ~Elemento();

    void setProx(Elemento<TIPO>* pp);
    Elemento<TIPO>* getProx();

    void setAnt(Elemento<TIPO>* pa);
    Elemento<TIPO>* getAnt();

    void setInfo(TIPO* pi);
    TIPO* getInfo();

};  

template <class TIPO>
Elemento<TIPO> ::Elemento()
{
    pProx=0;
    pAnt=0;
    pInfo=0;
}
template <class TIPO>
Elemento<TIPO> ::~Elemento()
{
    pProx=0;
    pAnt=0;
    pInfo=0;
}


template <class TIPO>
void Elemento<TIPO> :: setProx(Elemento<TIPO>* pp)
{
    pProx = pp;
}
template <class TIPO>
Elemento<TIPO>* Elemento<TIPO> :: getProx()
{
    return(pProx);
}
template <class TIPO>
void Elemento<TIPO> :: setAnt(Elemento<TIPO>* pa)
{
    pAnt=pa;
}
template <class TIPO>
Elemento<TIPO>* Elemento<TIPO> :: getAnt()
{
    return(pAnt);
}
template <class TIPO>
void Elemento<TIPO> :: setInfo(TIPO* pi)
{
    pInfo=pi;
}
template <class TIPO>
TIPO* Elemento<TIPO> :: getInfo()
{
    return(pInfo);
}

#endif