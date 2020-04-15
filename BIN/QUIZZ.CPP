#include<stdio.h>
#include<conio.h>
#include<string.h>
 main()
{char quest [5][100];
char choice1 [3][20],choice2 [3][20],choice3 [3][20],choice4 [3][20],choice5 [3][20];
int response[5],correct_ans[5],choice,i,marks;
clrscr();
strcpy(quest[0],"How many groups are there in modern peroidic table?");
strcpy(choice1 [0],"1.25");
strcpy(choice1 [1],"2.7");
strcpy(choice1 [2],"3.18");
correct_ans[0]=2;
strcpy(quest[1],"How many peroids are there in modern peroidic table?");
strcpy(choice2 [0],"1.18");
strcpy(choice2 [1],"2.7");
strcpy(choice2 [2],"3.30");
correct_ans[1]=1;
strcpy(quest[2],"How many elements are there in modern peroidic table?");
strcpy(choice3 [0],"1.123");
strcpy(choice3 [1],"2.118");
strcpy(choice3 [2],"3.125");
correct_ans[2]=1;
strcpy(quest[3],"How many metals are there in modern peroidic table?");
strcpy(choice4 [0],"1.91");
strcpy(choice4 [1],"2.97");
strcpy(choice4 [2],"3.99");
correct_ans[3]=0;
strcpy(quest[4],"In peroidic table,helium is placed at_____ position:");
strcpy(choice5 [0],"1.1st");
strcpy(choice5 [1],"2.2nd");
strcpy(choice5 [2],"3.3rd");
correct_ans[4]=1;
do
{printf("\n\n\n\n\n QUIZ PROGRAM");
printf("\n 1.display questions");
printf("\n 2.display correct answers");
printf("\n 3.display results");
printf("\n 4.exit");
printf("\n\n\n enter your option:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n %s \n",quest[0]);
for(i=0;i<3;i++)
{
printf("\n %s",choice1[i]);
}
printf("\n\n enter your answer number:");
scanf("%d",&response[0]);
printf("\n %s \n",quest[1]);
for(i=0;i<3;i++)
{printf("\n %s ",choice2[i]);
}
printf("\n\n enter your answer number:");
scanf("%d",&response[1]);
printf("\n %s \n",quest[2]);
for(i=0;i<3;i++)
{printf("\n %s ",choice3[i]);
}
printf("\n\n enter your answer number:");
scanf("%d",&response[2]);
printf("\n %s \n",quest[3]);
for(i=0;i<3;i++)
{printf("\n %s ",choice4[i]);
}
printf("\n\n enter your answer number:");
scanf("%d",&response[3]);
printf("\n %s \n",quest[4]);
for(i=0;i<3;i++)
 {printf("\n %s ",choice5[i]);
}
printf("\n\n enter your answer number:");
scanf("%d",&response[4]);
break;
case 2:
printf("\n\n CHECK THE CORRECT ANSWERS");
printf("\n %s \n %s",quest[0],choice1[correct_ans[0]]);
printf("\n %s \n %s",quest[1],choice2[correct_ans[1]]);
printf("\n %s \n %s",quest[2],choice3[correct_ans[2]]);
printf("\n %s \n %s",quest[3],choice4[correct_ans[3]]);
printf("\n %s \n %s",quest[4],choice5[correct_ans[4]]);
break;
case 3:
marks=0;
for(i=0;i<3;i++)
{if(correct_ans[i]+1==response[i])
{marks++;
}
}
printf("\n out of 5 you score %d",marks);
break;
}
}
while(choice!=4);
getch();
return 0;
}