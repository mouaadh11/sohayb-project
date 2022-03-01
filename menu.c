#include<stdio.h>
#include <windows.h>
COORD coord = {0,0}; ///set the cordinate to 0, 0 (top-left corner of window);
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    int ch;
    int chf=01;//choice of faculty
main:
    system("cls");
    gotoxy(0,0);
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
        //int chf=01;//choice of faculty
        printf("\n\n\n\t\t\tFACULTIES MENU\n\t\t=================================\n\t\t[1] Add a new faculty\n\t\t[2] List all faculties\n\t\t[3] Search for faculties\n\t\t[4] Edit a faculty\n\t\t[5] Delete a faculty\n\t\t[0] Exit\n\t\t=================================\n\t\t");
        printf("Enter the choice:");
    scanf(" %d",&chf);
        switch(chf)
        {
        case 0:system("cls");
        printf("\n\n\t\tAre you sure you want to exit?");
            break;
        case 1:system("cls");
            printf("[1] Add a new faculty\n\t\t");
            break;
        case 2:system("cls");
            printf("[2] List all faculties\n\t\t");
            break;
        case 3:system("cls");
            printf("[3] Search for faculties\n\t\t ");
            break;
        case 4:system("cls");
            printf("[4] Edit a faculty\n\t\t");
            break;
        case 5:system("cls");
            printf("[5]  Delete a faculty\n\t\t");
            break;
        default:system("cls");
            printf("Invalid choice");
            break;
        }
    case 2:
        system("cls");
        printf("\n\n\n\t\t\tDEPERTMENT MENU\n\t\t=================================\n\t\t[1] Add a new department\n\t\t[2] List all departments\n\t\t[3] Search for departments\n\t\t[4] Edit a department\n\t\t[5] Delete a department\n\t\t[0] Exit\n\t\t=================================\n\t\t");
        break;
    case 3:
        system("cls");
        printf("\n\n\n\t\t\tSECTION MENU\n\t\t=================================\n\t\t[1] Add a new section\n\t\t[2] List all sections\n\t\t[3] Search for sections\n\t\t[4] Edit a sections\n\t\t[5] Delete a sections\n\t\t[0] Exit\n\t\t=================================\n\t\t");
        break;
    case 4:
        system("cls");
        printf("\n\n\n\t\t\tHEAD FACULTY MENU\n\t\t=================================\n\t\t[1] The head of faculty\n\t\t[2] Edit the head of faculty\n\t\t[0] Exit\n\t\t=================================\n\t\t");
        break;
    case 5:
        system("cls");
        printf("\n\n\n\t\t\tHEAD DEPERTMENT MENU\n\t\t=================================\n\t\t[1] The head of department\n\t\t[2] Edit the head of department\n\t\t[0] Exit\n\t\t=================================\n\t\t");
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
