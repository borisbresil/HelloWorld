#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	double	number_1;
	double	number_2;
	double	resultat;
	
	number_1 = 0;
	number_2 = 0;
	resultat = 0;
	
	printf("First number ?\n");
	scanf("%lf", &number_1);

	printf("Second number ?\n");
	scanf("%lf", &number_2);

	resultat = number_1 + number_2;

	printf("%lf added to %lf is %lf !\n\n", number_1, number_2, resultat);

	return 0;
}
