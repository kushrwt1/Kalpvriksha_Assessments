// METHOD-I
#include <stdio.h>
#include <string.h>
int main()
{
    char firstInputString[100];
    char secondInputString[100];
    printf("Enter String-1: ");
    scanf("%[^\n]s", firstInputString);
    printf("Enter String-2: ");
    scanf("%*[\n]%[^\n]s", secondInputString);
    int result = strcmp(firstInputString, secondInputString);
    if (result == 0)
        printf("\nBoth Strings are Equal");
    else
        printf("\nBoth Strings are Not Equal");
    return 0;
}

// METHOD-II
#include <stdio.h>
#include <string.h>
int main()
{
    char firstInputString[100];
    char secondInputString[100];
    char bufferEnterInput;
    printf("Enter String-1: ");
    scanf("%[^\n]s", firstInputString);
    printf("Enter String-2: ");
    scanf("%c", &bufferEnterInput);
    scanf("%[^\n]s", secondInputString);
    int result = strcmp(firstInputString, secondInputString);
    if (result == 0)
        printf("\nBoth Strings are Equal");
    else
        printf("\nBoth Strings are Not Equal");
    return 0;
}