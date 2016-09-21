// By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number ?

#include <iostream>
#include "utils3.h"
#include <cmath>
using namespace std;

// This function finds the biggest factor of N.We will use this to identify a power of a single number or a prime number

// If prime number, factorize(N) == N

	int main() {
		int naturalnumber = 2;
		int nth = 0;
		int NthPrime = 10001;

		while (nth < NthPrime) {
			if (isprime(naturalnumber)) {
				nth++;
				// if (nth == NthPrime)
				cout << nth << "th prime number is " << naturalnumber << endl;
			}
		naturalnumber++;
		
		}
		
		cout << "calculation done" << endl;
		system("pause");
		return 0;
	}