#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	number_1;
	int	number_2;
	int	resultat;
	
	number_1 = 0;
	number_2 = 0;
	resultat = 0;
	
	printf("First number ?\n");
	scanf("%d", &number_1);

	printf("Second number ?\n");
	scanf("%d", &number_2);

	resultat = number_1 + number_2;

	printf("%d added to %d is %d !\n\n", number_1, number_2, resultat);

	return 0;
}
