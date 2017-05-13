/*

Author: Anirudh Saxena

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
int i=0;
int a,b,c,d;
int x=75;
int y=155;
int x1=125;
int y1=201;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\bgi");
/*setbkcolor(MAGENTA);*/
rectangle(1,2,638,400);

{
setfillstyle(SOLID_FILL,BLUE); /*SCREEN STYLE */
gotoxy(15,3);
rectangle(70,2,638,400);
floodfill(72,4,WHITE);
}
outtextxy(15,20,"TIMER");
rectangle(15,30,55,50);
outtextxy(15,70,"SCORE");
rectangle(15,100,55,80);
outtextxy(320,140,"SCREEN");

{
setfillstyle(SOLID_FILL,DARKGRAY);     /*KEYBOARD STYLE */
rectangle(70,150,638,400);
floodfill(72,152,WHITE);
}
outtextxy(95,175,"Q");
rectangle(75,155,125,201);
while(i<=8)
{
x+=55;
x1+=55;
rectangle(x,y,x1,y1);
/*rectangle(205,155,251,201);*/
i++;
}
outtextxy(150,175,"W");
outtextxy(205,175,"E");
outtextxy(260,175,"R");
outtextxy(315,175,"T");
outtextxy(370,175,"Y");
outtextxy(425,175,"U");
outtextxy(480,175,"I");
outtextxy(535,175,"O");
outtextxy(590,175,"P");

rectangle(105,205,155,251);
outtextxy(125,225,"A");
outtextxy(180,225,"S");
outtextxy(235,225,"D");
outtextxy(290,225,"F");
outtextxy(345,225,"G");
outtextxy(400,225,"H");
outtextxy(455,225,"J");
outtextxy(510,225,"K");
outtextxy(565,225,"L");
{
int x2=105;
int y2=205;
int x3=155;
int y3=251;
for(i=0;i<8;i++)
{
x2+=55;
x3+=55;
rectangle(x2,y2,x3,y3);
}
outtextxy(180,275,"Z");
outtextxy(235,275,"X");
outtextxy(290,275,"C");
outtextxy(345,275,"V");
outtextxy(400,275,"B");
outtextxy(455,275,"N");
outtextxy(510,275,"M");
rectangle(160,255,210,300);
}
{
int x4=160;
int y4=255;
int x5=210;
int y5=300;
for(i=0;i<6;i++)
{
x4+=55;
x5+=55;
rectangle(x4,y4,x5,y5);
rectangle(210,310,490,355);
setfillstyle(SOLID_FILL,BROWN);
rectangle(1,400,638,455);
floodfill(2,350,WHITE);
outtextxy(145,425,"TYPING TUTOR V1.1 COPYRIGHT(c) ANIRUDH SAXENA");
}

	{
		outtextxy(75,10,"||Welcome to Typing Tutor||");
		delay(500);
		outtextxy(75,25,">>Learn to type efficiently within few days<<");
		delay(7000);
/*
for(i=0;i<10;i++){

sound(550);
delay(1000);
nosound();
sound(250);
delay(500);
nosound();} */
		outtextxy(75,35,"_____________________________________________________________");
		outtextxy(75,45,"Select an option to proceed...");
		outtextxy(75,55,"<<<MENU>>>");
		outtextxy(75,65,"1.Learn Typing");
		outtextxy(75,75,"2.Start Test");
		outtextxy(75,85,"3.Help!");
		outtextxy(75,95,"4.Exit");

}
{
int opt;                   /*MENU INPUT */
gotoxy(10,8);
setfillstyle(SOLID_FILL,BLUE);
scanf("%d",&opt);
floodfill(74,2,WHITE);
			switch(opt)
			{
				case 1:
				break;

				case 2:
				break;

				case 3:
				outtextxy(75,105,"Please Wait...");
				delay(2000);
				clrscr();
				setbkcolor(BLACK);
				outtextxy(240,5,"**TYPING TUTOR HELP**");
				{
				char ch;
				char file_name[]="help1.txt";
				FILE *fp;
				fp=fopen(file_name,"r");
				if(fp==NULL)
				{
				perror("Error while opening file");
				}
				gotoxy(2,5);
				setfillstyle(SOLID_FILL,CYAN);
				rectangle(1,2,638,400);
				printf("CONTENTS:\n",file_name);
				floodfill(2,3,WHITE);

				while((ch=fgetc(fp)) !=EOF)
				printf("%c",ch);
				fclose(fp);
				}
				break;

				case 4:
				closegraph();
				restorecrtmode();
				break;

				default:
				outtextxy(75,95,"PLEASE CHOOSE THE CORRECT OPTION");
				break;
			}
}}
getch();
closegraph();
restorecrtmode();
}





