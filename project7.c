#include <stdio.h>
int main(){
  
    double a = 42.98;
    double * addressOfA = &a; //this mean we will store an address fo variable a in a variable addressOfA,..
    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA); //adrdressOfA = &a,,,,* addressOfA = a,,
    char c = 'm';
    char * addressOfC = &c;
    char d = * addressOfC; // * addressOfC = c
    printf("%c %c\n",c,d);
    * addressOfA = 32; //* addressOfA = a,,
    * addressOfA = * addressOfA + 1;
    printf("At the address %p there is the value %.2lf\n",addressOfA,* addressOfA);
    return 0;
    
}
