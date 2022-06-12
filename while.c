#include <stdlib.h>
#include <stdio.h>

int main(void)
{

int num_input;

num_input = 0;

while (num_input != 42)
{
	printf("Please enter a number: \n");
	scanf("%d", &num_input);
}
}
