#include <stdio.h>
int add(int x,int y){
    return x+y; 
}
    int sub(int x,int y){
        return x-y;
    }
    int multi(int x,int y){
        return x*y;
    }
    int div(int x,int y){
        return x/y;
    }


int main() {
   printf("add %d\n",add(5,7));
   printf("sub %d\n",sub(5,7));
   printf("multiplication %d\n",multi(5,7));
   printf("div %d\n",div(5,7));
    return 0;
}