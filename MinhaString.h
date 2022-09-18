#ifndef __MINHA_STRING__
#define __MINHA_STRING__

class MinhaString
{
    public:
    MinhaString(const char* s= "");
    ~MinhaString();

    const char* getString();
    int getLentgh();
    void setString(const char s[]="");
    void operator = (const char* s);
    void operator = (MinhaString &s);
    bool operator == (const char * s);
    bool operator == (MinhaString &s);

 


    

    private:
    //const int length;
    int length;

    char * str ;


};

int StringLen(const char* &s);
const char * StringCpy (char* &newcopy, const char* &s);

ostream& operator <<(ostream& saida, MinhaString &s);

#endif