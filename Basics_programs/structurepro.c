#include<stdio.h>
#include<string.h>

struct Student
{
   int id;
   float marks;
   char Fav_letter;
   char name[98];
};

int main()
{
    struct Student raj , ankit , mayank;
    raj.id = 832;
    raj.marks = 34.20;
    raj.Fav_letter = 'r';
    ankit.id = 4332;
    ankit.marks = 64.20;
    ankit.Fav_letter = 'l';
    mayank.id = 562;
    mayank.marks = 97.20;
    mayank.Fav_letter = 'r';

    strcpy(raj.name , "kuldep juka singhania");

    printf("Marks of raj is %c", raj.Fav_letter );
    printf("raj name is %c \n", raj.name);
}