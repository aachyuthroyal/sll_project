#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
int rollno;
char name[20];
float percentage;
struct stu*next;
};
extern struct stu *head;
void add(void);
void print(void);
void delete_all(void);
void delete(void);
void sort_data(void);
int count(void);
void save(void);
void reverse(void);
void search(void);
