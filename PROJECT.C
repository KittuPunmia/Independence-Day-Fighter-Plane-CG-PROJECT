
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

void obj()
{
 //1st building
 setcolor(WHITE);
rectangle(230,150,290,300);
rectangle(240,160,280,190);
rectangle(240,200,280,230);
rectangle(240,240,280,270);
setfillstyle(1,YELLOW);
floodfill(235,155,WHITE);
setfillstyle(2,WHITE);
floodfill(245,170,WHITE);
setfillstyle(7,WHITE);
floodfill(245,210,WHITE);
setfillstyle(4,WHITE);
floodfill(245,250,WHITE);
//2nd building
rectangle(305,140,405,300);
circle(352,160,10);
rectangle(310,175,400,195);
rectangle(310,205,325,295);
rectangle(335,205,350,295);
rectangle(360,205,375,295);
rectangle(385,205,400,295);
setfillstyle(1,BLUE);
floodfill(307,145,WHITE);
setfillstyle(1,11);
floodfill(352,160,15);
floodfill(320,180,15);
floodfill(320,250,15);
floodfill(340,250,15);
floodfill(365,250,15);
floodfill(390,250,15);
//3rd building
rectangle(420,170,500,300);
rectangle(430,180,490,190);
rectangle(430,200,490,210);
rectangle(430,220,490,270);
rectangle(430,280,490,290);
setfillstyle(1,6);
floodfill(425,175,WHITE);
setfillstyle(1,14);
floodfill(440,185,15);
floodfill(440,205,15);
floodfill(440,250,15);
floodfill(440,285,15);

/*tree start*/
setcolor(BROWN);
rectangle(150,170,170,290);
line(170,290,180,300);
line(150,290,140,300);
line(140,300,180,300);

setfillstyle(1,BROWN);
floodfill(160,250,BROWN);
floodfill(150,295,BROWN);
//2nd tree
rectangle(70,180,90,290);

line(90,290,95,300);
line(70,290,65,300);
line(65,300,95,300);
floodfill(80,200,BROWN);
floodfill(70,295,BROWN);
/*person starts here*/
setcolor(YELLOW);
circle(510,230,2);
rectangle(506,232,514,240);
line(506,232,500,237);
line(514,232,520,237);
line(506,237,500,250);
line(514,237,520,250);

circle(530,230,2);
rectangle(526,232,534,240);
line(526,232,525,237);
line(524,232,540,237);
line(526,237,519,250);
line(534,237,540,250);

//tree leAVES
setcolor(GREEN);
circle(180,170,15);
arc(170,160,22,257,15);
arc(155,150,21,260,15);
arc(145,170,77,355,15);
setfillstyle(1,10);
floodfill(180,170,GREEN);
floodfill(170,160,GREEN);
floodfill(160,150,GREEN);
floodfill(145,170,GREEN);

arc(90,165,0,270,15);
circle(105,180,15);
arc(70,170,95,340,15);
arc(80,150,0,250,15);
arc(65,185,120,22,18);

floodfill(90,165,2);
floodfill(105,180,2);
floodfill(70,170,2);
floodfill(80,150,2);
floodfill(65,185,2);
floodfill(75,190,2);

}
void main()
{
int i,j,rx2,ry2,sep2,rx1,ry1,sep;
int gm,gd=DETECT;
 j=0;
initgraph(&gd,&gm,"C://TurboC3//bGi");


 for(i=0,j=0;j<500 && i<500;j+=3,i+=10)
 {
delay(500);
clearviewport();

obj();
//ufo
 setcolor(WHITE);
ellipse(60+i,40,0,360,30,15);
ellipse(60+i,30,0,360,10,5);
setfillstyle(1,RED);
floodfill(60+i,40,WHITE);
floodfill(60+i,30,WHITE);

//road
setcolor(WHITE);
line(0,300,getmaxx(),300);
line(0,436,getmaxx(),436);
line(0,getmaxy(),getmaxx(),getmaxy());
line(0,436,0,getmaxy());

line(getmaxx(),436,getmaxx(),getmaxy());
setfillstyle(1,GREEN);
floodfill(20,440,WHITE);
line(0,300,0,436);
line(getmaxx(),300,getmaxx(),436);
setfillstyle(1,8);
floodfill(20,350,WHITE);


setcolor(BLUE);
setfillstyle(1,BLUE);
//CYCLE
line(50+i,405,100+i,405);
line(50+i,403,100+i,403);
//floodfill(55+i,404,BLUE);
line(75+i,375,125+i,375);
line(75+i,378,125+i,378);

line(50+i,405,75+i,378);
line(50+i,403,75+i,375);

line(100+i,405,125+i,378);
line(100+i,403,125+i,375);

line(150+i,405,100+i,345);
line(75+i,375,75+i,370);
line(65+i,367,85+i,367);
line(65+i,370,65+i,367);
line(85+i,370,85+i,367);
line(65+i,370,85+i,370);
line(80+i,345,100+i,345);
//wheel
circle(150+i,405,30);
circle(150+i,405,28);
circle(50+i,405,28);
circle(50+i,405,30);
//man
setcolor(WHITE);
line(75+i,340,75+i,370);
ellipse(75+i,330,0,360,5,10);
line(75+i,345,80+i,355);
line(80+i,355,90+i,345);
//stone
setcolor(BROWN);
rectangle(getmaxx()-i,436,650-i,431);
setcolor(BLUE);
if(j%2==0)
{
line(150+i,405+30,150+i,405-30);
  line(150+i-30,405,150+i+30,405);
  line(50+i,405+30,50+i,405-30);
  line(50+i-30,405,50+i+30,405);

}
else
{
rx1=150+i-(30/sqrt(2));
ry1=405-(30/sqrt(2));
sep=sqrt(2)*30;
line(rx1,ry1,rx1+sep,ry1+sep);
line(rx1,ry1+sep,rx1+sep,ry1);

rx2=50+i-(30/sqrt(2));
ry2=405-(30/sqrt(2));
sep2=sqrt(2)*30;
line(rx2,ry2,rx2+sep2,ry2+sep2);
line(rx2,ry2+sep2,rx2+sep2,ry2);

setcolor(RED);
settextstyle(GOTHIC_FONT,HORIZ_DIR,2);
outtextxy(i-180,20,"HAPPY INDEPENDENCE DAY");
delay(200);
}


}

getch();
closegraph();
}
