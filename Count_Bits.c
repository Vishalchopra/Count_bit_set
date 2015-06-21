#include<stdio.h>

int main()
{
	int a, count;
	a = 15;
	count = BIt_set_count(a);
	printf("%d\n", count);
	return 0;
	
}

int BIt_set_count(int a)
{
	int n;
	n = 0;
	while(a)
	{
		n += a & 1;
		a >>= 1;
	}
	return n;

}
