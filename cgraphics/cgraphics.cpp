#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<conio.h>
#include<Math.h>
#include<iostream.h>
int gd=DETECT,gm;
int x,y,mx,my,a1,i,c1=RED,d=BROWN,a2,a3,a4,b1,b2,b3,b4,a5,b5,rat=280;
void firstscreen();
void clk_but3d(int x,int y,int l,int w)
 {
    setcolor(BLUE);
    setfillstyle(1,BLUE);

    bar(x,y,x+l,y+w);

    setcolor(BLUE);
    line(x,y,x+l,y);
    line(x,y,x,y+w);

    setcolor(BLUE);
    line(x+l+1,y,x+l+1,y+w+1);
    line(x,y+w+1,x+l+1,y+w+1);
 }
void thankyou()
 {
   setfillstyle(1,0);
      bar(190,250,475,350);
      clk_but3d(190,250,290,100);
      settextstyle(0,0,2);
      setcolor(4);
      outtextxy(250,300,"THANKYOU");
      getch();
      setfillstyle(1,0);
      bar(190,250,482,353);
     // getch();
      closegraph();
      exit(0);
      //setcolor(2);
      //smallcube(x,y);
      //return 1;
  }


void joker(int x, int y)
{
y=y-15;
circle(x, y-100,20);
line(x,y-80,x,y-16);
line(x-40,y-65,x+40,y-65);
circle(x-40,y-65,5);
circle(x+40,y-65,5);
line(x,y-55,x-10,y-65);
line(x,y-55,x+10,y-65);

setcolor(BROWN);
setfillstyle(1,BROWN);
fillellipse(x-10,y-102,1,1);
fillellipse(x+10,y-102,1,1);
setcolor(RED);
setfillstyle(1,RED);
fillellipse(x,y-98,2,2);
setcolor(15);
arc(x,y-93,180,360,6);
setcolor(GREEN);

line(x-21,y-104,x,y-140);
line(x+21,y-104,x,y-140);
}
void joker1(int x, int y)
{

circle(x, y-100,20);
line(x,y-80,x,y-16);
line(x,y-55,x-10,y-65);
line(x,y-55,x+10,y-65);

setcolor(BROWN);
setfillstyle(1,BROWN);
fillellipse(x-10,y-102,1,1);
fillellipse(x+10,y-102,1,1);
setcolor(RED);
setfillstyle(1,RED);
fillellipse(x,y-98,2,2);
setcolor(15);
arc(x,y-93,180,360,6);
setcolor(GREEN);

line(x-21,y-104,x,y-140);
line(x+21,y-104,x,y-140);
}


void rotate(int x,int y)
{
setcolor(0);
line(x-40,y-65,x+40,y-65);
circle(x-40,y-65,5);
circle(x+40,y-65,5);





//line(x-50,y-63,x-25,y-33);
//line(x+75,y-25,x+50,y-50);
//line(x-25,y-33,x+75,y-25);


int x1=x-40;
int y1=y-65;
int x2=x+40;
int y2=y-65;
int p=x,q=y-65;
double incr=0;

for(int k=0;k<=180;k=k+9)
	 {



		//Centre
	  float Angle=(k*3.14)/180;


		a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
		 b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);

		 a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
		 b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);



 delay(100);
 setcolor(GREEN);
line(a1,b1,a2,b2);
circle(a1,b1,5+incr);

circle(a2,b2,5+incr);
joker1(x,y);
firstscreen();
/*line(a1,b1,a2,b2);
line(a2,b2,a4,b4);
line(a3,b3,a1,b1);
line(x+50,y-50,x+75,y-25);
line(x+50,y-50,x-50,y-50);
line(x+75,y-25,x-25,y-25);
line(x+50,y+50,x+50,y-50);

  */

if(k!=180)
{

	 delay(250);

	 setcolor(0);

	line(a1,b1,a2,b2);
	circle(a1,b1,5+incr);

circle(a2,b2,5+incr);





setcolor(0);


}
incr=incr+0.5;

}

	 { k=180;


	  float Angle=(k*3.14)/180;



		a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
		 b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);

		 a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
		 b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);



 delay(250);
 setcolor(GREEN);
line(a1,b1,a2,b2);
fillellipse(a1,b1,5+incr,5+incr);
setcolor(RED);
fillellipse(a2,b2,5+incr,5+incr);
setcolor(GREEN);
  joker1(x,y);
   firstscreen();



   }

		    //  delay(500);
		      //joker(x,y);




      thankyou();

}

void translate(int x,int y)
{
y=y-15;
for(int i=0;i<=250;i=i+5)
{

setcolor(GREEN);
circle(x+i, y-100,20);
line(x+i,y-80,x+i,y-16);
setcolor(GREEN);
line(x-40+i,y-65,x+40+i,y-65);
circle(x-40+i,y-65,5);
circle(x+40+i,y-65,5);
line(x+i,y-55,x-10+i,y-65);
line(x+i,y-55,x+10+i,y-65);
setcolor(BROWN);
setfillstyle(1,BROWN);
fillellipse(x-10+i,y-102,1,1);
fillellipse(x+10+i,y-102,1,1);
setcolor(RED);
setfillstyle(1,RED);
fillellipse(x+i,y-98,2,2);
setcolor(15);
arc(x+i,y-93,180,360,6);
setcolor(GREEN);
line(x-21+i,y-104,x+i,y-140);
line(x+21+i,y-104,x+i,y-140);
//line(x+50,y-50,x-50,y-50);
delay(100);
setcolor(0);
circle(x+i, y-100,20);
line(x+i,y-80,x+i,y-16);
setcolor(0);
line(x-40+i,y-65,x+40+i,y-65);
setcolor(0);
circle(x-40+i,y-65,5);
setcolor(0);
circle(x+40+i,y-65,5);


line(x+i,y-55,x-10+i,y-65);
line(x+i,y-55,x+10+i,y-65);

setcolor(0);
setfillstyle(1,0);
fillellipse(x-10+i,y-102,1,1);
fillellipse(x+10+i,y-102,1,1);
setcolor(0);
setfillstyle(1,0);
fillellipse(x+i,y-98,2,2);
setcolor(0);
arc(x+i,y-93,180,360,6);
setcolor(0);
line(x-21+i,y-104,x+i,y-140);
line(x+21+i,y-104,x+i,y-140);

if(i==250)
{setcolor(GREEN);
circle(x+i, y-100,20);
line(x+i,y-80,x+i,y-16);
setcolor(GREEN);
line(x-40+i,y-65,x+40+i,y-65);
fillellipse(x-40+i,y-65,5,5);
setcolor(RED);
fillellipse(x+40+i,y-65,5,5);
setcolor(GREEN);
line(x+i,y-55,x-10+i,y-65);
line(x+i,y-55,x+10+i,y-65);
setcolor(BROWN);
setfillstyle(1,BROWN);
fillellipse(x-10+i,y-102,1,1);
fillellipse(x+10+i,y-102,1,1);
setcolor(RED);
setfillstyle(1,RED);
fillellipse(x+i,y-98,2,2);
setcolor(15);
arc(x+i,y-93,180,360,6);
setcolor(GREEN);
line(x-21+i,y-104,x+i,y-140);
line(x+21+i,y-104,x+i,y-140);


}


}


rotate(x+250,y);
}

void firstscreen()
{
i=28;
setcolor(DARKGRAY);
	arc(70,70,90,200,20);
	arc(90,50,45,180,20);
	arc(110,50,0,120,20);
	arc(130,70,-25,120,20);
	arc(67,80,150,-90,15);
	arc(87,90,195,-64,20);
	arc(107,90,225,-40,20);
	arc(127,80,260,10,23);
	setfillstyle(1,DARKGRAY);
	floodfill(80,80,DARKGRAY);

	setcolor(DARKGRAY);
	arc(70+rat,70,90,200,20);
	arc(90+rat,50,45,180,20);
	arc(110+rat,50,0,120,20);
	arc(130+rat,70,-25,120,20);
	arc(67+rat,80,150,-90,15);
	arc(87+rat,90,195,-64,20);
	arc(107+rat,90,225,-40,20);
	arc(127+rat,80,260,10,23);
	setfillstyle(1,DARKGRAY);
	floodfill(80+rat,80,DARKGRAY);
	//setcolor(DARKGRAY);
	arc(406,88,100,300,20);
	arc(455,88,220,32,18);
	arc(420,60,80,205,20);
	arc(447,70,300,80,23);
	arc(435,55,0,150,20);
	arc(430,90,225,-40,20);
       //	setfillstyle(1,DARKGRAY);
       //	floodfill(406,88,DARKGRAY);


	//Tree
       //	{
      //	wait:while(!kbhit());
      //	int c=getch();
      //	if(c=='1'||c=='!')

	setcolor(rand());
	circle(480+i,285,5);
		circle(540+i,285,5);
		circle(460+i,335,5);
		circle(560+i,335,5);
	circle(440+i,385,5);
	circle(580+i,385,5);
	  setcolor(GREEN);
	line(510+i,240,480+i,280);
	line(510+i,240,540+i,280);
	line(480+i,280,500+i,280);
	line(540+i,280,520+i,280);
	line(500+i,280,460+i,330);
	line(520+i,280,560+i,330);
	line(460+i,330,500+i,330);
	line(560+i,330,520+i,330);
	line(500+i,330,440+i,380);
	line(520+i,330,580+i,380);
	line(440+i,380,500+i,380);
	line(580+i,380,520+i,380);
	line(500+i,380,520+i,380);
	setcolor(GREEN);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(500+i,375,GREEN);
	setcolor(BROWN);
	line(500+i,380,500+i,450);
	line(520+i,380,520+i,450);
	line(500+i,381,520+i,381);
	line(500+i,450,520+i,450);



	setcolor(BROWN);
	setfillstyle(9,BROWN);
	floodfill(505+i,385,BROWN);

	//floor
	setcolor(BROWN);
	line(0,449,650,449);
	setfillstyle(1,BROWN);
	floodfill(0,450,BROWN);
/*
	setcolor(GREEN);
	circle(480+i,285,5);
		circle(540+i,285,5);
		circle(460+i,335,5);
		circle(560+i,335,5);
	circle(440+i,385,5);
	circle(580+i,385,5);

for(int m=0;m<=13;m++)
	{

		getch()    ;
		if(m!=2)
		{

		      setcolor(m);
		      setfillstyle(SOLID_FILL,m);
		      floodfill(480+i,285,GREEN);
		      setfillstyle(SOLID_FILL,m);
		      floodfill(540+i,285,GREEN);
		      setfillstyle(SOLID_FILL,m);
		      floodfill(460+i,335,GREEN);
		      setfillstyle(SOLID_FILL,m);
		      floodfill(560+i,335,GREEN);
		      setfillstyle(SOLID_FILL,m);
		      floodfill(440+i,385,GREEN);
		      setfillstyle(SOLID_FILL,m);
		      floodfill(580+i,385,GREEN);
		 //     delay(50);
	       }
	}*/

}







void welcome()
 {
   setfillstyle(1,0);
   bar(190,250,475,350);
      clk_but3d(190,250,290,100);
      settextstyle(0,0,2);
      setcolor(4);
      outtextxy(270,280," WELCOME");
      outtextxy(200,300," PRESS ANY KEY TO");
      outtextxy(270,320," START");
      getch();
      setfillstyle(1,0);
      bar(190,250,482,353);
      setcolor(2);

      //return 1;
  }
void initialise()
{
//initgraph(&gd,&gm,"c:\\tc\\bgi");
	initgraph(&gd, &gm, "..\\bgi");
    mx=getmaxx();my=getmaxy();
    setcolor(10);
    x=0;
    y=my;
    firstscreen();
    welcome();
    firstscreen();
    joker(x,y);
    translate(x,y);
    thankyou();
    //smallcube(x,y);
    //cube(x,y);


}
void main()
{
//welcome();
initialise();
//getch();
  //  closegraph();
    // exit(0);

}
