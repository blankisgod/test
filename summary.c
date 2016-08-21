#include <stdio.h>


int summary(int n);

int main()
{
	int i, result;

	result = 0;
	for(i = 1; i <= 100; i++){
		result += i;
		}

	printf( "Summary[1-100] = %d\n",result);
	printf( "Summary[1-450] = %d\n", summary(450));
	return 0;
}

int summary(int n)
{
	int sum = 0;
	int i;
	for(i = 1; i <= n; i++){
		sum += i;
		}
	return sum;

}
