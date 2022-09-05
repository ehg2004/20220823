#include"Principal.h"

Principal::Principal()
{   
    diaAtual = 23;
    mesAtual=8;
    anoAtual=2022;
    //InicializaPessoas();
    InicializaUnivs();
    InicializaDptos();
    IncializaDisciplinas();    
    InicializaAcademicos();




}

void Principal::Executar()
{   

    Enzo.informaNomeUniversidadeRA();
    Simao.informaNomeUniversidadeDptoRA();
    Einstein.informaNomeUniversidadeDptoRA();
    Newton.informaNomeUniversidadeDptoRA();
    
    Utfpr.imprimeDptos();
    Cambridge.imprimeDptos();
    Princeton.imprimeDptos();

 
}
void Principal::InicializaDptos()
{
    DAFIS.Inicializa("DAFIS",2);


    DAINF.Inicializa("DAINF",1);

    dptoFisicaCambridge.Inicializa("Departamento de Fisica de Cambridge",1);
    dptoFisicaPrinceton.Inicializa("Departamento de Fisica de Princeton",1);

    Utfpr.registraDpto(&DAINF,1);
    Utfpr.registraDpto(&DAFIS,2);
    
    Cambridge.registraDpto(&dptoFisicaCambridge,1);

    Princeton.registraDpto(&dptoFisicaPrinceton,1);

}
void Principal::InicializaUnivs()
{
    Utfpr.setNome("UTFPR");

    Utfpr.registraDpto(&DAINF,1);
    Utfpr.registraDpto(&DAFIS,2);

    Princeton.setNome("Princeton");

    Princeton.registraDpto(&dptoFisicaPrinceton,1);

    Cambridge.setNome("Cambridge");
    
}
void Principal::InicializaAcademicos()
{   
    nAcademicos=4;
    academicos[0]= &Enzo;
    academicos[1]= &Einstein;
    academicos[2]= &Newton;
    academicos[3]= &Simao;

    IncializaProfessores();
    InicializaAlunos();


    for (int i=0 ; i < nAcademicos ; i++)
    {
        academicos[i]->Calc_Idade(diaAtual,mesAtual,anoAtual);
        
        academicos[i]->informaNomeUniversidade();

        cout<< i<<endl;
    }
}
void Principal::InicializaAlunos()
{   
    Enzo.Inicializa(22,11,2004,"Enzo");
    Enzo.setUnivFiliado(&Utfpr,2449013);
}

void Principal::IncializaProfessores()
{
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");
    Simao.Inicializa(3, 10, 1976, "Jean Simao");

    Einstein.setUnivFiliado(&Princeton,0);
    Einstein.setDptoFiliado(&dptoFisicaPrinceton);

    Newton.setUnivFiliado(&Cambridge,0);
    Newton.setDptoFiliado(&dptoFisicaCambridge);

    Simao.setUnivFiliado(&Utfpr,666);
    Simao.setDptoFiliado(&DAINF);
}

void Principal::IncializaDisciplinas()
{   
    fundProg1.setNome("FUND PROG 1");
    fundProg1.setDepartamento(&DAINF);

    tecProg.setNome("TEC PROG");
    tecProg.setDepartamento(&DAINF);

    
    fis1.setNome("FISICA 1 UTFPR");
    fis2.setNome("Fisica  2 utfpr");
    fis1.setDepartamento(&DAFIS);
    fis2.setDepartamento(&DAFIS);

    fis1Camb.setNome("fis1 cambridge");
    fis1Camb.setDepartamento(&dptoFisicaCambridge);

    fis1Prin.setNome("fis 1 princ");
    fis1Prin.setDepartamento(&dptoFisicaPrinceton);




}
 