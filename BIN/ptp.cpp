#include<stdio.h>

#include<conio.h>

#include<ctype.h>

#include<stdlib.h>

#include<string.h>

#include<stdbool.h>

#include<time.h>

int countr = 0;

char menuController()

{

char ch1;

system("cls");

printf("\t\t\tC PROGRAM QUIZ GAME\n");

printf("\n\t\t________________________________________");

printf("\n\t\t\t WELCOME ");

printf("\n\t\t\t to ");

printf("\n\t\t\t THE GAME ");

printf("\n\t\t________________________________________");

printf("\n\t\t________________________________________");

printf("\n\n\tDo you wish to start the Quiz? \n\tPress Y to start... \n\tPress any other key to exit...");

ch1=getch(); //che

return ch1;

}

void startQuiz(char name[])

{

printf("\n\n\n\t\t\tResister your name:");

gets(name);

}

void runQuiz()

{

int i;

bool arr[3]={0};

int A[3];

time_t t;

srand((unsigned)time(&t));

for(i=0; i<3; i++)

{

int r = rand()%3;

if(!arr[r])

A[i]= r;

else

i--;

arr[r]=1;

}

for(i=0; i<3; i++)

{

switch(A[i])

{

case 0:

printf("\nWhich of this IDE is supported in Windows, Mac OS and Linux?");

printf("\n\nA.Dev C++\t\tB.Code Blocks\n\nC.Eclipse\t\tD.C++ Builder");

if (toupper(getch())=='C')

{

printf("\n\nCorrect!!!");

countr++;

getch();

break;

}

else

{

printf("\n\nWrong!!! The correct answer is C. Eclipse");

getch();

break;

}

case 1:

printf("\nWhich of this is not a Token?");

printf("\n\nA.Keywords\t\tB.Include\n\nC.Identifiers\t\tD.Literals");

if (toupper(getch())=='B')

{

printf("\n\nCorrect!!!");

countr++;

getch();

break;

}

else

{

printf("\n\nWrong!!! The correct answer is B. Include");

getch();

break;

}

case 2:

printf("\nWhich of this is not a fundamental data type?");

printf("\n\nA.Array\t\http://tB.Int\n\nC.Char\t\tD.Double");

if (toupper(getch())=='A')

{

printf("\n\nCorrect!!!");

countr++;

getch();

break;

}

else

{

printf("\n\nWrong!!! The correct answer is A. Array");

getch();

break;

}

}

}

}

void displayResult()

{

printf("Your score is = %d", countr);

}

int main()

{

char ch1, name[20];

ch1 = menuController();

if(ch1=='Y')

{

system("cls");

startQuiz(name);

printf("\nWELCOME %s! LET US BEGIN THE GAME!", name);

runQuiz();

displayResult();

}