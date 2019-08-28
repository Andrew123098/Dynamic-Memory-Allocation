#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int MAX;
    printf("Please enter the MAX number of characters in your string: ");
    scanf("%d", &MAX);

    char *str = NULL;

    str = (char*)malloc(MAX * sizeof(char));

    if (str != NULL)
    {
        printf("\nPlease enter your string: ");
        scanf(" "); // this line is needed to fix the problem that occurs when using fgets after scanf which automatically has a dellimeter at the end.
        fgets(str, MAX, stdin);
        printf("\nYour inputted text: %s", str);
    }

    free(str); //release the memory
    str = NULL; //double check that you released the memory
    return 0;
}
