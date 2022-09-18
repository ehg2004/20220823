#include"MinhaString.h"
#include"stdafx.h"
    int StringLen(const char* & s)
    {
        int i=0;
        while(s[i]!='\0')
            i++;
        return (i);
    }
    const char * StringCpy (char* &newcopy,const char* &s)
    {
        if(StringLen(s)!=StringLen(newcopy));
            return(NULL);


        for(int i=0;s[i]!='\0';i++)
            newcopy[i]=s[i];
        return(newcopy);
    }


   MinhaString:: MinhaString(const char * s )//:
   //length ( StringLen (s))
   {   //length = StringLen(s); 
        setString(s);
   }


    MinhaString::~MinhaString()
    {
        delete [] str;
        //free(str);
        str = NULL;
    }
    void MinhaString::operator = (const char* s)
    {
        delete [] str;
        setString(s);
    }
    void MinhaString::operator = (MinhaString &s)
    {
        operator= ( s.getString());
    }
    bool MinhaString::operator == (const char * s)
    {
        if(0==strcmp(str,s))
        return true;
        else
        return false;
    }
    bool MinhaString::operator == (MinhaString &s)
    {
        if(0==strcmp(str,s.getString()))
        return true;
        else
        return false;
    }

    const char* MinhaString:: getString()
    {
        return(str);
    }
    int MinhaString::getLentgh()
    {
        return(StringLen(str));
    }
    void MinhaString::setString(const char s[])
    {
        length = StringLen(s);
        str = new char[length+1];
        StringCpy(str,s);
    }
    ostream& operator<<(ostream& saida, MinhaString &s)
    {
        saida<<s.getString();
        return saida;
    }