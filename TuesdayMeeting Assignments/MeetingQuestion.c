#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Taking all the Data Input
       char similarArray[20][100];
       int similarArrayIndex=0;
       char inputArray[20][100];
        for(int i=0;i<15;i++)
        {   if(i==0)
            {
                printf("Enter the City Value: "); 
            }
            if(i>0 && i<=2)
            {
                printf("Enter the Suburb Value: "); 
            }
            if(i>2 && i<=6)
            {
                printf("Enter the Town Value: "); 
            }
            if(i>6)
            {
                printf("Enter the Corporation Value: "); 
            }
            scanf("%s",inputArray[i]);
        }
        
    // Taking 2 Corporation Names as Input
    char firstCorporationName[100];
    char secondCorporationName[100];
    printf("Enter the 1st Corporation Name to be Search: ");
    scanf("%s",&firstCorporationName);
    printf("Enter the 2nd Corporation Name to be Search: ");
    scanf("%s",&secondCorporationName);
    
    int firstCorporationIndex=0;
    int secondCorporationIndex=0;

    // Searching for that Index of the Corporation Name in the inputArray
    for(int j=0;j<15;j++)
    {
        int match=1;
     for(int k=0;k<100;k++)
     {
         
         if(inputArray[j][k] != firstCorporationName[k])
         {
             match=0;
             break;
         }
         if(firstCorporationName[k]=='\0')
         {
             break;
         }
     }
     if(match)
     {
         firstCorporationIndex=j;
         break;
     }
    }
    
    for(int j=0;j<15;j++)
    {
        int match=1;
     for(int k=0;k<100;k++)
     {
         
         if(inputArray[j][k] != secondCorporationName[k])
         {
             match=0;
             break;
         }
         if(secondCorporationName[k]=='\0')
         {
             break;
         }
     }
     if(match)
     {
         secondCorporationIndex=j;
         break;
     }
    }
    
    // Finding Similar Parent Of Both the Corporation
    int firstCorporationImmediateParentIndex= (firstCorporationIndex-1)/2;
    int secondCorporationImmediateParentIndex= (secondCorporationIndex-1)/2;
    for(int i=0;i<3;i++)
    {
        int match=1;
        for(int j=0;j<100;j++)
     {
         if(inputArray[firstCorporationImmediateParentIndex][j] != inputArray[secondCorporationImmediateParentIndex][j])
         {
             match=0;
             break;
         }
         if(inputArray[firstCorporationImmediateParentIndex][j]=='\0'|| inputArray[secondCorporationImmediateParentIndex][j]=='\0')
         {
             break;
         }
     }
     if(match)
     {
         for(int k=0;k<100;k++)
         {
             similarArray[similarArrayIndex][k]=inputArray[firstCorporationImmediateParentIndex][k];
             if(inputArray[firstCorporationImmediateParentIndex][k]=='\0')
             {
                 break;
             }
         }
         similarArrayIndex++;
     }
    firstCorporationImmediateParentIndex= (firstCorporationImmediateParentIndex-1)/2;
    secondCorporationImmediateParentIndex= (secondCorporationImmediateParentIndex-1)/2;
    }

    // Printing the Similar Parent Of Both the Corporation
    printf("\n");
    for(int i=0; i<similarArrayIndex;i++)
    {
        printf("%s,  ",similarArray[i]);
    }
    return 0;
}
