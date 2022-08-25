#include"Principal.h"

Principal::Principal()
{   
    diaAtual = 23;
    mesAtual=8;
    anoAtual=2022;

    Enzo.Inicializa(22,11,2004,"Enzo");
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");
    Simao.Inicializa(3, 10, 1976, "Jean Simao");
    Utfpr.setNome("UTFPR");
    Enzo.setUnivFiliado(&Utfpr);
    Executar();
}

void Principal::Executar()
{
    Enzo.Calc_Idade(diaAtual,mesAtual,anoAtual);
    Enzo.informaNomeUniversidade();
}