#include<stdio.h>
int main()
{
    int ch;

main:
    system("cls");
    printf("\n\t\t=================================================");
    printf("\n\t\t||    WELCOME TO UNIVERSITY MANAGEMENT SYSTEM  ||");
    printf("\n\t\t=================================================\n");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=================================\n\t\t[1] Faculties\n\t\t[2] Departments\n\t\t[3] Sections\n\t\t[4] Head of faculty\n\t\t[5] Head of department\n\t\t[0] Exit\n\t\t=================================\n\t\t");
    printf("Enter the choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:
        printf("\n\n\t\tAre you sure you want to exit?");

        break;
    case 1:
        system("cls");
        int chf=01;//choice of faculty
        printf("\n\n\n\t\t\tFACULTIES MENU\n\t\t=================================\n\t\t[1] Add a new faculty\n\t\t[2] List all faculties\n\t\t[3] Search for faculties\n\t\t[4] Edit a faculty\n\t\t[5] Delete a faculty\n\t\t[0] Exit\n\t\t=================================\n\t\t");
        printf("Enter the choice:");
    scanf(" %d",&chf);
        switch(chf)
        {
        case 0:system("cls");
        printf("\n\n\t\tAre you sure you want to exit?");
            break;
        case 1:system("cls");
            printf("=================================\n[1] Add a new faculty\n=================================\n");

            break;
        case 2:system("cls");
            printf("=================================\n[2] List all faculties\n=================================\n");
            break;
        case 3:system("cls");
            printf("=================================\n[3] Search for faculties\n=================================\n ");
            break;
        case 4:system("cls");
            printf("=================================\n[4] Edit a faculty\n=================================\n");
            break;
        case 5:system("cls");
            printf("=================================\n[5]  Delete a faculty\n=================================\n");
            break;
        default:system("cls");
            printf("Invalid choice");
            break;
        }
        break;
    case 2:
        system("cls");
        printf("\n\n\n\t\t\tDEPERTMENT MENU\n\t\t=================================\n\t\t[1] Add a new department\n\t\t[2] List all departments\n\t\t[3] Search for departments\n\t\t[4] Edit a department\n\t\t[5] Delete a department\n\t\t[0] Exit\n\t\t=================================\n\t\t");
        int chd=01;//choice of department
        printf("Enter the choice:");
    scanf(" %d",&chd);
        switch(chd)
        {
        case 0:system("cls");
        printf("\n\n\t\tAre you sure you want to exit?");
            break;
        case 1:system("cls");
            printf("=================================\n[1] Add a new department\n=================================\n");
            break;
        case 2:system("cls");
            printf("=================================\n[2] List all departments\n=================================\n");
            break;
        case 3:system("cls");
            printf("=================================\n[3] Search for departments\n=================================\n ");
            break;
        case 4:system("cls");
            printf("=================================\n[4] Edit a department\n=================================\n");
            break;
        case 5:system("cls");
            printf("=================================\n[5]  Delete a department\n=================================\n");
            break;
        default:system("cls");
            printf("Invalid choice");
            break;
        }
        break;
    case 3:
        system("cls");
        printf("\n\n\n\t\t\tSECTION MENU\n\t\t=================================\n\t\t[1] Add a new section\n\t\t[2] List all sections\n\t\t[3] Search for sections\n\t\t[4] Edit a sections\n\t\t[5] Delete a sections\n\t\t[0] Exit\n\t\t=================================\n\t\t");
        int chs=01;//choice of section
        printf("Enter the choice:");
    scanf(" %d",&chs);
        switch(chs)
        {
        case 0:system("cls");
        printf("\n\n\t\tAre you sure you want to exit?");
            break;
        case 1:system("cls");
            printf("=================================\n[1] Add a new section\n=================================\n");
            break;
        case 2:system("cls");
            printf("=================================\n[2] List all sections\n=================================\n");
            break;
        case 3:system("cls");
            printf("=================================\n[3] Search for section\n=================================\n ");
            break;
        case 4:system("cls");
            printf("=================================\n[4] Edit a section\n=================================\n");
            break;
        case 5:system("cls");
            printf("=================================\n[5]  Delete a section\n=================================\n");
            break;
        default:system("cls");
            printf("Invalid choice");
            break;
        }
        break;
    case 4:
        system("cls");
int chhf;//choice of head of faculty
        printf("\n\n\n\t\t\tHEAD FACULTY MENU\n\t\t=================================\n\t\t[1] The head of faculty\n\t\t[2] Edit the head of faculty\n\t\t[0] Exit\n\t\t=================================\n\t\t");
         printf("Enter the choice:");
    scanf(" %d",&chhf);
        switch(chhf)
        {
        case 0:system("cls");
        printf("\n\n\t\tAre you sure you want to exit?");
            break;
        case 1:system("cls");
            printf("=================================\n[1] The head of faculty\n=================================\n");
            break;
        case 2:system("cls");
            printf("=================================\n[2] Edit the head of faculty\n=================================\n");
            break;
        default:system("cls");
            printf("Invalid choice");
            break;
        }
        break;
    case 5:
        int chhd;//choice of head of faculty
        system("cls");
        printf("\n\n\n\t\t\tHEAD DEPERTMENT MENU\n\t\t=================================\n\t\t[1] The head of department\n\t\t[2] Edit the head of department\n\t\t[0] Exit\n\t\t=================================\n\t\t");
                 printf("Enter the choice:");
    scanf(" %d",&chhd);
        switch(chhd)
        {
        case 0:system("cls");
        printf("\n\n\t\tAre you sure you want to exit?");
            break;
        case 1:system("cls");
            printf("=================================\n[1] The head of department\n=================================\n");
            break;
        case 2:system("cls");
            printf("=================================\n[2] Edit the head of department\n=================================\n");
            break;
        default:system("cls");
            printf("Invalid choice");
            break;
        }
        break;
    default:

        printf("Invalid choice");

        break;
    }
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
