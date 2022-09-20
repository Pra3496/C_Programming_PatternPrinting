
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input         : unsigned Integer
//  Output        : * (pattern)
//  Description   : Accept number from user and Display * on screen.
//                  in Number.
//                  Input : 5
//                  Output : *   *   *   *   *
//                  Input : 9
//                  Output : *    *   *   *   *   *   *   *   *
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
        printf("*\t");
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

