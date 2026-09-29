// Online C compiler to run C program online
#include <stdio.h>

int main() {
int arr[3][4],i,j,n;
    printf("\n enter the 12 element in 2-D array\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
    for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
                {
                    printf("   %d",arr[i][j]);
                }
            printf("\n");
        }
    printf("enter te element you want to search\n");
    scanf("%d",&n);
    for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
                {
                    if(arr[i][j]==n)
                    {
                         printf("\n%d in row %d and column %d",arr[i][j],i+1,j+1);
                        break;
                    }
                    
                }
        }
    //printf("\n%d in position %d",arr[i][j],(i*j));
    return 0;
}