#include <stdio.h>
#include <string.h>

typedef struct{
    char title[20];
    char auteur[20];
    int annee;
}Livre;

Livre creeunlivre();
int main(){
    int n;
  do{
  printf("tab 1 to cree un livre puis l affiche");
  scanf("%d",&n);
  getchar();
  }while(n!=1);

  Livre brook = creeunlivre();

  printf("le titre de votre livre est :%s",brook.title);
  printf("l auteur de votre livre est :%s",brook.auteur);
  printf("l annee de votre book est :%d",brook.annee);

}

Livre creeunlivre(){
    Livre book;
    printf("saisir le titre de livre:\n");
    fgets(book.title,sizeof(book.title),stdin);
    book.title[strcspn(book.title,"\n")]='\0';

    printf("saisir l auteur de livre:\n");
    fgets(book.auteur,sizeof(book.auteur),stdin);
    book.auteur[strcspn(book.auteur,"\n")]='\0';


    printf("saisir l annes de livre:\n");
    scanf("%d",&book.annee);
    getchar();

    return book;

}