#include <stdio.h>
int main()
{
int arr[3][2][2]={{{2,9},{8,9}},{{4,9},{5,5}},{{7,4},{6,3}}},sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                sum+=arr[i][j][k];
            }
        }
    }
    printf("%d",sum);
    return 0;
}