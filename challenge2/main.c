#include <stdio.h>
#include <stdlib.h>

struct Etudiant{
    char nom[20];
    char prenom[20];
    int notes[3];
}Etudiant;
int main()
{


    printf("=====saisir les info de etudiant======\n");

    printf("le nom:");
    fgets(Etudiant.nom,20,stdin);

    printf("le prenom:");
    fgets(Etudiant.prenom,20,stdin);

    for(int i = 0; i<3 ; i++){
        printf("note %d :",i+1);
        scanf("%d",&Etudiant.notes[i]);
    }

     printf("=====les info de etudiant======\n");

    printf("le nom: %s",Etudiant.nom);


    printf("le prenom: %s",Etudiant.prenom);


    for(int i = 0; i<3 ; i++){
        printf("note %d :",i+1);
        printf("%d \t",Etudiant.notes[i]);
    }



    return 0;
}
