#include <stdio.h>
unsigned int    lcm(unsigned int a, unsigned int b)
{
	int lcm = a * b;
	int res = 0;
	while(lcm >= a && lcm >= b)
	{
		if(lcm % a == 0 && lcm % b == 0)
			res = lcm;
		lcm --;
	}
	return((unsigned int)res);
}

/* int main()
{
	int a = -1;
	int b = 2932;
	printf("%d",lcm(a , b));
} */