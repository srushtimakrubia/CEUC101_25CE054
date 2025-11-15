#include<stdio.h>
#include<string.h>
struct team
{
    char tname[100];
    char stype[100];

    struct coach
    {
        char cname[100];
        int cage;
        int cexp;

    } c1;

} t[100];

int main()
{
    int i,n=0;
    char ch;
    do
    {
        printf("\n enter the team  name : ");
        fgets(t[n].tname,100,stdin);
         if(t[n].tname[strlen(t[n].tname)-1]=='\n')
         {
            t[n].tname[strlen(t[n].tname)-1]='\0';
         }


        printf("\n enter the sport type of  team : ");
        fgets(t[n].stype,100,stdin);
        if(t[n].stype[strlen(t[n].stype)-1]=='\n')
         {
            t[n].stype[strlen(t[n].stype)-1]='\0';
         }



        printf("\n enter the coach information :");
        printf("\n enter the team coach name : ");
        fgets(t[n].c1.cname,100,stdin);
        if(t[n].c1.cname[strlen(t[n].c1.cname)-1]=='\n')
         {
            t[n].c1.cname[strlen(t[n].c1.cname)-1]='\0';
         }


        printf("\n enter the team coach age : ");
        scanf("%d",&t[n].c1.cage);
        getchar();


        printf("\n enter team coach  expireance :");
        scanf("%d",&t[n].c1.cexp);
        n++;


        printf("you want to add more team (y/n) : ");
        scanf(" %c",&ch);
        getchar();
}
        while(ch=='y'||ch=='Y');
     printf("========================================================================================\n");
     printf("|  %-15s  |  %-15s  |  %-15s   |  %-10s  |  %-10s  |\n","TEAMNAME","SPORTTYPE","COACHNAME","COACHAGE","COACHEXP");
     printf("========================================================================================\n");

    for(i=0;i<n;i++)
    {

     printf("|  %-15s  |  %-15s  |  %-15s   |  %-10d  |  %-10d  |\n",t[i].tname,t[i].stype,t[i].c1.cname,t[i].c1.cage,t[i].c1.cexp);
    }
      printf("========================================================================================\n");


      char search[100];
      int f;
      printf("enter team name that you want to know information: ");
       fgets(search,100,stdin);
        if(search[strlen(search)-1]=='\n')
         {
            search[strlen(search)-1]='\0';
         }


         for(int i=0;i<n;i++)
         {
             if(strcmp(t[i].tname,search)==0)
             {
                 printf("\n team name = %s",t[i].tname);
                 printf("\n sport name = %s",t[i].stype);
                 printf("\n coach name = %s",t[i].c1.cname);
                 printf("\n coach age = %d",t[i].c1.cage);
                 printf("\n coach expireance = %d",t[i].c1.cexp);
                 f=1;
                 break;
             }
        }
        if(!f)
        {
            printf("team not found enter valid team name ");
        }

}



