#include <stdio.h>
// Il s'agit d'une fonction nommée "bonjour" qui renvoie un entier et ne prend aucun paramètre (void).
int bonjour(void)
{
    printf("Bonjour :) !\n");  // Cette ligne utilise printf pour afficher le message "Bonjour :) !" suivi d'une nouvelle ligne.

    return 0;
}

int main(void) // Il s'agit de la fonction main, le point de départ du programme.
{
    int retour_fonction;  // Déclaration d'une variable entière nommée 'retour_fonction'.

    retour_fonction = bonjour();  // Appel de la fonction 'bonjour' et stockage de sa valeur de retour dans 'retour_fonction'.

    printf("Retour : %d\n", retour_fonction);  // Impression de la valeur stockée dans 'retour_fonction' accompagnée du message "Retour : ".

    return 0;
}
