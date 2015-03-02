#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[]) 
{
    //validate entry
    if (argc !=2 )
    {
        printf("Usage: ./caesar.c key");
        return 1;
    }
    //abstract the key from the second command line arguement and output as an integer from a string
    string key = (argv[1]);
    
    //test the key is alphabetical
    for (int a = 0, z = strlen(key); a < z; a++)
        if (isalpha(key[a]) == false)
            {
            printf("Usage: ./caesar.c <key> ");
            return 1;
            }
    
    //define key length
    int keyl = strlen(key); 
     
    //request plaintext from user
    string s= GetString();
    
    //loop through the plaintext
        for (int j = 0, m = strlen(s); j < m; j++)
        //if a letter of the alphabet
        {
            if (isalpha(s[j]))
            //index the key
            {
                //if the key is lower case for a given index value 
                if (islower(key[(j%keyl)]))
                {
                    //new ascii value if lower case plaintext
                    if (islower(s[j]))
                    {
                        printf("%c",((s[j]-194+key[(j%keyl)])%26)+97);
                    }
                    //new ascii value if upper case plaintext
                    else 
                    {
                        printf("%c",((s[j]-162+key[(j%keyl)])%26)+65);
                    }
                }
                //if key is upper case for a given index      
                else
                {
                    //new ascii value if lower case plaintext
                    if (islower(s[j]))
                    {
                        printf("%c",((s[j]-162+key[(j%keyl)])%26)+97);
                    }
                    //new ascii value if upper case plaintext
                    else 
                   {
                       printf("%c",((s[j]-130+key[(j%keyl)])%26)+65);
                   }
               }
           }
           else 
           {
               printf("%c",s[j]);
           }   
       }
    printf("\n");
    return 0;
}
   
