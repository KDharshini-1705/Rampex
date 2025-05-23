// Online C compiler to run C program online
#include <stdio.h>
int perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        { 
            sum+=i;
        }
    }
    return sum;
}
int main() {
   int n;
   printf("enter number:");
   scanf("%d",&n);
   int num=perfect(n);
   if(num==n){
       printf("Its a perfect");
   }
   else{
       printf("Its not a perfect");
   }
}