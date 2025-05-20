#include <stdio.h>
int great(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
            }
   else if(b>=c){
           return b;
   }
   else{
       return c;
       }
   }
    int main(){
        printf("%d",great(5,6,7));
    }