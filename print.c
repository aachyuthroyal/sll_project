#include"header.h"
void print(void)
{
        struct stu *p=head;
        if(p==0)
        {
                printf("no records found..\n");
                return ;
        }
        while(p)
        {
                printf("%d %s %f\n",p->rollno,p->name,p->percentage);
                p=p->next;
        }
}
