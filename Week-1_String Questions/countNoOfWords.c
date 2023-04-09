#include <stdio.h>
#include <string.h>
int main()
{
    char inputString[200];
    int inputStringIndex;
    scanf("%[^\n]s", inputString);
    int wordCount = 0;
    for (inputStringIndex = 0; inputString[inputStringIndex] != '\0'; inputStringIndex++)
    {
        if (inputString[inputStringIndex] != ' ' && inputString[inputStringIndex] != '\t' && inputString[inputStringIndex] != '\n')
        {
            if (inputString[inputStringIndex + 1] == ' ' || inputString[inputStringIndex + 1] == '\t' || inputString[inputStringIndex + 1] == '\n' || inputString[inputStringIndex + 1] == '\0')
            {
                wordCount++;
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }
    }
    printf("no. of words: %d", wordCount);
}