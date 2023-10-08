#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
 	int* Eratosthenes(int n, int *size);
	
	int size = 0, *primes;
	
	primes = Eratosthenes(100, &size);
	
	for (int i = 0; i < size; ++ i)
	{
		printf("%d", primes[i]);
		
		if (i != size - 1)
			putchar(',');
	}
		
	return 0;
}

int* Eratosthenes(int n, int *size) {
	
	int nums[n] = {1, 1, 0};
	
	for (int i = 2; i < sqrt(n); ++ i)
	{
		if (nums[i] == 0)
			for (int j = 2; i * j < n; ++ j)
				nums[i * j] = 1;

		
	}
	
	for (int i = 2; i < n; ++ i)
		if (nums[i] == 0)
			++ *size;
	
	int *primes = (int *) malloc(sizeof(int) * (*size));
	
	for (int i = 2, k = 0; i < n; ++ i)
		if (nums[i] == 0)
			primes[k ++] = i;
			
	return primes;
}
