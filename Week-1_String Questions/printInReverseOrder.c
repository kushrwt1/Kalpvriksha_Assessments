#include <stdio.h>
#include <string.h>
int main()
{
    char inputString[200];
    scanf("%[^\n]s", inputString);
    int inputStringIndex;
    int inputStringLength = strlen(inputString);
    printf("%d", inputStringLength);
    for (inputStringIndex = inputStringLength - 1; inputStringIndex >= 0; inputStringIndex--)
    {
        printf("%c", inputString[inputStringIndex]);
    }
    return 0;
}