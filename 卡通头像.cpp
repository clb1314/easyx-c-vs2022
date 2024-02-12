#include<graphics.h>
#include<stdio.h>
#define PI 3.14
int main()
{
	initgraph(700, 700);
	setbkcolor(WHITE);
	cleardevice();
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID, 6);
	setfillcolor(BLUE);
	fillellipse(100, 50, 600, 500);//Í·²¿
	setfillcolor(WHITE);
	fillellipse(130, 130, 570, 500);//Á³
	fillellipse(250, 80, 350, 200);//×óÑÛ
	fillellipse(350, 80, 450, 200);//ÓÒÑÛ
	setfillcolor(BLACK);//Í«¿×
	solidcircle(320, 160, 15);
	solidcircle(380, 160, 15);
	setfillcolor(WHITE);
	solidcircle(320, 160, 6);
	solidcircle(380, 160, 6);
	setfillcolor(RED);//±Ç×Ó
	fillcircle(350, 200, 18);
	line(350, 218, 350, 400);
	arc(230, 218, 470, 400,PI,2*PI);
	line(100, 170, 220, 200);
	line(600, 170, 480, 200);
	line(80, 210, 210, 220);
	line(620, 210, 490, 220);
	line(220,240,80,270);
	line(480, 240,620, 270);
	getchar();
	closegraph();
	return 0;
}