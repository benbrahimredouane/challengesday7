#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nom[20];
    float salaire;
}Employe;

int main(){
    int taille;
    printf("donner n des employe vous avez: \n");
    scanf("%d",&taille);
    getchar();
    Employe *p = (Employe*) malloc(taille * sizeof(Employe));
    if (p==0){
        printf("allocation echec!");
        return 1;
    }

   for(int i=0;i<taille;i++){
    printf("saisir le nom de employer numero %d\n:",i+1);
    fgets(p[i].nom,sizeof(p[i].nom),stdin);
    p[i].nom[strcspn(p[i].nom,"\n")]='\0';

    printf("saisir salaire d employer numero %d\n:",i+1);
    scanf("%f",&p[i].salaire);
    getchar();
   }

    for(int i=0;i<taille;i++){
    printf("le nom de employer numero %d est :%s \n",i+1,p[i].nom);
    printf("salaire d employer numero %d est :%.2f\n",i+1,p[i].salaire);
    
   }


   free(p);
    return 0;
}