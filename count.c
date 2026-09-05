#include"header.h"
int count(void)
{
        struct stu*p=head;
        int c=0;
        while(p)
        {
                c++;
                p=p->next;
        }
        return c;
}
