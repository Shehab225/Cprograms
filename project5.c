#include <stdio.h>
int sumOfDigits(int); //prototype my function,..
int main(void) {
	
	int num, sum;
    
	scanf("%d", &num);
	sum = sumOfDigits(num);
	printf("%d", sum);
	return 0;
}

int sumOfDigits(int n) { //definition my function,..
	if (n<10) 
	    return n;
	else  
	    return (n%10 + sumOfDigits(n/10));
}

/*
Input

47253

Output

21

 
Input

643

Output

13 */
