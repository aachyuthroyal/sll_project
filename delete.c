  #include"header.h"
void delete_node(void)
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
                struct stu *del=head,*prev=NULL;
                while(del)
                {
                        struct stu *q=del->next;
                        if(num==del->rollno)
                        {
                                if(del==head)
                                        head=q;
                                else
                                        prev->next=q;
                                free(del);
                                del=q;
                        }
                        prev=del;
                        del=q;
                }
                printf("no rollon found..\n");
        }
        else if(ch=='n'||ch=='N')
        {
                char s[20];
                int n;
                printf("enter name to delete:\n");
                scanf("%s",s);
                struct stu *t=head;
                int c=0;
                while(t)
                {
                        if(strcmp(t->name,s)==0)
                                c++;
                        t=t->next;
                }
                if(c==0)
                        printf("name not found:\n");

                else if(c==1)
                {
                        struct stu *del=head,*prev=NULL;
                        while(del)
                        {
                                struct stu *p=del->next;
                                if(strcmp(s,del->name)==0)
                                {
                                        if(del==head)
                                                head=p;
                                        else
                                                prev->next=p;
                                        free(del);
                                        break;
                                }
                                prev=del;
                                del=p;
                        }
                        printf("deleted\n");
                }

                else
                {
                        int n;
                        printf("duplicate name found %d times\n enter rollno to delete:\n",c);
                        scanf("%d",&n);
                        struct stu *del=head,*prev=NULL;
                        int flag=0;
                        while(del)
                        {
                                struct stu *p=del->next;
                                if(strcmp(s,del->name)==0 &&n==del->rollno)
                                {
                                        flag=1;
                                        if(del==head)
                                                head=p;
                                        else
                                                prev->next=p;
                                        free(del);
                                        del=p;
                                        break;
                                }
                                else
                                {
                                        prev=del;
                                        del=p;
                                }
                        }
                        if(flag==0)
                                printf("rollno not foundfor that name\n");
                        else
                                printf("deleted\n");
                }
        }
}
