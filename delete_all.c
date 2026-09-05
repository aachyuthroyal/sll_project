#include"header.h"
void delete_all(void)
{
        if(head==0)
        {
                printf("no record found..\n");
                return ;
        }
        struct stu *del=head;
        while(del)
        {
                head=del->next;
                free(del);
                del=head;
        }
}
