#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nom[30];
    float prix;
    int quantite;
}Produit;


void ajouterProduit(Produit tabproduit[],int tailletable);
void afficherProduit(Produit tabproduit[],int tailletable);


int main(){
    Produit tabproduit[50];
    int choix;
    int tailletable;
    
    do{
    printf("taper 1 pour ajouter un produit \n");
    printf("taper 2 pour afficher le tableau de produit \n");
    printf("Quitter 3 \n");
    scanf("%d",&choix);
    getchar();
    
    switch(choix){
        case 1:
                   do{
                   printf("quille la taille de votre tableau des produit\n");
                   scanf("%d",&tailletable); 
                   getchar();
                   }while(tailletable<1);

              ajouterProduit(tabproduit,tailletable);
              break;

               case 2:
               afficherProduit(tabproduit,tailletable);
               break;

               case 3:
               printf("Ok ay revoir");
               break;

               default:
               printf("invalide choix ressayer");
               break;
            }
            }while(choix!=3);
            return 0;
        }

void ajouterProduit(Produit tabproduit[], int tailletable){
    
    for (int i = 0; i < tailletable; i++)
    {  
        printf("saisir le nom de produit n %d \n", i+1);
        fgets(tabproduit[i].nom,sizeof(tabproduit[i].nom),stdin);
        tabproduit[i].nom[strcspn(tabproduit[i].nom,"\n")]='\0';

        printf("saisir le prix de produit n %d \n", i+1);
        scanf("%f",&tabproduit[i].prix);
        getchar();

         printf("saisir le quantite de produit n %d \n", i+1);
        scanf("%d",&tabproduit[i].quantite);
        getchar();    
   }
}

void afficherProduit(Produit tabproduit[], int tailletable){
    
 
    
    for (int i = 0; i < tailletable; i++)
    {  
        printf("le nom de produit n: %d est %s\n", i+1,tabproduit[i].nom);
    

        printf("le prix de produit n:%d est %f \n", i+1,tabproduit[i].prix);
       

         printf("le quantite de produit n: %d est %d\n", i+1,tabproduit[i].quantite);
      
}
}
