#include<stdio.h>
#include<string.h>
int main()
{
    int ch;//CHOICE//
    char fa[100];//FACULTY//
    char d[20];//DEPEREMENT//
    char s[20];//SECTION//
    char e[100];//JUST FOR HELP//
main:
    system("cls");
    printf("\n\t\t=================================================");
    printf("\n\t\t||    WELCOME TO UNIVERSITY MANAGEMENT SYSTEM  ||");
    printf("\n\t\t=================================================\n");
    sleep(1);
    printf("\n\t\t\tMAIN MENU\n\t\t=================================\n\t\t[1] Faculties and institute\n\t\t[2] Manage faculties and institute\n\t\t[0] Exit\n\t\t=================================\n\t\t");
    printf("Enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 0://***************************************EXIT********************************//
        system("cls");
        printf("\n\n\t\tAre you sure you want to exit?");
        break;
    case 1: //***************************************LIST********************************//
        system("cls");
        printf("\n\n\n======================================================================\n\t\tLIST\n======================================================================\n");
        FILE* fl=fopen("mouaadhlist.txt","r");//LIST FILE//
        if(fl==NULL)
        {
            printf("doesn't existe any faculties yet");
            break;
        }
        do
        {
            fscanf(fl,"\n%s\n",&fa);
            if(fa==NULL)printf("ERROR");
            printf("fa:%s\n",fa);
        }
        while(!feof(fl));
        fclose(fl);
        printf("======================================================================\n");
        printf("see more details \n enter the name of faculty to see it :\n");//MORE DETAILS//
        printf("..::To exit enter 0 in the name input\n");
        printf("..::enter the name of faculty:");
        scanf(" %[^\n]",&fa);
        if(stricmp(fa,"0")==0 || stricmp(fa," ")==0)
        break;

        FILE* f=fopen(fa,"r");//FACULTY FILE//
        if(f == NULL)
        {
            printf("\t..::doesn't existe::..");
            break;
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
        break;
    case 2: //***************************************MANAGE********************************//
        system("cls");
        printf("\n\t\t=================================================");
        printf("\n\t\t||           MANAGE THE FACULTY                ||");
        printf("\n\t\t=================================================\n");
        sleep(1);
        printf("\n\t\t\tMAIN MENU\n\t\t=================================\n\t\t[1] ADD\n\t\t[2] SEARCH\n\t\t[3] UPDATE\n\t\t[4] DELETE\n\t\t[0] EXIT\n\t\t=================================\n\t\t");
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1://*****************************************ADD********************************//
            system("cls");
            printf("\n======================================================================\n\t\t\t\tADD\n======================================================================\n\n\n");
            for (;;)
            {
                fflush(stdin);
                printf("..::To exit enter blank space in the name input\n\t..::faculty (Use identical):");
                scanf("%[^\n]",&fa);
                if(stricmp(fa,"")==0 || stricmp(fa," ")==0)
                    break;
                FILE  *f =fopen(fa,"w");//MAIN FILE//
                FILE* fl=fopen ("mouaadhlist.txt","a");//FILE LIST//
                fprintf(f,"%s\n",fa);
                fprintf(fl,"%s\n",fa);
                fflush(stdin);
                for(;;)
                {
                    FILE* fl=fopen ("mouaadhlist.txt","a");//FILE LIST//
                    printf("..::To exit enter blank space in the name input\n");
                    printf("..::depertement :");
                    scanf("%[^\n]",&d);
                    if(stricmp(d,"")==0 || stricmp(d," ")==0)
                        break;
                    else
                    {
                        fprintf(f,"%s\n",d);
                        fprintf(fl,"\t%s\n",d);
                        fflush(stdin);
                    }
                    //nnjmou nzidou kima nbghou ida mabghinach 3added
                    printf("..::To exit enter blank space in the name input\n");
                    printf("..::numbers of section :");
                    scanf("%[^\n]",&s);
                    if(stricmp(d,"")==0 || stricmp(d," ")==0)
                        break;
                    else
                        fprintf(f,"%s\n",s);
                    fprintf(fl,"\t%s\n",s);
                    fflush(stdin);
                    printf("\n");
                }
                fclose(f);
                fclose(fl);
            }
            break;
            //***************************************SEARCH********************************//
        case 2:
            printf("..::To exit enter blank space in the name input\n");
            printf("..::enter the name of faculty:");
            scanf(" %[^\n]%*c",&fa);
            if(stricmp(fa,"")==0 || stricmp(fa," ")==0)
                        break;
            FILE* f=fopen(fa,"r");//MAIN FILE//
            if(f == NULL)
            {
                printf("\t..::doesn't existe::..");
                break;
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
            break;
        case 3://***************************************UPDATE********************************//
            FILE* ft=fopen ("mouaadhtemp.txt","w+");//FILE FACULTY TEMPORARY//
            FILE* fl=fopen ("mouaadhlist.txt","r");//LIST FILE//
            FILE* flt=fopen ("mouaadhlisttemp.txt","w");//LIST FILE TEMPORARY//
            char nfa[100];//NEW FACULTY //
            char nd[20];//NEW DEPERTEMENT//
            char ns[20];//NEW SECTION//
            char e[100];//JUST FOR HELP//
            printf("..::enter the name of faculty:");
            scanf(" %[^\n]",&e);
            f=fopen (e,"r");
            if(f==NULL)
            {
                printf("..::this faculty doesn't existe::.. ");
                break;
            }
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
                //printf("fa:%s\n%s\n%s\n",fa,e,nfa);
                if (strcmp(e,fa)==0)
                    fprintf(flt,"\n%s\n",nfa);
                else
                    fprintf(flt,"\n%s\n",fa);
            }
            while(!feof(fl));
            fclose(flt);
            fclose(fl);
            remove("mouaadhlist.txt");
            rename("mouaadhlisttemp.txt","mouaadhlist.txt");
            fclose(f);
            fclose(ft);
            remove(e);
            rename("mouaadhtemp.txt",nfa);
            break;
        case 4://***************************************DELETE*******************************//
            system("cls");
            fflush(stdin);
            printf("\n\n\t..::DELETE A FACULTY\n\t==========================\n\t..::Enter the name of faculty to delete:");
            scanf("%[^\n]",&e);

            ft=fopen ("mouaadhtemp.txt","w+");//FIE FACULTY TEMPORARY//
            fl=fopen ("mouaadhlist.txt","r");//LIST FILE//
            flt=fopen("mouaadhlisttemp.txt","w");//FILE LIST TEMPORARY//
            f=fopen(e,"r");
            if(fl==NULL && f==NULL)
            {
                printf("this faculty doesn't existe ");
                break;
            }
            do
            {
                fscanf(fl,"\n%s\n",&fa);
                if (stricmp(e,fa)!=0)
                    fprintf(flt,"\n%s\n",fa);
            }
            while(!feof(fl));
            fclose(flt);
            fclose(fl);
            fclose(f);
            remove("mouaadhlist.txt");
            rename("mouaadhlisttemp.txt","mouaadhlist.txt");
            remove(e);
            break;
        case 0:
            system("cls");
            printf("\n\n\t\tAre you sure you want to exit?");
            break;
        default :
            printf("Invalid choice");
            break;}

        break;
    default:
        printf("Invalid choice");
        break;}

    printf("\n\n Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        goto main;
    case 0:
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}
