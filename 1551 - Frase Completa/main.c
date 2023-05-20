#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, contLetras;
    int alfabeto[26];
    char frase[1001];
    scanf("%d",&n);
    fflush(stdin);
    for(i=0; i<n+1; i++)
    {
        for(j=0; j<26; j++)
            alfabeto[j]=0;
        gets(frase);
        for(j=0; frase[j]!='\0'; j++)
        {
            if(frase[j]>='A' && frase[j]<='Z')
                alfabeto[frase[j]-65]++;//talvez seja possivel sem um vetor
            else if(frase[j]>='a' && frase[j]<='z')
                alfabeto[frase[j]-97]++;
        }
        contLetras = 0;
        for(j=0; j<26; j++)
        {
            if(alfabeto[j]!=0)
                contLetras++;
        }
        if(i>0)
        {
            if(contLetras==26)
                printf("frase completa\n");
            else if(contLetras>=13)
                printf("frase quase completa\n");
            else
                printf("frase mal elaborada\n");
        }
        fflush(stdin);
    }


    return 0;
}
