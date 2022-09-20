
/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Input         : unsigned Integer
//  Output        : pattern
//  Description   : Accept number from user and Display below pattern on screen.
//                  in Number.
//                   Input :  5   5
//                   Output:                            
//                           1       $       $       $        1,1     1,2     1,3     1,4
//                           1       2       $       $        2,1     2,2     2,3     2,4
//                           1       2       3       $        3,1     3,2     3,3     3,4
//                           1       2       3       4        4,1     4,2     4,3     4,4       
//   Date          : 01/03/2021
//   Author        : Pranav Anil Waghmare
//
///////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        return;
    }
    
    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            if(i >= j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("$\t");
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



























