#include "pch.h"
#include "PrimeNumberLib.h"

bool is_prime_number(int number)
{
	if (number <= 1) {
		return false;
	}
		
	int v = 2;
	
	while(v * v =< number){    　　　　　
		if (number % v++ == 0) 
		{
			return false;
		}
	};

	return true;
}
