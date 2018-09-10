#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int i;
    int nbChoix;
    srand(time(NULL));
    int nbAleatoire = rand(), nbMin= 0, nbMax = 1000, nbEssais = 10 ;
    nbAleatoire = nbAleatoire % nbMax + 1;
    printf("************* Bienvenue dans le jeu *************\n");
    printf("-------------------------------------------------\n");
    printf("Trouvez le nombre secret est compris entre %d et %d\n",nbMin ,nbMax);
    printf("Vous avez %d essais\n", nbEssais);
    //printf("%d",nbrAleatoire);

    char dejaTestes[1000] = "Nombres déjà testés :" ;

    for(i=nbEssais-1;i>=0;--i)
    {
        printf("Entrez un nbr entre %d et %d : ", nbMin, nbMax);
        scanf("%d", &nbChoix);
        if(nbChoix==nbAleatoire)
        {
            printf("\n***    Reussi !!!!!!!   ***\n");
            return 0;
        }
        if(nbChoix<nbAleatoire)
        {
            printf("\nNbr trop petit !\n");
            if(nbMin<nbChoix)
            {
                nbMin=nbChoix;
            }
        }
        else
        {
            printf("\nNbr trop grand !\n");
            if(nbMax>nbChoix)
            {
                nbMax=nbChoix;
            }
        }
        printf("Il vous reste %d essais... \n", i);
		  char strNbChoix[12] ;
		  sprintf(strNbChoix, "%d", nbChoix);
		  strcat(dejaTestes, " ");
		  strcat(dejaTestes, strNbChoix);
		  printf("%s\n", dejaTestes);
    }
    printf("\n--- :( PERDU :( ---\n");
    return 0;
}
