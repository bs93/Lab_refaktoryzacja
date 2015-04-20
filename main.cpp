#include <iostream>
#include <stdio.h>

using namespace std;

bool isPrime(int x)
{
	for(int i = 3; i < x ; i += 2)
	{
		if(x%i == 0) return false;
	}
	
	//To see which numbers are Prime uncomment the line below
	//cout << "Adding: " << x << "\n";
	return true;
}

unsigned long long sumOfPrimes(int limit)
{
    	unsigned long long sum = 2;
    
    	if(limit < 2)
    	{
        	return 0;
    	}
    
    	for(int i = 3 ; i < limit ; i += 2)
    	{
		if(isPrime(i)) sum += i;
	}
	
	return sum;
}

int main(int argc, char *argv[])
{
	cout << "Sum of prime numbers below 2 000 000: " << sumOfPrimes(2000000);
	getchar();
	return 0;
}
