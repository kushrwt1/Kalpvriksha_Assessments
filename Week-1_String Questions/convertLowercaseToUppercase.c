#include <stdio.h>
#include <string.h>
int main()
{
    char inputString[200];
    scanf("%[^\n]s", inputString);
    int inputStringIndex;
    for (inputStringIndex = 0; inputString[inputStringIndex] != '\0'; inputStringIndex++)
    {
        if (inputString[inputStringIndex] >= 97 && inputString[inputStringIndex] <= 122)
        {
            inputString[inputStringIndex] = inputString[inputStringIndex] - 32;
        }
    }
    printf("String After Conversion is: ");
    printf("%s", inputString);
    return 0;
}