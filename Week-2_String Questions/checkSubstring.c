#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char inputString[200], subString[50];
    bool isSubstring = false;

    printf("Enter input string: ");
    scanf("%[^\n]s", inputString);
    printf("Enter sub string to be searched: ");
    scanf("%*[\n]%[^\n]s", subString);

    int inputStringLength = strlen(inputString) - 1;
    int subStringLength = strlen(subString) - 1;

    for (int index = 0; index <= inputStringLength - subStringLength; index++)
    {
        for (int innerIndex = index; innerIndex < index + subStringLength; innerIndex++)
        {
            isSubstring = true;
            if (inputString[innerIndex] != subString[innerIndex - index])
            {
                isSubstring = false;
                break;
            }
        }
        if (isSubstring == true)
            break;
    }

    if (isSubstring == true)
    {
        printf("Entered substring is found in the string");
    }
    else
    {
        printf("Entered substring is not found in the string");
    }
    return 0;
}