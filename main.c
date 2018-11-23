#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int max = 100, min = 1;
    int rejouer=0, nombre=0, nombreMystere=0, compteur_de_coups=0, choix_mode=0, choix_difficulte=0;
    srand(time(NULL));
    printf("++++Plus ou moins----\n");
    printf("   Mode   \n1. 1 joueur\n2. 2 joueurs\n");
    scanf("%d", &choix_mode);
    switch(choix_mode)
    {
    case 1:
        printf("Vous avez choisi le mode 1 joueur !\n");
        printf("   Niveau de difficulte   \n1. Facile\n2. Moyen\n3. Difficile\n");
        scanf("%d", &choix_difficulte);
        switch(choix_difficulte)
        {
        case 1:
            printf("Vous avez choisi le niveau facile !\n");
            max=100;
            do
            {
                nombreMystere = (rand() % (max - min + 1)) + min;
                compteur_de_coups=0;
                while(nombre!=nombreMystere)
                {
                    printf("Quel est le nombre?\n");
                    scanf("%d", &nombre);
                    compteur_de_coups++;
                    if(nombre<nombreMystere)
                    {
                        printf("C'est plus !\n");
                    }
                    else if(nombre>nombreMystere)
                    {
                        printf("C'est moins !\n");
                    }
                    else
                    {
                        printf("Bravo, vous avez trouve le nombre mystere en %d coups!!!\n", compteur_de_coups);
                    }
                }
                printf("Voulez-vous rejouer? Oui=1 Non=0\n");
                scanf("%d", &rejouer);
            }while(rejouer==1);
        break;
        case 2:
            printf("Vous avez choisi le niveau moyen !\n");
            max=1000;
            do
            {
                nombreMystere = (rand() % (max - min + 1)) + min;
                compteur_de_coups=0;
                while(nombre!=nombreMystere)
                {
                    printf("Quel est le nombre?\n");
                    scanf("%d", &nombre);
                    compteur_de_coups++;
                    if(nombre<nombreMystere)
                    {
                        printf("C'est plus !\n");
                    }
                    else if(nombre>nombreMystere)
                    {
                        printf("C'est moins !\n");
                    }
                    else
                    {
                        printf("Bravo, vous avez trouve le nombre mystere en %d coups!!!\n", compteur_de_coups);
                    }
                }
                printf("Voulez-vous rejouer? Oui=1 Non=0\n");
                scanf("%d", &rejouer);
            }while(rejouer==1);
        break;
        case 3:
            printf("Vous avez choisi le niveau difficile !\n");
            max=10000;
            do
            {
                nombreMystere = (rand() % (max - min + 1)) + min;
                compteur_de_coups=0;
                while(nombre!=nombreMystere)
                {
                    printf("Quel est le nombre?\n");
                    scanf("%d", &nombre);
                    compteur_de_coups++;
                    if(nombre<nombreMystere)
                    {
                        printf("C'est plus !\n");
                    }
                    else if(nombre>nombreMystere)
                    {
                        printf("C'est moins !\n");
                    }
                    else
                    {
                        printf("Bravo, vous avez trouve le nombre mystere en %d coups!!!\n", compteur_de_coups);
                    }
                }
                printf("Voulez-vous rejouer? Oui=1 Non=0\n");
                scanf("%d", &rejouer);
            }while(rejouer==1);
        break;
        }
    break;
    case 2:
        printf("Vous avez choisi le mode 2 joueurs !\n");
        do
        {
            printf("Joueur 1, entrez le nombre secret !\n");
            scanf("%d", &nombreMystere);
            printf("Au tour du joueur 2 !\n");
            compteur_de_coups=0;
            while(nombre!=nombreMystere)
            {
                printf("Quel est le nombre?\n");
                scanf("%d", &nombre);
                compteur_de_coups++;
                if(nombre<nombreMystere)
                {
                    printf("C'est plus !\n");
                }
                else if(nombre>nombreMystere)
                {
                    printf("C'est moins !\n");
                }
                else
                {
                    printf("Bravo, vous avez trouve le nombre mystere en %d coups!!!\n", compteur_de_coups);
                }
            }
            printf("Voulez-vous rejouer? Oui=1 Non=0\n");
            scanf("%d", &rejouer);
        }while(rejouer==1);
    break;
    default:
        printf("Vous avez fait un choix inconnu !\n");
    break;
    }
    return 0;
}
