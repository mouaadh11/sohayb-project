#include<stdio.h>
#include<string.h>
int main()
{

    FILE* ft=fopen ("mouaadhtemp.txt","w+");
    char fa[100];
    char d[20];
    char s[20];
    //char e[20];
    /*fprintf(f,"%s\t",s);
    fclose(f);
    fopen ("mouaadh.txt","r");
    fscanf(f,"%s\t%s\t%s",&d,&C,&e);
    printf("1-%s\n2-%s\n3-%s\n",d,C,e);
    fclose(f);
    fopen ("mouaadh.txt","a");
    fscanf(f,"%s\t%s\t%s",&d,&C,&e);
    printf("C-%s =",C);
    scanf("%[^\n]",&C);
    fprintf(ft,"%s\t%s\t%s\t",d,C,e);
    fclose(f);
    fclose(ft);
    remove("mouaadh.txt");
    rename("mouaadhtemp.txt","mouaadh.txt");*/
    for (;;)
    {
        fflush(stdin);
        printf("To exit enter blank space in the name input\nfaculty (Use identical):");
        scanf("%[^\n]",&fa);
        if(stricmp(fa,"")==0 || stricmp(fa," ")==0)
            break;
        FILE  *f =fopen(fa,"w");
        fprintf(f,"f:%s\n",fa);
        fflush(stdin);
        for(;;)
        {
            printf("To exit enter blank space in the name input\n");
            printf("depertement :");
            scanf("%[^\n]",&d);
            if(stricmp(d,"")==0 || stricmp(d," ")==0)
                break;
            else{
            fprintf(f,"d:%s\n",d);
            fflush(stdin);}
            //nnjmou nzidou kima nbghou ida mabghinach 3added
            printf("To exit enter blank space in the name input\n");
            printf("numbers of section :");
            scanf("%[^\n]",&s);
            if(stricmp(d,"")==0 || stricmp(d," ")==0)
                break;
            else
                fprintf(f,"s:%s\n",s);
            fflush(stdin);
            printf("\n");
        }
       fclose(f);
    }
fclose(ft);
}
