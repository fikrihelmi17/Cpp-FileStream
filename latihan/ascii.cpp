/**
 * C program to display all alphabets from a-z using ASCII value
 */
#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
	char ch ;
    int i;

	system("cls");
    printf("ASCII chart for characters : \n\n") ;
	    for(ch = 65 ; ch <= 122 ; ch++)
	    {
	        if(ch > 90 && ch < 97)
	        continue ;
	        printf("%c \t %3d \n", ch, ch) ;
	    }
    return 0;
}
