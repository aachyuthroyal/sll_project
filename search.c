#include"header.h"
void search(void)
{
        struct stu *p=head;
        if(p==0)
        {
                printf("file not found..\n");
                return ;
        }
        int num,per;
        int f=0;
        char name[20],ch,s[10],i;
        printf("enter r/R:search rollno\n n/N:search name\n p/P:search percentage\n");
        scanf(" %c",&ch);
        if(ch=='r' ||ch=='R')
        {
                printf("enter the num\n");
                scanf("%d",&num);
                while(p)
                {
                        if(num==p->rollno)
                        {
                          printf("enter the string and number:\n");
                          scanf("%s %f",p->name,&p->percentage);
                                f=1;
                        }
                        p=p->next;
                }
                if(f==0)
                        printf("rollno not found..\n");
        }
       else if(ch=='n' ||ch=='N')
        {
                printf("enter the name\n");
                scanf("%s",name);
                while(p)
                {
                        if(strcmp(name,p->name)==0)
                        {
                                printf("%d %s %f\n",p->rollno,p->name,p->percentage);
                                f=1;
                        }
                        p=p->next;
                }
                if(f==0)
                        printf("name not found..\n");
        }
        else if(ch=='p' ||ch=='P')
        {
                printf("enter the percentage\n");
                scanf("%d",&per);
                while(p)
                {
                        if(per==p->percentage)
                        {
                                printf("%d %s %f\n",p->rollno,p->name,p->percentage);
                                f=1;
                        }
                        p=p->next;
                }
                if(f==0)
                        printf("per not found..\n"); 
         }
}
