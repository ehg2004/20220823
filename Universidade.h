#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

class Universidade
{
    private:
    char nomeU[30];

    public:
    Universidade(const char n[]="");
    //~Universidade();
    void setNome(const char n[]="");
    char* getNome();
    
};

#endif