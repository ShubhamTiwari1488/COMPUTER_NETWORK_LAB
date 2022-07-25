#include<stdio.h>
#include<stdlib.h>

void print(unsigned char byte)
{
     for (int i = 7; i >= 0; i--) {
        int b = byte >> i;
        if (b & 1)
            printf("1");
        else
            printf("0");
    }
}

int main(){
  unsigned char bytes[4];
  unsigned long n = 5000;

  bytes[0] = (n >> 24) ;
  bytes[1] = (n >> 16) ;
  bytes[2] = (n >> 8) ;
  bytes[3] = (n >> 0) ;

  printf("Integer: %ld\n",n);

  printf("Byte Array: ");

  for(int i = 0; i < 4; i++){
    print(bytes[i]);
    printf("\t");
  }
  
  return 0;
}
