#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int age;
  int user_age;
  
  age = 34;
  user_age = 0;
    
  printf("Bonjour le monde !\n");
  printf("Quel âge avez-vous ?\n");
  scanf("%d",&user_age);
  printf("Vous avez donc %d ans !\n\n", user_age);
  printf("J'ai %d ans\n", age);
  printf("Je vais bien merci! \n");
  printf("Je teste le retour vers le futur :)\n");
  return 0;
}
