#include <stdio.h>

typedef struct{
    char nom[20];
    float solde;
}Compte;


void modifiersolde(Compte cleint1);
int main(){
 
    Compte cleint1 ={"moha",502.4};

    modifiersolde(cleint1);

    printf("le nom de client est:\n%s",cleint1.nom);
    printf("le neveaux solde est \n%f",cleint1.solde);
    


    return 0;
}
void modifiersolde(Compte cleint1){
    int montant;
    printf("saisir le mantant :\n");
    scanf("%d",montant);

    cleint1.solde+=montant;
    
}