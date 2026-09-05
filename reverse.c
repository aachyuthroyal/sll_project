#include"header.h"
void reverse(void)
{
        if(head==0)
        {
                printf("no record found..\n");
                return ;
        }
        int i,c=count();
        struct stu **p,*t=head;
        if(c>1)
        {
                p=malloc(sizeof(struct stu *)*c);
                for(i=0;i<c;i++)
                {
                        p[i]=t;
                        t=t->next;
                }
                for(i=c-1;i>0;i--)
                {
                        p[i]->next=p[i-1];
                        p[0]->next=0;
                        head=p[c-1];
                }
        }
}
