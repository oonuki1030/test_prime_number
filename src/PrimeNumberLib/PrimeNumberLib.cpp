#include "pch.h"
#include "PrimeNumberLib.h"

bool is_prime_number(int number)
{
	if (number <= 1) {
		return false;
	}
		
	int v = 2;
	
	while(v < number){    　　　　　//変更箇所
		if (number % v++ == 0) 
		{
			return false;
		}
	};

	return true;
}
