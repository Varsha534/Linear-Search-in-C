#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num[] = {9, 6, 7, 8, 2, 10};
	int i, key;
	
	printf("Enter number to be searched \n");
	scanf("%d", &key);
	
	while((num[i] != key && (i<=5)))
	{
		i++;
	}
	if(num[i] == key)
		printf("Number is present at %d ", i+1 );
	else
		printf("Number is not present");
	
	return 0;
}
