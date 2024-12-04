/******************************************************************************

Programming Skills Challenge Siemens.
Question 10 - Develop a program that calculates the length of a 
string informed by the user.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int length;
    int i;
    char String[101];
    
    
    //Input data
    printf("Enter the string to find its length: ");
    scanf("%s", String);
    length=0;
    for(i = 0; String[i] != '\0'; i++){
        length=length+1;
    }
    printf("The user string is: %s\n",String);
    printf("The length of the string is:%d\n",length );
    return 0;
}
