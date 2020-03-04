#include <stdio.h>

int min(int, int);// prototype for function,..that telling compilier: the definition of function is coming,.. 

int main(void) {
	int i;
	int minimum;
	int num;
	int a;

	scanf("%d", &num);
	scanf("%d", &minimum);

	for (i = 1; i < num; i++) {
		scanf("%d", &a);
		minimum = min(minimum, a); //calling function,..
	}
	printf("%d\n", minimum);

	return 0;
}

int min(int a, int b) { //definition for function,..
    if (a < b){
	return a;
    }else{
	return b;
    }
}
