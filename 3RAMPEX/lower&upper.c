#include <stdio.h>

int main() {
       char let='M';
       if(let>='a'&& let<='z')
       {
           printf("small");
       }
       else if(let>='A'&& let<='Z')
       {
           printf("capital");
       }
        return 0;
}