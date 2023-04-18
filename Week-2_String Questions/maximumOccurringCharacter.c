#include <stdio.h>
#include <string.h>

void removeSpace(char *stringWithSpaces)
{
    int count = 0;
    for (int index = 0; stringWithSpaces[index]; index++)
        if (stringWithSpaces[index] != ' ')
            stringWithSpaces[count++] = stringWithSpaces[index];
    stringWithSpaces[count] = '\0';
}

char getMaximumOccurringCharacter(char *str)
{
    int characterFrequencyCountArray[256] = {0};
    int length = strlen(str);
    int maximumFrequency = 0;
    char maximumOccurringCharacter;
    for (int index = 0; index < length; index++)
    {
        characterFrequencyCountArray[str[index]]++;
        if (maximumFrequency < characterFrequencyCountArray[str[index]])
        {
            maximumFrequency = characterFrequencyCountArray[str[index]];
            maximumOccurringCharacter = str[index];
        }
    }

    return maximumOccurringCharacter;
}
int main()
{
    char inputString[200];
    printf("Enter a String: ");
    scanf("%[^\n]s", inputString);
    removeSpace(inputString);
    printf("Maximum occurring character is %c", getMaximumOccurringCharacter(inputString));
}