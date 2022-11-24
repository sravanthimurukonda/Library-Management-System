#include <stdio.h>
#include <string.h>

char*adminname[1]={"user"},*adminpassword[1]={"user@123"};
char*bname[10]={"WingsofFire","RichDadPoorDad","MakingofnewIndia","WhispersofTime","PoliticsofOpportunism","TheTestaments","CelestialBodies","Chequebook","TheOverStory","MindMaster"};
char*bauthor[10]={"APJ Abdul kalam","Robert T.Kiyosaki","Dr.Bibek Debroy","Dr.Krishna Saksena","RPN Singh","Margaret Atwood","Jokha Alharthi","Vasdev mohi","Richard Powers","Vishwanathan Anand"};
int bp[20]={980,1090,650,670,900,750,650,1000,1500,1050};
int bc[20]={200,250,300,350,400,450,500,550,600,650};
int br[20]={50,50,50,50,50,50,50,50,50,50};
int num,num1,a,b,c,d,i,x,e,n,bp1,bc1,m,br1;
char*name[15],*pass[15],bname1[20],bname2[20],bauthor1[20];
int main()

{

    printf("\n\n\n\n\n\n\n\n\t\t\t==================================================================");
    printf("\n\t\t\t**********          LIBRARY MANAGEMENT SYSTEM           **********");
    printf("\n\t\t\t**********                     C                        **********");
    printf("\n\t\t\t**********               MINI PROJECT                   **********");
    printf("\n\t\t\t==================================================================");
    printf("\n\n\n\t\t\t==================================================================");
    printf("\n\t\t\t**********                  WELCOME                     **********");
    printf("\n\t\t\t**********                    TO                        **********");
    printf("\n\t\t\t**********         LIBRARY MANAGEMENT SYSTEM            **********");
    printf("\n\t\t\t==================================================================");

printf("\n\n\n\n\t\t\t\t\t press any key to continue ");
getch();

system("cls");
menu1 :
printf("\n\t=========================");
printf("\n\t  1) Main Menu ");
printf("\n\t  2) Exit  ");
printf("\n\t=========================\n\n\t\t");
scanf("%d",&num);

menu :
switch(num)
{
    case 1: printf("\n\n\t\t\t =============================== Main Menu ====================================");
            printf("\n\n\t\t\t\t\t   1) Admin login page:");
            printf("\n\t\t\t\t\t   2) Student login page:");
            printf("\n\t\t\t\t\t   3) Exit: \n\n\t\t\t\t\t ");
            scanf("%d",&num1);

            printf("\n\t Press any key to continue... ");
            getch();
            system("cls");
            switch(num1)

            {
            case 1:admi:
                printf("\n\t User name : ");
                scanf("%s",&name);
                printf("\n\t Password : ");
                scanf("%s",&pass);
                for(i=0;i<1;i++)

                {
                    c=strcmp(adminname[i],name);
                    d=strcmp(adminpassword[i],pass);

                    admin1 :
                    if(c==0 && d==0)
                    {
                        printf("\n\t ==== Admin login Page ====");
                        printf("\n\n\t 1) Add book :");
                        printf("\n\t 2) Search book :");
                        printf("\n\t 3) View all book :");
                        printf("\n\t 4) Exit:\n\n\t ");
                        scanf("%d",&a);
                        switch(a)
                        {
                        case 1: printf("\n\t Book name :");
                                scanf("%s",&bname1);
                                printf("\n\t Book author :");
                                scanf("%s", &bauthor1);
                                printf("\n\t Number of pages :");
                                scanf("%d",&bp1);
                                printf("\n\t Cost of book :");
                                scanf("%d",&bc1);
                                printf("\n\t Rent of book per day :");
                                scanf("%d",&br1);
                                printf("\n\n\n\n\n\n\t\t\t\t\t press any key to continue....");
                                getch();
                                system("cls");
                                goto admin1;
                                break;

                        case 2: admin11 :
                                printf("\n\t Book name : ");
                                scanf("%s",&bname2);
                                for(i=0;i<10;i++)
                                {
                                    x=strcmp(bname[i],bname2);
                                    if(x==0)
                                    {
                                        printf("\n\t Book author :%s",bauthor[i]);
                                        printf("\n\t Number of pages : %d",bp[i]);
                                        printf("\n\t Cost of book :%d",bc[i]);
                                        printf("\n\t Rent of book per day :%d",br[i]);
                                        n=1;
                                        break;
                                    }
                                }

                                e=strcmp(bname2,bname1);

                                if(e==0)
                                {

                                    printf("\n\t Book author : %s",bauthor1);
                                    printf("\n\t Number of pages : %d",bp1);
                                    printf("\n\t Cost of book : %d",bc1);
                                    printf("\n\t Rent of book per day :%d",br1);

                                }

                                else if(n==0)

                                {
                                    printf("\n\t search results are not found...");
                                }

                                getch();
                                system ("cls");
                                goto admin1;
                                break;

                        case 3:


                                    printf("\n\n\t Book name :%s",bname1);
                                    printf("\n\t Book author : %s",bauthor1);
                                    printf("\n\t Number of pages : %d",bp1);
                                    printf("\n\t Cost of book : %d",bc1);
                                    printf("\n\t Rent of book per day :%d",br1);

                                     for(i=0;i<10;i++)

                                {
                                    printf("\n\n\t Book name : %s ",bname[i]);
                                    printf("\n\t Book author :%s",bauthor[i]);
                                    printf("\n\t Number of pages : %d ",bp[i]);
                                    printf("\n\t Cost of book : %d",bc[i]);
                                    printf("\n\t Rent of book per day :%d",br[i]);
                                }


                                getch();
                                system("cls");
                                goto admin1;
                                break;

                        case 4: system("cls");
                                goto menu;
                                break;

                        default: printf("\n  invalid details... ");
                        goto admin1;
                        break;
                        }
                    }

                    else

                    {
                        printf("\n\t invalid credentials...");goto admi;
                    }

                }
                break;

            case 2:
                stu1 :

                    printf("\n\t====== student login page ======");
                    printf("\n\t 1) Search book by name :");
                    printf("\n\t 2) View all books :");
                    printf("\n\t 3) Exit \n\n\t\t");
                    scanf("%d",&m);
                    switch(m)
                    {

                     case 1: stu :
                                printf("\n\t Book name : ");
                                scanf("%s",&bname2);
                                for(i=0;i<10;i++)
                                {
                                    x=strcmp(bname[i],bname2);
                                    if(x==0)
                                    {
                                        printf("\n\t Book author :%s",bauthor[i]);
                                        printf("\n\t Number of pages : %d",bp[i]);
                                        printf("\n\t Cost of book : %d",bc[i]);
                                        printf("\n\t Rent of book per day :%d",br[i]);
                                        n=1;

                                        break;
                                    }
                                }

                                e=strcmp(bname2,bname1);

                                if(e==0)

                                {

                                    printf("\n\t Book author : %s",bauthor1);
                                    printf("\n\t Number of pages : %d",bp1);
                                    printf("\n\t Cost of book : %d",bc1);
                                    printf("\n\t Rent of book per day :%d",br1);


                                }

                                else if(n==0)

                                {
                                    printf("\n\t Search results are not found...");
                                }

                                getch();
                                system ("cls");
                                goto stu1;
                                break;

                        case 2:

                                    printf("\n\n\t Book name :%s",bname1);
                                    printf("\n\t Book author : %s",bauthor1);
                                    printf("\n\t Number of pages : %d",bp1);
                                    printf("\n\t Cost of book : %d",bc1);
                                    printf("\n\t Rent of book per day :%d",br1);

                                    for(i=0;i<10;i++)

                                {
                                    printf("\n\n\t Book name : %s ",bname[i]);
                                    printf("\n\t Book author :%s",bauthor[i]);
                                    printf("\n\t Number of pages : %d ",bp[i]);
                                    printf("\n\t Cost of book : %d",bc[i]);
                                    printf("\n\t Rent of book per day :%d",br[i]);
                                }


                                getch();
                                system("cls");
                                goto stu1;
                                break;

                        case 3:

                            {
                                goto menu;
                            }

                        default: printf("\n Invalid option.....");
                        goto stu1;
                        break;

                    }
                case 3: goto end;
                default :printf("\n\t\t Invalid option ....");
                goto menu;
            }
            break;

    case 2:
         goto end;
         break;
    default :printf("\n\t\t Invalid option ....");
    goto menu1;
    break;

}
end :
printf("\n\t thank you....");
return 0;

}
