#include <stdio.h>
#include <conio.h>

int main()
{
    char inputString[200];
    int parenthesisCount = 0;
    int index = 0;
    printf("Enter an expression: ");
    scanf("%s", inputString);
    while (inputString[index] != '\0')
    {
        if (inputString[index] == '(')
        {
            parenthesisCount++;
        }
        else if (inputString[index] == ')')
        {
            parenthesisCount--;
            if (parenthesisCount < 0)
                break;
        }
        index++;
    }
    if (parenthesisCount == 0)
    {
        printf("\nThe parenthesis in the entered expression is valid");
    }
    else
    {
        printf("\nThe parenthesis in the entered expression is not valid");
    }
    return 0;
}