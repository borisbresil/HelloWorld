#include <stdlib.h>
#include <stdio.h>

int main(void)
{

int num_input;
int count;

num_input = 0;
count = 0;

while (num_input != 42 && count <= 5)
{
	printf("Please enter a number: \n");
	scanf("%d", &num_input);
	count++;
}
}
