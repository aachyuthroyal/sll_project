#include"header.h"
struct stu*head=0;
int main()
{
        int c=0;
        char ch;
        while(1)
        {
                printf("enter the info..\n");
                printf("a/A)add P/p)print D/d)delete_all E/e)delete O/o)sort_data C/c)countNode S/s)save R/r)reverse V/v)search....Z/z)exit\n");
                scanf(" %c",&ch);
                switch(ch)
                {
                        case 'A':
                        case 'a':add();break;
                        case 'P':
                        case 'p':print();break;
                        case 'D':
                        case 'd':delete_all();break;
                        case 'E':
                        case 'e':delete();break;
                        case 'O':
                        case 'o':sort_data();break;
                        case 'C':
                        case 'c':c=count();
                                 printf("c=%d\n",c);break;
                        case 'S':
                        case 's':save();break;
                        case 'R':
                        case 'r':reverse();break;
                        case 'V':
                        case 'v':search();break;
                        case 'z':return 0;
                }
        }
}
