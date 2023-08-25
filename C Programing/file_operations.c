//file system is used to store data
//it is of 2 types text file an binary file
//we can open create read and exit a file
#include<stdio.h>
#include<string.h>
int main() {
//   FILE *fptr;
//   fptr = fopen("abc2.txt", "w");
//   fclose(fptr);

//   return 0;
// }
  FILE *fptr;
  fptr = fopen("abc.txt", "a");
  fprintf(fptr,"Hello, world! ths is how we write a file\n");
  fclose(fptr);
  return 0;
}