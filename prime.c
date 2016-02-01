#include <stdio.h>
// program for finding prime numbers
#include <math.h>
#define N 100
int main(void) {
	int prime[N],p,i,isprime,primeindex,x;
	prime[0] = 2;  //even prime
	prime[1] = 3;  //first odd prime
	x=(int)sqrt(N); 
	primeindex = 2;
	for(p=5;p<N;p=p+2){  // checking for only odd numbers
		isprime = 1;
		for(i=0;i<primeindex;i++){
			if(prime[i]<=x){    // it is sufficent to check the number by other primes less than sqrt of given number
			if(p%prime[i]==0){
			isprime=0;
			break;
			}
			}
		}
		if(isprime == 1){
		prime[primeindex]=p;
		primeindex++;
		}
	}
for(i=0;i<primeindex;i++){ // displaying the result
	printf("%d\t",prime[i]);
}
return 0;
}
