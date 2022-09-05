#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_

#include"Universidade.h"
#include"Departamento.h"
#include"Aluno.h"
#include"Pessoa.h"
#include"Professor.h"
#include"Academico.h"
#include "Disciplina.h"

class Principal
{

    private:
        Professor Simao;
        Aluno Enzo;
        Professor Einstein;
        Professor Newton;



        Universidade Utfpr;
        Universidade Princeton;
        Universidade Cambridge;

        Academico* academicos[4];

        Departamento DAINF;
            Disciplina tecProg;
            Disciplina fundProg1;
        Departamento DAFIS;
            Disciplina fis1;
            Disciplina fis2;
        Departamento dptoFisicaPrinceton;
            Disciplina fis1Prin;
        Departamento dptoFisicaCambridge;
            Disciplina fis1Camb;
        
        int nAcademicos;


        int diaAtual;
        int mesAtual;
        int anoAtual;

    public:
        Principal();

       // void InicializaPessoas();
            void InicializaAcademicos();
            void InicializaAlunos();
            void IncializaProfessores();
        void InicializaUnivs();
            void IncializaDisciplinas();
            void InicializaDptos(); 
        void Executar();  
        
        //~Principal();


};

#endif