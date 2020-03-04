#include<stdio.h>
//this program transfer Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.
void meter(double); //prototype for function  ,that telling compiler the deinition for function is coming...
void gram(double);
void temperature(double);
 int main(){
     
     int num;
     scanf("%d",&num);
     double item;
     char unit;
     int i=0;
     
     for (i=0 ; i<num ; i++ )
     {
         scanf("%lf %c", &item , &unit);
           if(unit == 'm'){
               meter(item);
           }else if(unit == 'g'){
               gram(item);
               
           }else if(unit == 'c'){
               temperature (item);
           }
          printf("\n");
     }
     
    }
    void meter(double transfer){ //definition for function,..
        double result;
        result = 3.2808 * transfer;
        printf("%lf ft",result);
    }
    
    void gram(double transfer){   //definition for function,..
         double result;
        result = 0.002205* transfer;
        printf("%lf lbs",result);
    }
    void temperature(double transfer){   //definition for function,..
         double result;
        result = 32 + 1.8* transfer;
        printf("%lf f",result);
    }
    /* Input

4
10 m
1245.243 g
37.2 c
23 g

 
Output

32.808000 ft
2.745761 lbs
98.960000 f
0.050715 lbs */

