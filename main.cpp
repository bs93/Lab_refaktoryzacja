#include <iostream>
#include <stdio.h>

using namespace std;

bool isPrime(int x)
{
	for(int i=3; i<x ; i+=2)
	{
		if(x%i == 0) return false;
	}
	
	//To see which numbers are Prime uncomment the line below
	//cout << "Adding: " << x << "\n";
	return true;
}

int main(int argc, char *argv[])
{
	unsigned long long sum = 2;
	
	for(int i=3 ; i<2000000 ; i+=2)
	{
		if(isPrime(i)) sum += i;
	}

	cout << "Result: " << sum;
	getchar();
	return 0;
}
