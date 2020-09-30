//We can also add a prime seive approach
Here is the added code for checking and getting all the prime numbers till the given decided number
/*// C++ program to print all primes smaller than or equal to 
// n using Sieve of Eratosthenes 
#include <bits/stdc++.h> 
using namespace std; 

void SieveOfEratosthenes(int n) 
{ 
	// Create a boolean array "prime[0..n]" and initialize 
	// all entries it as true. A value in prime[i] will 
	// finally be false if i is Not a prime, else true. 
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		// If prime[p] is not changed, then it is a prime 
		if (prime[p] == true) 
		{ 
			// Update all multiples of p greater than or 
			// equal to the square of it 
			// numbers which are multiple of p and are 
			// less than p^2 are already been marked. 
			for (int i=p*p; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 

	// Print all prime numbers 
	for (int p=2; p<=n; p++) 
	if (prime[p]) 
		cout << p << " "; 
} 

// Driver Program to test above function 
int main() 
{ 
	int n = 30; 
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl; 
	SieveOfEratosthenes(n); 
	return 0; 
} 
*/
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
