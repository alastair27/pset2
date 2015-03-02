#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[]) 
{
    //validate entry 
    if (argc !=2)
    {
        printf("Usage: ./caesar.c key");
        return 1;
    }
    //abstract the key from the second command line arguement and convert to an integer from a string
    int key = atoi(argv[1]);    
    
    //request plaintext from user
    string s= GetString();
    {
        //rotate by k positions
        for (int i=0,n = strlen(s); i < n; i++)
            //check if lower case
            if (islower(s[i]))
            {
                //print ciphertext for lower case   
                printf("%c",((s[i]-97+key)%26)+97);
            }
            else if (isupper(s[i])) 
            //check if uppercase 
            {
                //print ciphertext for uppercase   
                   printf("%c",((s[i]-65+key)%26)+65);
            }
            //if niether upper nor lower case
            else 
            {
                //print plainttext
                printf("%c",s[i]);
            }
            {
                printf("\n");
            }    
     }
     return 0;
}    
