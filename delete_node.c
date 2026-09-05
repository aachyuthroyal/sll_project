#include"header.h"
void delete(void)
{

        if(head==0)
        {
                printf("no record found..\n");
                return ;
        }
        int num;
        char ch,name[20];
        printf("r/R:rollno\n n/N:name\n");
        scanf(" %c",&ch);
        if(ch=='r' ||ch=='R')
        {
                printf("enter rollno to delete:\n");
                scanf("%d",&num);
                struct stu *del=head,*prev;
                while(del)
                {
                        if(num==del->rollno)
                        {
                             if(del==head)
                               {
                                 head=head->next;
                               return ;
                                }
                                if(del==head)
                                        head=del->next;
                                else
                                        prev->next=del->next;
                                free(del);
                                return ;
                        }
                        prev=del;
                        del=del->next;
                }
                printf("no rollon found..\n");
        }
        else if(ch=='N' ||ch=='n')
        {
            printf("enter the name to delete:\n");
                scanf("%s",name);
                struct stu *del=head,*prev;
                while(del)
                {
                        if(strcmp(name,del->name)==0)
                        {
                            if(del==head)
                               {
                                 head=head->next;
                                  return ;
                                }
                                if(del==head)
                                        head=del->next;
                                else
                                        prev->next=del->next;
                                free(del);
                                return ;
                        }
                        prev=del;
                        del=del->next;
                }
                printf("no name found..\n");
        }
}
                                                         
