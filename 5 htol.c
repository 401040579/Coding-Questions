#include <stdio.h>

void htol(char s[])
{
    for(int i = 0; i<strlen(s);++i)
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]-'A'+'a';
}

int main()
{
    char s[] = "ABcd+";
    htol(s);
    printf("%s",s);
    return 0;
}
