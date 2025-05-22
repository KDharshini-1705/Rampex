#include <stdio.h>
int rev(int n){
    int rev=0;
    int orgin=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }

if(orgin=rev){
    printf("its a palindrome");
}
else{
    printf("not a palindrome");
}
return 0;
}
int main() {
    rev(3456);
    return 0;
    
}