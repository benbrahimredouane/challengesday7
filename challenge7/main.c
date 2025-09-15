#include <stdio.h>

typedef struct {
    int jour;
    int mois;
    int annee;
}Date;

int main(){
    Date *p;
    Date date;
    p = &date ;
    printf("saisir la date complet dd/mm/ans \n");

    scanf("%d",&p->jour);
    
    scanf("%d",&p->mois);
    
    scanf("%d",&p->annee);
     

    printf("\t ===le jour est : %d",p->jour);
    printf("\t ===le mois est : %d", p->mois);
    printf("\t ===l annee est : %d",p->annee);

    

return 0;
}