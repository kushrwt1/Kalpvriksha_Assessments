#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int totalNoOfPermutations = 0;
void calculatePermutations(char *str, int leftIndex, int rightIndex)
{
    int index;
    if (leftIndex == rightIndex)
    {
        printf("%s\n", str);
        totalNoOfPermutations++;
    }
    else
    {
        for (index = leftIndex; index <= rightIndex; index++)
        {
            swap((str + leftIndex), (str + index));
            calculatePermutations(str, leftIndex + 1, rightIndex);
            swap((str + leftIndex), (str + index));
        }
    }
}

int main()
{
    char inputString[200];
    printf("Enter a String: ");
    scanf("%[^\n]s", inputString);
    int n = strlen(inputString);
    calculatePermutations(inputString, 0, n - 1);
    printf("Total No of Permutations are: %d", totalNoOfPermutations);
    return 0;
}