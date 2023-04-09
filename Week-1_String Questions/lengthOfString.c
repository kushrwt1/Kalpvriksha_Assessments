#include <stdio.h>
#include <conio.h>
int main()
{
    char inputString[100];
    scanf("%[^\n]s", inputString);
    int inputStringIndex, length = 0;
    for (inputStringIndex = 0; inputString[inputStringIndex] != '\0'; inputStringIndex++)
    {
        length++;
    }
    printf("Length is: %d", length);
    return 0;
}