#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compareit with 5
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	num = n % 10;
	if (num > 5)
		printf("%d and is greater than 5\n", num);
	else if ((num < 6) && (num < 0))
		printf("%d and is less than 6 and not 0\n", num);
	else
		printf("%d and 0\n", num);
	return (0);

}
