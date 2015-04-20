#include <iostream>
#include <stdio.h>

using namespace std;

//  Public : Determine if the given number is a prime number.
//
//  x − The number to be checked.
//
//  Examples
//
//  isPrime(6)
//  => false
//
//  isPrime(7)
//  => true
//
//  Returns true if the given number is prime, else returns false
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

//  Public : Compute sum of the prime numbers below the given limit.
//
//  limit - Limit below which sum is being computed.
//
//  Examples
//
//  sumOfPrimes (20)
//  => 77
//
//  If the given number is less than 2 returns 0,else returns sum of the prime numbers
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
	cout << "Result: " << sumOfPrimes(2000000);
	getchar();
	return 0;
}
