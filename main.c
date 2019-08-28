#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int MAX;
   printf("Please enter the MAX number of characters in your string: ");
   scanf("%d", &MAX);

   char *pstr = NULL;
   char str[MAX];

    *pstr = &str;
    /**
    This line of code causes my program to crash and idk why.
    **/


   //printf("\nPlease enter your string:");
   //fgets(*pstr, MAX, stdin);

    //str = (char*)malloc(MAX * sizeof(char));






    return 0;


}
