#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

char n;
char press;

void login(void);
void reg(void);

static int i=0;
struct timer
{
    int year;
    int mon;
    int mday;
    int hour;
    int min;
    int sec;
    int signin;
};

struct regilogin
{
    char name[30], pass[20];
    int user ;
    int  log ;
};

struct info
{
    char placename[100];
    char location[100];
    char hotel[100];
    char hospital[100];
    char pstation[100];
    char minimoney[30];
};

int main()
{
    system("color 0B");
    printf("\n\n");
    printf("\t\t    B B B          A         N      N       G G G     L                  A         D D D       E E E E E     S S S S S    H       H    \n");
    printf("\t\t    B     B       A A        N N    N     G           L                 A A        D     D     E            S             H       H    \n");
    printf("\t\t    B     B      A   A       N  N   N   G             L                A   A       D       D   E            S             H       H    \n");
    printf("\t\t    B B B       A     A      N   N  N   G    G G G    L               A     A      D       D   E E E E        S S S S     H H H H H    \n");
    printf("\t\t    B     B    A A A A A     N    N N   G    G   G    L              A A A A A     D       D   E                      S   H       H    \n");
    printf("\t\t    B     B   A         A    N     NN     G      G    L             A         A    D     D     E                      S   H       H    \n");
    printf("\t\t    B B B    A           A   N      N       G G G     L L L L L L  A           A   D D D       E E E E E    S S S S S     H       H    \n");



    printf("\n\n");
    printf("\t\t\t\t\t\t\t  T T T T T T T T     O O O     U         U    R R R R R  \n");
    printf("\t\t\t\t\t\t\t        T           O      O    U         U    R        R \n");
    printf("\t\t\t\t\t\t\t        T          O        O   U         U    R        R \n");
    printf("\t\t\t\t\t\t\t        T          O        O   U         U    R R R R R \n");
    printf("\t\t\t\t\t\t\t        T          O        O   U         U    R  R      \n");
    printf("\t\t\t\t\t\t\t        T           O      O     U       U     R    R    \n");
    printf("\t\t\t\t\t\t\t        T            O O O         U U U       R      R   \n");

    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t WELCOME TO BANGLADESH, THE LAND OF BEAUTY\n");
    printf("\t\t\t\t\t\t***********************************************************************");

    printf("\n\n\n\n\t\t\t\t\t\t TRAVEL IS AN INVESTMENT IN YOURSELF\n\n\n");
    printf("\t\t\t\t\t\tPress Enter to proceed...!!");

    if(getch()==13)
        system("CLS");
    LoadingProcess();
    system("CLS");
    mainsystem();

}

int mainsystem()
{

    system("color 3f");


    gotoxy(65, 1);
    printf(" ________________________________");//\t\t\t\t\t\t
    gotoxy(65, 2);
    printf("||   TOURIST ASSISTANCE SYSTEM   ||\n");//\n\t\t\t\t\t\t
    gotoxy(65, 3);
    printf(" ________________________________\n");//\t\t\t\t\t\t
    gotoxy(65, 4);
    printf(">>>>>>>>>><<<<<<<<<");//\t\t\t\t\t\t
    gotoxy(60, 7);
    printf("1. Admin");
    gotoxy(60, 8);
    printf("2. User");
    gotoxy(60, 9);
    printf("E. Exit");
    gotoxy(60, 10);
    printf("Press : ");
    press = getche();

    switch(press)
    {
    case '1':
        system("CLS");
        adminlogin();
        break;

    case '2':
        system("CLS");
        userlogin();
        break;

    case 'e':
        system("CLS");
        exit(1);
        break;

    case 'E':
        system("CLS");
        exit(1);
        break;
    }

    return 0;
}


void adminlogin()
{
    char password[100];
    int i = 0;
    char ch, pass[] = {"1234"};
    char newadmin[10], admin1[] = {"admin12"};

again:

    gotoxy(65, 1);
    printf("_________________________");
    gotoxy(65, 2);
    printf("||  ADMIN LOG IN ZONE  ||\n");
    gotoxy(65, 3);
    printf("_________________________\n");
    gotoxy(65, 4);
    printf(">>>>>>>>>>>>><<<<<<<<<<<<");
    gotoxy(60, 7);

    printf("User ID : ");
    fflush(stdin);
    scanf("%s", newadmin);

    gotoxy(60, 8);
    printf("password : ");

    while(1)
    {
        ch = getch();
        if(ch == ENTER)
        {
            password[i] = '\0';
            break;
        }
        else if(ch == BKSP)
        {
            if(i > 0)
            {
                i--;
                printf("\b \b");
            }
        }

        else if(ch == TAB || ch == SPACE)
        {
            continue;
        }

        else
        {
            password[i] = ch;
            i++;
            printf("*");
        }
    }

    if(strcmp(admin1, newadmin) == 0 && strcmp(pass, password) == 0)
    {
        gotoxy(60, 10);
        printf("Successfully Log in");
        gotoxy(60, 11);
        system("pause");
        system("CLS");
        admin();
    }
    else
    {
        gotoxy(60, 10);
        printf("Wrong try again !");
        gotoxy(60, 11);
        system("pause");
        system("CLS");
        goto again;
    }
}

void admin()
{
again:
    gotoxy(65, 1);
    printf("________________\n");
    gotoxy(65, 2);
    printf("|  ADMIN ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~");

    printf("\n\n\n\t1. Search\n\t2. See last update\n\t3. Add Places\n\t4. Update\n\t5. Delete\n\t6. Check User Zone\n\t7. Check Popularity\n\t8. Main System\n\t0. Exit\n\n\tPress : ");

    press = getche();
    switch(press)
    {
    case '1':
        system("CLS");
        adminsearch();
        break;

    case '2':
        system("CLS");
        lastUpdate();
        break;

    case '3':
        system("CLS");
        places();
        break;

    case '4':
        system("CLS");
        update();
        break;

    case '5':
        system("CLS");
        deletedata();
        break;

    case '6':
        system("CLS");
        userzone();
        break;

    case '7':
        system("CLS");
        popularity();
        break;

    case '8':
        system("CLS");
        mainsystem();
        break;

    case '0':
        exit(1);
        return 0;

    default :
        system("CLS");
        printf("Wrong entry !!\nTry again ..\n\n");
        goto again;
    }

}

void deletedata()
{
    gotoxy(65, 1);
    printf("_________________\n");
    gotoxy(65, 2);
    printf("|  DELETE ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~");

    struct info p, l;
    FILE *fp, *fp1;

    char pname[50];
    int id, found = 0, count = 0;

    fp = fopen("pplace.txt", "r");
    fp1 = fopen("pnewplace.txt", "w");

    gotoxy(15, 5);
    printf("Enter place name for Delete : ");
    scanf("%s", pname);

    while(1)
    {
        fread(&p, sizeof(p), 1, fp);
        if(feof(fp))
        {
            break;
        }
        if(strcmp(pname, p.placename) == 0)
        {
            found = 1;
        }
        else
        {
            fwrite(&p, sizeof(p), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);

    if(found == 0)
    {
        printf("\t\tNo record found\n");
    }
    else
    {
        printf("\t\tDelete successfully\n\n");

        fp = fopen("pplace.txt", "w");
        fp1 = fopen("pnewplace.txt", "r");

        while(1)
        {
            fread(&p, sizeof(p), 1, fp1);
            if(feof(fp1))
            {
                break;
            }
            fwrite(&p, sizeof(p), 1, fp);
        }
    }

    fclose(fp);
    fclose(fp1);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        admin();
    }
}

void adminsearch()
{
    FILE *fp, *sb;
    struct info p, l;
    fp = fopen("pplace.txt", "r");
    char pname[100], pmaney[30];
    int match = 0;

find:
    gotoxy(65, 1);
    printf("_________________\n");
    gotoxy(65, 2);
    printf("|  SEARCH ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~");

    gotoxy(15, 5);
    printf("Search BY Name : ");
    scanf("%s", pname);

    while(fread(&p, sizeof(p), 1, fp))
    {
        if(strcmp(pname, p.placename) == 0)
        {
            printf("\nPlace name : %s\n\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename,p.location,p.hotel,p.hospital,p.pstation);

            match++;
        }
    }

    if(match == 0)
    {
        printf("\nNot match! Try again\n");
        printf("Press y/n");
        press = getche();

        switch(press)
        {
        case 'y':
            system("CLS");
            goto find;
            break;
        case 'n':
            break;
        }
    }

    printf("1. Add places\n2. Update more\n0. Exit\n\n<--b\n\nPress : ");
    press = getche();

    switch(press)
    {
    case '1':
        system("CLS");
        places();
        break;

    case '2':
        system("CLS");
        update();
        break;

    case 'b':
        system("CLS");
        admin();
        break;

    case '0':
        break;
    }

    fclose(fp);
}


void lastUpdate()
{
    struct info p, l;
    FILE *fp;

    fp = fopen("pplace.txt", "r");

    gotoxy(65, 1);
    printf("_________________\n");
    gotoxy(65, 2);
    printf("|  UPDATE ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~");

    printf("\n\nLast update : \n\n");

    while(fread(&p, sizeof(p), 1, fp))
    {
        printf("\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    printf("1. Add places\n2. Update more\n0. Exit\n\n<--b\n\nPress : ");
    press = getche();

    switch(press)
    {
    case '1':
        system("CLS");
        places();
        break;

    case '2':
        system("CLS");
        update();
        break;

    case 'b':
        system("CLS");
        admin();
        break;

    case '0':
        break;
    }

    fclose(fp);
}


void places()
{
    FILE *fp, *be, *ar, *fo, *is, *hi, *re, *ot;
    struct info p, l;

    fp = fopen("pplace.txt", "a");
    be = fopen("Beaches.txt", "a");
    ar = fopen("Archaelogical.txt", "a");
    fo = fopen("Forest.txt", "a");
    is = fopen("HillsandIsland.txt", "a");
    hi = fopen("Historical.txt", "a");
    re = fopen("Religious.txt", "a");
    ot = fopen("Others.txt", "a");

again:
    gotoxy(65, 1);
    printf("________________\n");
    gotoxy(65, 2);
    printf("|  PLACE ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~");

    fflush(stdin);
    printf("\n\nEnter place name : ");
    gets(p.placename);

    printf("\nEnter location :\n");
    gets(p.location);

    printf("\nEnter Available Hotels :\n");
    gets(p.hotel);

    printf("\nEnter Available Hospitals :\n");
    gets(p.hospital);

    printf("\nEnter Available Police.s  :\n");
    gets(p.pstation);

    printf("\n\n\t\tAdd to :\n\t\t1. Beaches\n\t\t2. Archaelogical Sites\n\t\t3. Forest and Jungle\n");
    printf("\t\t4. Hills and Island\n\t\t5. Historical Place\n\t\t6. Religious\n\t\t7. Others\n");
    printf("\n\t\tPress : ");


    press = getche();
    switch(press)
    {
    case '1':
        fwrite(&p, sizeof(p), 1, be);
        fclose(be);

        fwrite(&p, sizeof(p), 1, fp);
        fclose(fp);
        break;

    case '2':
        fwrite(&p, sizeof(p), 1, ar);
        fclose(ar);

        fwrite(&p, sizeof(p), 1, fp);
        fclose(fp);
        break;

    case '3':
        fwrite(&p, sizeof(p), 1, fo);
        fclose(fo);
        break;

    case '4':
        fwrite(&p, sizeof(p), 1, is);
        fclose(is);
        break;

    case '5':
        fwrite(&p, sizeof(p), 1, hi);
        fclose(hi);
        break;

    case '6':
        fwrite(&p, sizeof(p), 1, re);
        fclose(re);
        break;

    case '7':
        fwrite(&p, sizeof(p), 1, ot);
        fclose(ot);
        break;
    }

    printf("\n\nAdd more ....\nPress : y/n\n");
    press = getche();

    switch(press)
    {
    case 'y':
        system("CLS");
        goto again;
        break;

    case 'n':
        break;
    }

    printf("\n<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        admin();
    }

}

void userzone()
{
    gotoxy(65, 1);
    printf("____________________________");
    gotoxy(65, 2);
    printf("|  WELLCOME TO USER ZONE   |");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    printf("\n\n\t\t1. Bookmark\n\t\t2. Beaches\n\t\t3. Archaelogical Sites\n\t\t4. Forest and Jungle\n");
    printf("\t\t5. Hills and Island\n\t\t6. Historical Place\n\t\t7. Religious\n\t\t8. Others\n\t\t9. Main System\n\t\tE. Exit\n");
    printf("\n\t\tPress : ");


    press = getche();
    switch(press)
    {
    case '1':
        system("CLS");
        savebookmark();
        break;

    case '2':
        system("CLS");
        Beaches();
        break;

    case '3':
        system("CLS");
        Archaelogical();
        break;

    case '4':
        system("CLS");
        forestandjungle();
        break;

    case '5':
        system("CLS");
        hillsandisland();
        break;

    case '6':
        system("CLS");
        historicalplace();
        break;

    case '7':
        system("CLS");
        religious();
        break;

    case '8':
        system("CLS");
        others();
        break;

    case '9':
        system("CLS");
        mainsystem();
        break;

    case 'e':
        system("CLS");
        exit(1);
        break;

    case 'E':
        system("CLS");
        exit(1);
        break;

    case 'b':
        system("CLS");
        admin();
        break;
    }
}

savebookmark()
{
    FILE *sb;
    struct info p, l;

    sb = fopen("ssaveinfo.txt", "a+");

    gotoxy(65, 1);
    printf("___________________\n");
    gotoxy(65, 2);
    printf("|  BOOKMARK ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~");

    printf("\n\nYour Bookmark :\n\n");

    while(fread(&p, sizeof(p), 1, sb))
    {
        printf("Place name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    fclose(sb);
    Bookmark();
}

Bookmark()
{
    FILE *fp, *sb;
    struct info p, l;
    fp = fopen("pplace.txt", "r");
    sb = fopen("ssaveinfo.txt", "a+");
    char pname[100];
    int match = 0;

find:
    printf("Search Another : ");
    scanf("%s", pname);

    while(fread(&p, sizeof(p), 1, sb))
    {
        if(strcmp(pname, p.placename) == 0)
        {
            printf("\nAlready bookmark this place!\n");
            goto find;
        }
    }
    while(fread(&p, sizeof(p), 1, fp))
    {
        if(strcmp(pname, p.placename) == 0)
        {
            printf("Place name : %s\n\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename,p.location,p.hotel,p.hospital,p.pstation);

            match++;
        }
    }

    if(match == 0)
    {
        printf("\nNot match! Try again\n");
        printf("Press y/n");
        press = getche();

        switch(press)
        {
        case 'y':
            system("CLS");
            goto find;
            break;
        case 'n':
            break;
        }
    }

    printf("Bookmark This Place : y/n\n<--b\n\nPress : ");

    if(getch() == 121)
    {
        fwrite(&p, sizeof(p), 1, sb);
        printf("\n<--b");
        if(getch() == 121)
        {
            userzone();
        }
    }
    else if(getch() == 98)
    {
        userzone();
    }
    else
    {
        printf("Search Another : 1/0\n<--b\n\nPress : ");
        if(getch() == 49)
        {
            system("CLS");
            goto find;
        }
        else
        {
            system("CLS");
            userzone();
        }

    }

    fclose(fp);
    fclose(sb);
}

void Beaches()
{
    gotoxy(65, 1);
    printf("__________________\n");
    gotoxy(65, 2);
    printf("|  BEACHES ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~");

    FILE *fp, *be, *ar, *fo, *is, *hi, *re, *ot;
    struct info p, l;

    be = fopen("Beaches.txt", "r");

    while(fread(&p, sizeof(p), 1, be))
    {
        printf("\n\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    fclose(be);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        userzone();
    }
}

void Archaelogical()
{
    gotoxy(65, 1);
    printf("________________________\n");
    gotoxy(65, 2);
    printf("|  ARCHAELOGICAL ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~");

    FILE *fp, *be, *ar, *fo, *is, *hi, *re, *ot;
    struct info p, l;

    ar = fopen("Archaelogical.txt", "r");

    while(fread(&p, sizeof(p), 1, ar))
    {
        printf("\n\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    fclose(ar);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        userzone();
    }
}

void forestandjungle()
{
    gotoxy(65, 1);
    printf("__________________________\n");
    gotoxy(65, 2);
    printf("| FOREST AND JUNGLE ZONE |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    FILE *fp, *be, *ar, *fo, *is, *hi, *re, *ot;
    struct info p, l;

    fo = fopen("Forest.txt", "r");

    while(fread(&p, sizeof(p), 1, fo))
    {
        printf("\n\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    fclose(fo);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        userzone();
    }
}

void hillsandisland()
{
    gotoxy(65, 1);
    printf("__________________________\n");
    gotoxy(65, 2);
    printf("| HILLS AND ISLAND ZONE |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    FILE *fp, *be, *ar, *fo, *is, *hi, *re, *ot;
    struct info p, l;

    is = fopen("HillsandIsland.txt", "r");

    while(fread(&p, sizeof(p), 1, is))
    {
        printf("\n\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    fclose(is);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        userzone();
    }
}

void historicalplace()
{
    gotoxy(65, 1);
    printf("_________________________\n");
    gotoxy(65, 2);
    printf("| HISTORICAL PLACE ZONE |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~");

    FILE *fp, *be, *ar, *fo, *is, *hi, *re, *ot;
    struct info p, l;

    hi = fopen("Historical.txt", "r");

    while(fread(&p, sizeof(p), 1, hi))
    {
        printf("\n\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    fclose(hi);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        userzone();
    }
}

void religious()
{
    gotoxy(65, 1);
    printf("__________________\n");
    gotoxy(65, 2);
    printf("| Religious ZONE |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~");

    FILE *fp, *be, *ar, *fo, *is, *hi, *re, *ot;
    struct info p, l;

    re = fopen("Religious.txt", "r");

    while(fread(&p, sizeof(p), 1, re))
    {
        printf("\n\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    fclose(re);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        userzone();
    }
}

void others()
{
    gotoxy(65, 1);
    printf("_______________\n");
    gotoxy(65, 2);
    printf("| OTHERS ZONE |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~");

    FILE *fp, *be, *ar, *fo, *is, *hi, *re, *ot;
    struct info p, l;

    ot = fopen("Others.txt", "r");

    while(fread(&p, sizeof(p), 1, ot))
    {
        printf("\n\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
        printf("\n\n");
    }

    fclose(ot);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        userzone();
    }
}


void update()
{

    gotoxy(65, 1);
    printf("_________________\n");
    gotoxy(65, 2);
    printf("|  UPDATE ZONE  |\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~");

    char another, ch;
    struct info p, l;
    char nm[30];

    FILE *fp;
    fp = fopen("pplace.txt", "r+");

    another = 'y';
    rewind(fp);
    while(another == 'y')
    {
        printf("\n\nEnter the place name to modify : ");
        scanf("%s", nm);


        while(fread(&p, sizeof(p), 1, fp) == 1)
        {
            if(strcmp(p.placename, nm) == 0)
            {
                printf("\n\nPlace name : %s\nLocation : %s\n\nAvailable Hotels :\n%s\n\nAvailable Hospitals :\n%s\n\nAvailable Police.S :\n%s\n\n", p.placename, p.location, p.hotel, p.hospital, p.pstation);
                printf("\n\n");
choose:
                printf("\nWhat you want to update : \n");
                printf("1. Place Name\n2. Location\n3. Hotels\n4. Hospitals\n5. Police.S\n6. All\n\nPress : ");

                ch = getche();

                fflush(stdin);
                switch(ch)
                {
                case '1':
                    system("CLS");
                    printf("Enter new place name : ");
                    gets(p.placename);
                    break;
                case '2':
                    system("CLS");
                    printf("\nEnter location :\n");
                    gets(p.location);
                    break;
                case '3':
                    system("CLS");
                    printf("\nEnter Available Hotels :\n");
                    gets(p.hotel);
                    break;
                case '4':
                    system("CLS");
                    printf("\nEnter Available Hospitals :\n");
                    gets(p.hospital);
                    break;
                case '5':
                    system("CLS");
                    printf("\nEnter Available Police.s  :\n");
                    gets(p.pstation);
                    break;
                case '6':
                    system("CLS");
                    fflush(stdin);
                    printf("\n\nEnter place name : ");
                    gets(p.placename);

                    printf("\nEnter location :\n");
                    gets(p.location);

                    printf("\nEnter Available Hotels :\n");
                    gets(p.hotel);

                    printf("\nEnter Available Hospitals :\n");
                    gets(p.hospital);

                    printf("\nEnter Available Police.s  :\n");
                    gets(p.pstation);
                    break;
                default:
                    printf("Worng entry!!\n");
                    printf("Try again....");
                    system("pause");
                    system("CLS");
                    goto choose;
                    break;
                }

                fseek(fp, -sizeof(p), SEEK_CUR);
                fwrite(&p, sizeof(p), 1, fp);
                break;
            }
        }
        printf("\nModify another record(y/n");
        fflush(stdin);
        another = getch();
    }

    fclose(fp);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        admin();
    }
}

void popularity()
{
    gotoxy(65, 1);
    printf("_______________________\n");
    gotoxy(65, 2);
    printf("||  POPULARITY ZONE  ||\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~~~~~");

    int u = 0, l = 0, i = 1;
    struct timer pm;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    struct regilogin p, c;
    FILE *fp, *fc;
    FILE *ft;

    fp = fopen("regiloginrecord.txt", "r");
    ft = fopen("time.txt", "r");
    fc = fopen("popularity.txt", "r");

    printf("\n\n\tUsername list : \n");
    while(fread(&p, sizeof(p), 1, fp))
    {
        printf("\t%d: %s\n",i++, p.name);
    }

    printf("\n\tUser loging Date and Time :\n");
    while(fread(&pm, sizeof(pm), 1, ft))
    {
        printf("\t%d-%d-%d %d:%d:%d\n\tUser login : %d\n\n", pm.year, pm.mon, pm.mday, pm.hour, pm.min, pm.sec, pm.signin);
        l = l + pm.signin;
    }

    printf("\n\n\tTotal User : %d\n\tTotal Login : %d\n\n", i-1, l);

    fclose(fp);
    fclose(ft);
    fclose(fc);

    printf("<--b\n\n");
    if(getch() == 98)
    {
        system("CLS");
        admin();
    }
}


int userlogin()
{
    system("CLS");


XY:
    gotoxy(65, 1);
    printf("_____________________\n");
    gotoxy(65, 2);
    printf("||  WELLCOME USER  ||\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~~~");

    gotoxy(60, 10);
    printf("1. LOGIN\t\t2. REGISTER");
    gotoxy(65, 12);
    printf("ENTER YOUR CHOICE: ");

    n = getche();
    switch(n)
    {
    case '1':
        system("CLS");
        login();
        break;
    case '2':
        system("CLS");
        reg();
        break;
    default:
        printf("\n\n\t\t\t\tNO MATCH FOUND");
        printf("\n\n\t\t\tPress Enter to re-Enter the choice");
        if(getch()==13)
            system("CLS");
        goto XY;
    }
    return 0;
}

void reg()
{
    int count = 0, z = 0;
    char fname[30], lname[30], s, k;
    struct regilogin p, c;
    FILE *fp, *fc;

    fp = fopen("regiloginrecord.txt", "a");
    fc = fopen("popularity.txt", "a");



again:

    gotoxy(65, 1);
    printf("______________________________\n");
    gotoxy(65, 2);
    printf("|  WELCOME TO REGISTER ZONE  |\n");
    gotoxy(65, 3);
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");

    fflush(stdin);
    printf("\n\n\t\t\t\t  Enter Fast name : ");
    scanf("%s", fname);

    printf("\n\n\t\t\t\t  Enter last name : ");
    scanf("%s", lname);

    printf("\n\n\t\t\t\t  Enter Username : ");
    scanf("%s", p.name);

    printf("\n\n\t\t\t\t  Enter Password : ");
    while((k=getch())!=13)
    {
        p.pass[z++]=k;
        printf("%c",'*');
    }
    p.pass[z]='\0';

    count = count + 1;

    c.user = count;
    fwrite(&c, sizeof(c), 1, fc);
    fwrite(&p, sizeof(p), 1, fp);

    fclose(fc);
    fclose(fp);

    gotoxy(30, 20);
    printf("Press enter if you agree with Username and Password");
    if((s=getch())==13)
    {
        system("CLS");
        LoadingProcess();
        system("CLS");

        gotoxy(65, 10);
        printf("You are successfully registered");
        gotoxy(65, 11);
        printf("Try login your account??");
        gotoxy(65, 12);
        printf("> PRESS 1 FOR YES\n\n\t\t  > PRESS 2 FOR NO\n\n\t\t\t\t");

        n = getche();
        switch(n)
        {
        case '1':

            system("CLS");
            LoadingProcess();
            system("CLS");

            login();
            break;
        case '2':
            system("CLS");
            LoadingProcess();
            system("CLS");

            gotoxy(65, 14);
            printf("THANK YOU FOR REGISTERING");
            break;
        }
    }

    getch();
}

void login()
{
    struct timer pm;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int in = 0;
    struct regilogin p, c;
    FILE *fp, *fc, *ft;


    fp = fopen("regiloginrecord.txt", "r");
    fc = fopen("popularity.txt", "a");
    ft = fopen("time.txt", "a");

    char name[100], pass[20], press, k;
    int match = 0, usersignin = 0, z = 0;
    int checku,checkp;

find:

    gotoxy(65, 1);
    printf("______________________________\n");
    gotoxy(65, 2);
    printf("||  WELCOME TO LOG IN ZONE  ||\n");
    gotoxy(65, 3);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    printf("\n\n\t\t\t\t  Username: ");
    scanf("%s", name);

    printf("\n\n\t\t\t\t  Password : ");
    while((k=getch())!=13)
    {
        pass[z++]=k;
        printf("%c",'*');
    }

    pass[z]='\0';

    while(fread(&p, sizeof(p), 1, fp))
    {
        checku=strcmp(name, p.name);
        checkp=strcmp(pass,p.pass);
        if(checku == 0 && checkp == 0)
        {
            //printf("\n\nUsername : %s\nPass : %s", p.name, p.pass);
            match++;
            usersignin = usersignin + 1;
            pm.year = tm.tm_year + 1900;
            pm.mon = tm.tm_mon + 1;
            pm.mday = tm.tm_mday;
            pm.hour = tm.tm_hour;
            pm.min = tm.tm_min;
            pm.sec = tm.tm_sec;
            pm.signin = usersignin;
            in = in + 1;
            c.log = in;

            fwrite(&c, sizeof(c), 1, fc);
            fwrite(&pm, sizeof(pm), 1, ft);
            fwrite(&p, sizeof(p), 1, fp);

            fclose(fp);
            fclose(ft);
            fclose(fc);

            system("CLS");
            LoadingProcess();
            system("CLS");

            gotoxy(65, 10);
            printf("YOU HAVE LOGGED IN SUCCESSFULLY!!");
            gotoxy(65, 12);
            printf("WELCOME, HAVE A NICE DAY\n\n");
            gotoxy(65, 13);
            system("pause");
            system("CLS");
            userzone();
        }
    }

    if(match == 0)
    {
        system("CLS");
        LoadingProcess();
        system("CLS");

        printf("\n\n\n\t\t\tWRONG USERNAME OR PASSWORD!!");
        printf("\n\n\t\t\t\t  (Press 'Y' to re-login)");
        if(getch()=='y'||getch()=='Y')
            system("CLS");

        LoadingProcess();
        system("CLS");

        login();
    }
    getch();
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

LoadingProcess()
{
    int x = 5, y = 9;

    COORD coord;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    gotoxy(65, 10);
    printf("Please wait....");
    x = 5, y = 10;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    gotoxy(65, 11);
    for(int r = 1; r <= 20; r++)
    {
        for(int q = 0; q <= 10000000; q++);
        printf("%c", 177);
    }
}
