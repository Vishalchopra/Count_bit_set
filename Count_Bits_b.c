#include<stdio.h>

int count_bit_set(int);

int main()
{
	int num, count;
	printf("Enter the number\n");
	scanf("%d", &num);
	count = count_bit_set(num);
	printf("Number of bits set are/is = %d\n", count);
	return 0;
}

int count_bit_set(int num)
{
	int count;
	count = 0;
	while(num)
	{
		num &= (num - 1);
		count++;
	}
	return count;	
}
