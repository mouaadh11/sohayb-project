#include<stdio.h>
#include<string.h>
int main()
{

    FILE* ft=fopen ("mouaadhtemp.txt","w");
    char fa[100];
    char d[20];
    char s[20];
    char e[100];
    printf("enter the name of file :");
    scanf("%[^\n]%*c",fa);
    strcpy(e,fa);
    /*FILE* f=fopen (e,"r");
    fscanf(f,"%s\n",&fa);
    printf("fa:%s\n",fa);
    do
    {
        fscanf(f,"%s\n%s",&d,&s);
        printf("d:%s\ns:%s\n",d,s);
    }
    while(!feof(f));
    fclose(f);
    strcpy(e,fa);*/
    FILE* f=fopen("math&informatique","r");
        printf("fa:");
        scanf(" %[^\n]",&fa);
        fprintf(ft,"fa:%s\n",fa);

        fflush(stdin);
        do {
        /*printf("d:");
        scanf(" %[^\n]",&d);
        fprintf(ft,"fa:%s\n",d);
        printf("s:");
        scanf(" %[^\n]",&s);
        fprintf(ft,"fa:%s\n",s*/
        fscanf(f," %s\n %s",&d,&s);
        fprintf(ft,"d:%s\ns:%s\n",d,s);
        fflush(stdin);
        printf("RASSI DHARNI \n");
        fflush(stdin);
           }while(!feof(f));



    /*fscanf(f,"%s\n%s\n%s",&fa,&d,&s);
    printf("C-%s =",d);
    scanf("%[^\n]",&d);
    fprintf(ft,"%s\nd:%s\n%s\n",fa,d,s);*/
    fclose(f);
    fclose(ft);
    remove(e);
    rename("mouaadhtemp.txt",e);
    return 0;
}
