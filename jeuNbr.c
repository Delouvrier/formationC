#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int nbrChoix;
    srand(time(NULL));
    int nbrAleatoire = rand();
    nbrAleatoire = nbrAleatoire%10+1;
    printf("************* Bienvenue dans le jeu *************\n");
    printf("-------------------------------------------------\n");
    printf("Trouvez le nombre secret est compris entre 1 et 10\n");
    printf("Vous avez 3 essais\n");
    //printf("%d",nbrAleatoire);

    for(i=2;i>=0;i--)
    {
        printf("Entrez un nbr entre 1 et 10 : ");
        scanf("%d", &nbrChoix);
        if(nbrChoix==nbrAleatoire)
        {
            printf("\n***    Reussi !!!!!!!   ***\n");
            return 0;
        }
        if(nbrChoix<nbrAleatoire)
        {
            printf("\nNbr trop petit !\n");
        }
        else
        {
            printf("\nNbr trop grand !\n");
        }
        printf("Il vous reste %d essais... \n", i);
    }
    printf("\n--- :( PERDU :( ---\n");
    return 0;
}
