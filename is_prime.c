#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// please add comments
int is_prime(int n);
int next_prime(int n);

int main(int argc, char const *argv[]) {
	int n, next;

	printf("Enter a number: \n");
	scanf("%d", &n);

	if(is_prime(n)) {
		printf("%d is a prime number\n",n);
	}
	else {
		printf("%d is not a prime number\n",n);
	}

	next = next_prime(n);
	printf("The next prime number is %d\n", next);

	return 0;
}

int
is_prime(int n) {
	int divisor;

	for (divisor = 2; divisor*divisor <= n; divisor++) {
		if (n % divisor == 0) {
			return 0;
		}
	}
	return 1;
}

int
next_prime(int n) {
	n += 1;

	if(is_prime(n)) {
		return n;
	}
	return next_prime(n);
}

// you should ad a print statement here, so it looks nice
