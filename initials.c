#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{   
    //gets the userś name
    string s = GetString(); 
    {
        //prints the first initial
        printf("%c", toupper(s[0]));
        for (int i=0,n=strlen(s);i<n;i++)
            //finds space before last name
            if (s[i] == 32)
                //prints last initial
                printf("%c",toupper(s[i+1]));
    }
    printf("\n");
}
