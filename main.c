#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int i;
	int sum=0;

	int grade[5];
	for (i=0;i<5;i++)
	{
	printf("input grade[%i] = ", i);
	scanf("%d", &grade[i]);
	}

	for (i=0; i<5; i++)
	{
	printf("%i : %i\n", i, *(grade+i));
	sum+=*(grade+i);
	}
	printf("average : %d",sum/5 );

	return 0;
}
