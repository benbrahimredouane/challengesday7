#include <stdio.h>
#include <stdlib.h>



typedef struct {

    int x;
    int y;
}point;

void changervaleur(point *p);




int main(){
    point M;
    printf("saisir un nombre 1!\n");
    scanf("%d",&M.x);


    printf("saisir un nombre 2!\n");
    scanf("%d",&M.y);


    printf("la valeur de x est %d",M.x);
    printf("la valeur de x est %d \n",M.y);
    changervaleur(&M);
    printf("la valeur de x est %d",M.x);
    printf("la valeur de x est %d \n",M.y);


    return 0;
}
void changervaleur(point *p){
    int temp;

    temp=(*p).x;
    (*p).x=(*p).y;
    (*p).y=temp;

}