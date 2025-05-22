#include<stdio.h>
int division(int n)
{
int sum=0;
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        sum=sum+i;
    }
}
   printf("%d",sum);
   return sum;
}
int main()
{
    division(4);

}