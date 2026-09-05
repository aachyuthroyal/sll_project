#include"header.h"
void save(void)
{
        struct stu *p=head;
        if(p==0)
        {
                printf("no record found..\n");
                return ;
        }
        FILE *fp=fopen("data","w");
        while(p)
        {
                fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->per);
                p=p->next;
        }
        printf("data is saved..\n");
}
