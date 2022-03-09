#include<stdio.h>
#include<string.h>
int main()
{
    char fa[100];
    char d[20];
    char s[20];
    int found=0;
    char fas[100];
    FILE* fl=fopen("mouaadhlist.txt","r");

   /* fscanf(f,"%s\n",&fa);
    printf("fa:%s\n",fa);*/
    do
    {
        fscanf(fl,"%s\n%s\n%s",&fa,&d,&s);
        printf("fa:%s\nd:%s\ns:%s\n",fa,d,s);
    }while(!feof(fl));
    fclose(fl);
    printf("\n\n\nenter the name offaculty :");
    scanf("%s",&fas);
    do
        {
            fscanf(fl,"%s\n%s\n%s",&fa,&d,&s);
            printf("fa:%s\nd:%s\ns:%s\n",fa,d,s);
            if (strcmpi(fa ,fas)==0)
            {
                printf("\nrani han!\n");
                found=1;
                break;
            }}while(!feof(fl));
                   if (found==1)
            {
              printf("fa:%s\nd:%s\ns:%s\n",fa,d,s);
            }
        else {printf("error");      getch();fclose(fl);return 0;
        }}

    /*fscanf(f,"%s\n",&fa);
    //printf("fa:%s\n",fa);
    do
    {
        fscanf(f,"%s\n%s\n%s",&fa,&d,&s);
        printf("fa:%s\nd:%s\ns:%s\n",fa,d,s);
    }while(!feof(f));
    fclose(f);*/



