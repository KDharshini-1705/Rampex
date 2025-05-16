#include <stdio.h>

int main() {
       int month=3;
       switch(month)
      {
          case 1:
          printf("30 days");
          break;
          case 2:
          printf("28 days");
          break;
          case 3:
          printf("31 days");
          break;
          case 4:
          printf("30 days");
          break;
          default:
          printf("no other days");
      }
          return 0;
}