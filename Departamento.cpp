#include "Departamento.h"
#include"string.h" 

Departamento::Departamento()
{
    setNome();
    listaD = NULL;
}
void Departamento::setNome(const char nome[])
{
    strcpy(nomeD,nome);

}
char* Departamento::getNome()
{
    return (nomeD);
}
    