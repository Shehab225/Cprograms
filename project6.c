#include<stdio.h>
// using operator sizeof(),..
int integer(int);
int character(int); // prototype my function,..
int doubl(int );

int main(void){
    int num=0; //num of variables that i will use,..
    int i;
    int sum=0; //sum of bytes that i will take from memory
    char c;
    int n;
    scanf("%d",&num);
    for(i=0;i<num;i++){ 
        scanf("%d %c",&n,&c);
        if (c == 'i'){
            sum = sum+integer(n); // call function ,..
        }else if(c == 'c'){
            sum = sum+character(n);
        }else if(c == 'd'){
            sum = sum + doubl(n);
        }else{
            printf("Invalid tracking code type ");// If the user enters an incorrect type for any tracking number,..

            return 0;
        }
    }
    printf("%d bytes",sum);
} 
     int integer(int n){ // definition function,..
         
         int result;
        result= sizeof(int)*n;
        return result;
     }
     
     
     int character(int n ){
         int result;
         result = sizeof(char)*n;
         return result;
     }
         
    int doubl(int n){
        int result;
        result = sizeof(double)*n;
        return result;
    }     
         
       /*  Input:

3
10 i
7 c
12 d 

Output:

143 bytes*/
    





