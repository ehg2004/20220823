#include"Universidade.h"
#include <string.h>
Universidade::Universidade(const char n[])
{
    setNome(n);
}
/*Universidade::~Universidade():
{
    setNome("");
}*/

void Universidade::setNome(const char n[])
{
    strcpy(nomeU,n);
}
char* Universidade::getNome()
{
    return(nomeU);
}
