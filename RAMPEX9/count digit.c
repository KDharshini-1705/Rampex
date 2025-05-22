#include<stdio.h>
int digit(int n)
{
    int count=0;
    if(n==0)
    {
        return 1;
    }
        while(n!=0)
        {
            count++;
            n=n/10;
        }
    
    
    return count;
}
int main()
{
    int n;
    printf("enter the integer:");
    scanf("%d",&n);
    printf("number of digits:%d",digit(n));
    return 0;
}