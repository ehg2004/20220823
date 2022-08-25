#include"header.h"
Pessoa::Pessoa()
{
    Inicializa();
}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, const char n[], Universidade *universidade)
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    strcpy(nomeP, n);
    idadeP = 0;
    universidadeP = universidade;
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
    printf("A idade da Pessoa %s seria %d \n", nomeP, idadeP);
}
int Pessoa::informaIdade()
{
    return idadeP;
}

/*Pessoa::~Pessoa():
{
    setUnivFiliado();
}*/

void Pessoa::setUnivFiliado(Universidade *universidade)
{
    universidadeP = universidade;
}
void Pessoa::informaNomeUniversidade()
{
    cout << nomeP << " trabalha na" << universidadeP->getNome() << endl;
}
