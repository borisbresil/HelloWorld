#include <stdlib.h>
#include <stdio.h>

void	menu_display(void)
{

	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
}
int	main(void)
{
	int menu_number;

	menu_display();
	printf("Votre choix ? \n");
	scanf("%d", &menu_number);
	
	if (menu_number == 1)
	{
		printf("Tu as choisi le menu Royal Cheese !\n");
	}

	if (menu_number == 2)
	{
		printf("Tu as choisi le menu Mc Deluxe !\n");
	}
	if (menu_number == 3)
	{
		printf("Tu as choisi le menu Mc Bacon !\n");
	}
	if (menu_number == 4)
	{
		printf("Tu as choisi le menu Big Mac !\n");
	}
	else
	{
		printf("menu_number = %d\n", menu_number);
	}

	return menu_number;
}

