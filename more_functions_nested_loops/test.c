#include "main.h"

int main(void)
{
    /*
        + (addition)
        - (soustraction)
        * (multiplacation)
        / (division) -> 5 / 2 = 2
        % (modulo) -> 5 % 2 = 1
    */
   int niveau_terrorisme = 0;
   printf("Quel est le niveau du terrorisme au depart ? ");
   scanf("%d", &niveau_terrorisme);

   printf("Son niveau de terrorisme de depart est %d\n", niveau_terrorisme);
   printf("apres quelques rafales sur des foules\n");
   printf("son niveau actuel est de %d\n", niveau_terrorisme + 5);
    return 0;
}
