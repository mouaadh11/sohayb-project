#include<stdio.h>
#include<string.h>
int main()
{

    FILE* ft=fopen ("mouaadhtemp.txt","w+");
    char fa[100];
    char d[20];
    char s[20];
    char e[100];
    printf("enter the name of file :");
    scanf("%[^\n]%*c",fa);
    strcpy(e, fa);
    FILE* f=fopen (e,"r");
    fscanf(f,"%s\n%s\n%s",&fa,&d,&s);
    printf("1-%s\n2-%s\n3-%s\n",fa,d,s);
    fclose(f);
    fopen (e,"a");
    fscanf(f,"%s\n%s\n%s",&fa,&d,&s);
    printf("C-%s =",d);
    scanf("%[^\n]",&d);
    fprintf(ft,"%s\nd:%s\n%s\n",fa,d,s);
    fclose(f);
    fclose(ft);
    printf("\ne=%s\n",e);
    remove(e);
    rename("mouaadhtemp.txt",e);
    return 0;
}
