#include <stdio.h>

int main()
{
    int A[6][11]={
        0,0,0,0,0,1,0,0,0,0,0,
        0,0,0,0,1,0,1,0,0,0,0,
        0,0,0,1,0,0,0,1,0,0,0,
        0,0,1,1,1,1,1,1,1,0,0,
        0,1,0,0,0,0,0,0,0,1,0,
        1,0,0,0,0,0,0,0,0,0,1
    };
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<11;j++)
        {
            if(A[i][j]==0)
            {
                printf(" ");
            }
            else
            {
                printf("A");
            }
        }
        printf("\n");
    }
    return 0;
}