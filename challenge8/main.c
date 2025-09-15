#include <stdio.h>
#include <math.h>

typedef struct{
    int rayon;
}Cercle;

int surface( Cercle cerclee);
int main(){
    Cercle cerclee;
printf("saisir le rayon pour calcler l aire");
scanf("%d",&cerclee.rayon);

printf("l aire de votre cercle a partir de rayon vous saisir est %d",surface(cerclee));
    return 0;
}

int surface(Cercle cerclee){
    const float pi=3.14;
    return pi*pow(cerclee.rayon,2);
}