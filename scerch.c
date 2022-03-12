#include<stdio.h>
int main()
{
int choix;

  printf("1-Recherch par nom.\n");
  printf("2-Retour.\n");
  printf("or any boton for Exit.\n");
  printf("choix:");
  scanf("%d",&choix);

  switch(choix)
  {
case 1:
    char fa[100];
    char d[20];
    char s[20];
   printf("enter the name of faculty:");
   scanf(" %[^\n]",&fa);
    FILE* f=fopen(fa,"r");

    if(f == NULL)
    {
	printf("doesn't existe");
    }else
    {
        fscanf(f,"%s\n",&fa);
        printf("fa:%s\n",fa);
        do {
            fscanf(f,"%s\n%s",&d,&s);
            printf("d:%s\ns:%s\n",d,s);
           }while(!feof(f));

    }



fclose(f);
    break;

default:
    return;
  }}

