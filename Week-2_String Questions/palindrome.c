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
int main()
{
    char inputString[200];
    printf("Enter a String: ");
    scanf("%[^\n]s", inputString);
    removeSpace(inputString);
    int leftIndex = 0;
    int rightIndex = strlen(inputString) - 1;
    while (rightIndex > leftIndex)
    {
        if (inputString[leftIndex++] != inputString[rightIndex--])
        {
            printf("%s is not a palindrome\n", inputString);
            return 0;
        }
    }
    printf("%s is a palindrome\n", inputString);
    return 0;
}