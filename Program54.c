
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input         : unsigned Integer
//  Output        : pattern
//  Description   : Accept number from user and Display below pattern on screen.
//                  in Number.
//                   Input :  5   5
//                   Output:        
//                    1   2   3
//                    *   *   *
//                    1   2   3
//   Date          : 01/03/2021
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    
    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            if((i %2) == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%u",&iValue1);
    printf("Enter number of columns\n");
    scanf("%u",&iValue2);
    
    Pattern(iValue1,iValue2);
    return 0;
}



























