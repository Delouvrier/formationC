#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int i;
    int nbrChoix;
    srand(time(NULL));
    int nbrAleatoire = rand(), nbMax = 1000, nbEssais = 10 ;
    nbrAleatoire = nbrAleatoire % nbMax + 1;
    printf("************* Bienvenue dans le jeu *************\n");
    printf("-------------------------------------------------\n");
    printf("Trouvez le nombre secret est compris entre 1 et %d\n", nbMax);
    printf("Vous avez %d essais\n", nbEssais);
    //printf("%d",nbrAleatoire);

    char dejaTestes[1000] = "Nombres déjà testés :" ;

    for(i=nbEssais-1;i>=0;--i)
    {
        printf("Entrez un nbr entre 1 et %d : ", nbMax);
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

		  char strNbrChoix[12] ;
		  sprintf(strNbrChoix, "%d", nbrChoix) ;
		  strcat(dejaTestes, " ") ;
		  strcat(dejaTestes, strNbrChoix) ;
		  
		  printf("%s\n", dejaTestes) ;

    }
    printf("\n--- :( PERDU :( ---\n");
    return 0;
}
