#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//加密程式
//argc:how many inputs include ./執行檔 
//argv: when you enter ./執行檔 this is first string argv[0], and you can put something behind this 
int main(int argc, char *argv[])
{
    char a[100];
    int n = 0;

    // input the word that you want to encrypt
    printf("plaintext:");
    fgets(a,sizeof(a),stdin);
    
    // if you input english character,we will encrypt
    for(int i = 0; i < 100; i++)
    {
        if(a[i] > 'A' && a[i] < 'z')
        {
            a[i]=(a[i]+atoi(argv[1]))%26+65;
        }
      
    }
    
    //count how many spaces you use
    while(a[n] != '\0')
    {
        n++;
    }
    
    //print encrypted word
    printf("ciphertext:");
    for(int j = 0; j < n; j++)
    {
        printf("%c",a[j]);
    }
}
