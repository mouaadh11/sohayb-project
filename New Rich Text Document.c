#include<stdio.h>
int main ()
{
    char fa[100];
    char d[20];
    char s[20];
    FILE* f=fopen("hlaimia","r");
    fscanf(f,"%s\n",&fa);
    printf("fa:%s\n",fa);
    do {
            fscanf(f,"%*s\t%s\t%*s\t%s\t",&d,&s);
            printf("d:%s\ns:%s\n",d,s);
            }while(!feof(f));

fclose(f);
}
