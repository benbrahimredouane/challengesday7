#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    int longueur;
    int largeur;

}Rectangle;
int aire(struct Rectangle R);

int main(){
    struct Rectangle M ;   

    
    printf("saisir longeur!\n");
    scanf("%d",&M.longueur);

    printf("saisir largeur!\n");
    scanf("%d",&M.largeur);

    printf("l'aire du rectangle est : %d\n", aire(M));

    return 0;
}

int aire(struct Rectangle R){
    return R.longueur * R.largeur;
}