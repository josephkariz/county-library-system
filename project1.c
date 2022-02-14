/*
  County Library Management System
  Joseph Kariuki
  14 Feb 2022
  GNU GCC
  C99
  MIT
*/

#include <stdio.h>
#include <stdlib.h>
int menu()
{

      int action;
          printf("select an action below\n");
          printf("1.Add new patron\n");
          printf("2.View all patrons");
          printf("3.view all books");
          printf("4.add new book\n");
          printf("your action\n");
          scanf("(%d)",&action);

        return action;



}

int main()
{

        printf("COUNTY LIBRARY SYSTEM\n");
        printf("WELCOME MR JOSEPH\n");
        printf("You selected action%d");

    return 0;

}

