#include <stdio.h>
#include <stdlib.h>

struct personne{
    int age;
    char nom[20];
    char prenom[20];


};
int main()
{
    struct personne personne1 = {23,"benbrahim","redouane"};

    printf("votre prenom est %s \n",personne1.prenom);

    printf("votre nom est %s \n",personne1.nom);

    printf("votre age est %d \n",personne1.age);

    return 0;
}
