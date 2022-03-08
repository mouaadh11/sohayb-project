#include<stdio.h>
int main ()
{
    char fa[100];
    char d[20];
    char s[20];
   printf("enter the name of file");
   scanf("%[^\n]%*c",&fa);
    FILE* f=fopen(fa,"r");
    fscanf(f,"%s\n",&fa);
    printf("fa:%s\n",fa);
    do {
            fscanf(f,"%s\n%s",&d,&s);
            printf("d:%s\ns:%s\n",d,s);
            }while(!feof(f));

fclose(f);
}
