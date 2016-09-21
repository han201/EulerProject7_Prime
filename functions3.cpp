#include <iostream>
#include "utils3.h"
#include <cmath>
using namespace std;

bool isprime(int N) {
	int primen = 0;
	if (N == 1)
		primen = 0;
	else if (N == 2 || N == 3 || N == 5 || N == 7)
		primen = 1;
	else {
		int maxim = pow(N, 0.5);
		primen = 0;
		int j = 3;
		while (N % 2 > 0 && N % 3 > 0 && j <= maxim) {
			if (N%j == 0) {
				primen = 0;
				break;
			}
			else {
				j = j + 2;
				primen = 1;
			}

		}
	}
	return primen;
}