#include <stdio.h>
int fibbo(int n){
    
    if(n==0){
        return 0;
    }
    else if(n==1){
      return 1;
    }
    else{
        return fibbo(n-1)+fibbo(n-2);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",fibbo(n));

    return 0;
}