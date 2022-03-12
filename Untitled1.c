#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ft=fopen ("mouaadhtemp.txt","w+");
    FILE* fl=fopen ("mouaadhlist.txt","r");
    FILE* flt=fopen ("mouaadhlisttemp.txt","w");
    char fa[100];
    char d[20];
    char s[20];
    char nfa[100];
    char nd[20];
    char ns[20];
    char e[100];
    int ch;
    printf("enter the name of faculty:");
    scanf("%[^\n]",&e);
    FILE* f=fopen(e,"r");//MAIN FILE//
            if(f == NULL)
            {
                printf("\t..::doesn't existe::..");
                return 0;
            }
            else
            fscanf(f,"\n%s\n",&fa);
            printf("fa:%s\n",fa);
            do
            {
                fscanf(f,"%s\n%s\n",&d,&s);
                printf("d:%s\ns:%s\n",d,s);
            }
            while(!feof(f));
            fclose(f);

    printf ("what do you want to update:\n");
    printf ("[1] all the faculty\n");
    printf ("[2] depertements\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:    //update all the faculty
        f=fopen(e,"r");
            fscanf(f,"\n%s\n",&fa);
            printf("..::enter the new name of faculty:");
            scanf(" %[^\n]",&nfa);
            fprintf(ft,"%s\n",nfa);
            printf("fa:%s\n",nfa);
    do
    {
                fscanf(f,"%s\n%s\n",&d,&s);
                printf("..::enter the new name of depertement :");
                scanf(" %[^\n]",&nd);
                printf("enter the new number of section :");
                scanf(" %[^\n]",&ns);
                fprintf(ft,"\n%s\n%s",nd,ns);
                printf("d:%s\ns:%s\n",nd,ns);
    }
    while(!feof(f));
    do
    {
        fscanf(fl,"\n%s\n",&fa);
        printf("fa:%s\n%s\n%s\n",fa,e,nfa);
        if (strcmpi(e,fa)==0)
        fprintf(flt,"\n%s\n",nfa);
        else
         fprintf(flt,"\n%s\n",fa);
    }
    while(!feof(fl));
    break;
    case 2:
        int choix;
        f=fopen(e,"r");
            fscanf(f,"\n%s\n",&fa);
            fprintf(ft,"%s\n",fa);
            printf("fa:%s\n",fa);
                printf("enter the number of depertement");
                scanf("%d",&choix);
                int i=1;
    do
    {

                fscanf(f,"%s\n%s\n",&d,&s);
                if (i == choix){
                printf("..::enter the new name of depertement :");
                scanf(" %[^\n]",&nd);
                printf("enter the new number of section :");
                scanf(" %[^\n]",&ns);
                fprintf(ft,"\n%s\n%s",nd,ns);
                printf("d[%d]:%s\ns[%d]:%s\n",i,nd,i,ns);
                }
                else
                    {

                fprintf(ft,"\n%s\n%s",d,s);
                printf("d [%d]:%s\ns [%d]:%s\n",i,d,i,s);
                    }
                i++;

    }
    while(!feof(f));
    break;
    }

    /*fscanf(f,"\n%s\n",&fa);
    printf("enter the new name of faculty:");
    scanf(" %[^\n]",&nfa);
    fprintf(ft,"\n%s\n",nfa);
    printf("fa:%s\n",nfa);
    do
    {
        fscanf(f,"%s\n%s\n",&d,&s);
        printf("enter the new name of depertement :");
        scanf(" %[^\n]",&nd);
        printf("enter the new number of section :");
        scanf(" %[^\n]",&ns);
        fprintf(ft,"\n%s\n%s",nd,ns);
        printf("d:%s\ns:%s\n",nd,ns);
    }
    while(!feof(f));
    do
    {
        fscanf(fl,"\n%s\n",&fa);
        printf("fa:%s\n%s\n%s\n",fa,e,nfa);
        if (strcmpi(e,fa)==0)
        fprintf(flt,"\n%s\n",nfa);
        else
         fprintf(flt,"\n%s\n",fa);
    }
    while(!feof(fl));*/

    fclose(flt);
    fclose(fl);
    remove("mouaadhlist.txt");
    rename("mouaadhlisttemp.txt","mouaadhlist.txt");
    fclose(f);
    fclose(ft);

    switch(ch){
case 1:
    remove(e);
    rename("mouaadhtemp.txt",nfa);
    break;
    case 2:
    remove(e);
    rename("mouaadhtemp.txt",fa);
    break;}
    return 0;
}
