
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input         : unsigned Integer
//  Output        : 1  *(pattern)
//  Description   : Accept number from user and Display number and symbol on screen.
//                  in Number.
//                  Input : 5
//                  Output : 1   *   2   *   3   *   4   *   5   *
//                  Input : 3
//                  Output : 1    *   2   *   3   *
//   Date          : 01/03/2021
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    Pattern(iValue);
    return 0;
}

