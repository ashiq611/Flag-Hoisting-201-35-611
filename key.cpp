
#include <stdio.h>
#include <graphics.h>
#include<windows.h>
#include <MMSystem.h>
#include <stdlib.h>
#include <windows.h>
int points[] = {400,50, 500, 70, 600, 60, 600, 160, 500, 170, 400, 150, 400, 50}, base[] = {400,50, 600,50, 600,150, 400,150, 400,50 },
               frame2[] = {400,50, 470, 60, 600, 65, 600, 165, 570, 160, 400, 150, 400, 50};
int a,b,c,d,e;

void bird()
{
//bird
    circle(50+b,100,5);
    line(53+b,98,60+b,100);
    line(53+b,102,60+b,100);
    circle(50+b,98,1);
    ellipse(35+b,100,0,360,10,5);
    line(28+b,100,15+b,95);
    line(28+b,100,14+b,96);
    line(29+b,100,13+b,97);
    line(29+b,101,12+b,98);
    line(29+b,102,10+b,99);
    line(29+b,103,12+b,100);

}

void handdown()
{
    c=b;
//handdown
    ellipse(35+c,106,210,360,6,15);
    line(36+c,100,30+c,110);
    line(39+c,107,36+c,113);
    line(36+c,107,33+c,113);

}

void handup()
{
    d=b;
//handup
    ellipse(35+d,94,0,150,6,15);
    line(36+d,100,30+d,90);
    line(36+d,87,38+d,93);
    line(34+d,87,36+d,93);

}

void setSun()
{
    setfillstyle(SOLID_FILL,YELLOW);
    circle(137,100,50);
    floodfill(126, 104, WHITE);
}

void setOthers()
{
    setfillstyle(SOLID_FILL,BROWN);
    rectangle(385, 30, 395, 600);
    floodfill(390,414,WHITE);
    //stand flug
    setfillstyle(SOLID_FILL,BROWN);
    circle(400, 40, 5);
    floodfill(401,41,WHITE);
    //Ribbon
    line(400, 45, 400, 550);
    //down floor
    setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
    rectangle(0, 600, 1080, 700);
    floodfill(98,627,WHITE);

    //flag man
    setfillstyle(CLOSE_DOT_FILL,BLACK);
    circle(440, 440, 25);
    floodfill(441,441,WHITE);
    setfillstyle(SOLID_FILL,CYAN);
    rectangle(420,465,460,540);
    floodfill(421,466,WHITE);
    line(440, 540, 420, 600);
    line(440, 540, 460, 600);

    line(440, 480, 420, 510);
    line(420, 510, 400, 500);

    line(440, 480, 420, 470);
    line(420, 470, 400, 450);

//salute man
    setfillstyle(CLOSE_DOT_FILL,BLACK);
    circle(888,417,25);
    floodfill(888,417,WHITE);
    setfillstyle(SOLID_FILL,CYAN);
    rectangle(862,442,917,539);
    floodfill(863,443,WHITE);
    setfillstyle(SOLID_FILL,CYAN);
    rectangle(871,540,879,600);
    rectangle(904,539,912,600);
    floodfill(872,541,WHITE);
    floodfill(905,540,WHITE);
    line(861,484,814,444);
    line(814,444,863,404);
    line(919,448,932,519);
}
void leftbuilding()
{
    //gateleft
    setfillstyle(SLASH_FILL,BROWN);
    line(160,500,235,525);  //1
    line(160,500,160,600);  //2
    line(198,512,198,600);  //4
    line(160,600,235,600);//5
    floodfill(183,551,WHITE);
    setfillstyle(SLASH_FILL,BROWN);
    line(160,500,235,525);  //1
    line(235,525,235,600);  //3
    line(198,512,198,600);  //4
    line(160,600,235,600);  //5
    floodfill(221,556,WHITE);


    //buildingleft
    setfillstyle(9,CYAN);
    line(0,320,100,250); //1
    line(0,370,100,305);  //2
    line(100,250,100,600);  //3
    floodfill(30,320,WHITE);
    setfillstyle(9,CYAN);
    line(100,250,335,350); //4
    line(100,305,335,400); //5
    line(335,350,335,600);  //6
    floodfill(224,327,WHITE);
    setfillstyle(10,BLUE);
    line(0,370,100,305);  //2
    line(0,460,100,395);  //7
    line(100,250,100,600);  //3
    floodfill(45,388,WHITE);
    setfillstyle(10,BLUE);
    line(100,305,335,400); //5
    line(100,395,335,480);  //8
    line(335,350,335,600);  //6
    floodfill(138,348,WHITE);
    setfillstyle(9,CYAN);
    line(0,460,100,395);  //7
    line(0,490,100,425);  //9
    line(100,250,100,600);  //3
    floodfill(33,456,WHITE);
    setfillstyle(9,CYAN);
    line(100,395,335,480);  //8
    line(100,425,335,510);  //10
    line(335,350,335,600);  //6
    floodfill(217,451,WHITE);
    setfillstyle(10,BLUE);
    line(0,490,100,425);  //9
    line(100,250,100,600);  //3
    line(0,600,100,600);  //11
    floodfill(59,516,WHITE);;
    setfillstyle(10,BLUE);
    line(100,250,100,600);  //3
    line(100,425,335,510);  //10
    line(335,350,335,600);  //6
    line(0,600,100,600);  //11
    floodfill(278,531,WHITE);
}
void rightbuilding()
{
    //buildingright
    setfillstyle(2,DARKGRAY);
    line(800,200,1080,135);  //1
    line(800,200,800,600);  //2
    line(800,240,1080,175);  //3
    floodfill(818,210,WHITE);
    setfillstyle(9,BLUE);
    line(800,320,1080,255);  //6
    line(800,240,1080,175);  //3
    line(800,200,800,600);  //2
    floodfill(842,247,WHITE);
    setfillstyle(2,DARKGRAY);
    line(800,360,1080,295);  //4
    line(800,400,1080,335);  //5
    floodfill(853,359,WHITE);
    setfillstyle(10,BLUE);
    line(800,200,800,600);  //2
    line(800,400,1080,335);  //5
    line(800,600,1080,600);  //7
    floodfill(1043,376,WHITE);
    floodfill(888,580,WHITE);

    //rill
    setfillstyle(SLASH_FILL,GREEN);
    line(800,360,1080,295);  //4
    line(849,309,849,349);  //1
    line(899,297,899,336);  //2
    line(950,286,950,325);  //3
    line(992,276,992,315);  //4
    line(1032,266,1032,306);  //5
    line(800,320,1080,255);  //6
    floodfill(819,335,WHITE);
    floodfill(871,320,WHITE);
    floodfill(918,308,WHITE);
    floodfill(965,301,WHITE);
    floodfill(1010,283,WHITE);
    floodfill(1053,277,WHITE);

    //DIU
    line(832,117,832,174);  //1
    line(832,117,865,110);  //2
    line(865,110,865,164);  //3
    line(832,174,865,164);  //4
    line(900,100,938,92);  //5
    line(900,154,942,145);  //6
    line(921,96,921,149);  //7
    line(971,86,971,137);  //8
    line(971,137,1012,128);  //9
    line(1012,75,1012,128); //10

    //setcolor(BLUE);
    line(813,101,813,196);  //11
    line(813,101,832,117);  //12
    line(1029,51,1029,147);  //13
    line(1029,51,1012,75);  //14
    line(813,196,832,174);  //15
    line(1029,147,1012,128); //16
}

int main()
{
    initwindow(1080, 700,"Flag Hoisted");
    int i;
    b=0;
    c=0;
    d=0;





    //=========================INTRO=====================================//

    settextstyle(10,0,5);
    outtextxy(170,50,"DAFFODIL INTERNATIONAL UNIVERSITY");
    settextstyle(10,0,2);
    outtextxy(350,100,"Department of Software Engineering");
    settextstyle(8,0,4);
    outtextxy(300, 83+150, "Name : Md. Ashiqur Rahman");
    outtextxy(300, 110+170, "ID : 201-35-611");
    outtextxy(300, 137+190, "Project Name : Flag Hoisting");
    outtextxy(300, 207+170, "Press  any  key  to  start...");

    readimagefile("diu.jpg",50,50,150,100);

    getch();
    cleardevice();
    while(1)
    {
    PlaySound("intro.wav",NULL,SND_ASYNC);
    setfillstyle(10,BLUE);
    rectangle(250,200,900,450);
    floodfill(0,0,WHITE);
    settextstyle(SANS_SERIF_FONT,0,4);
    outtextxy(300, 83+100, "Choose Your Country!!");
    outtextxy(300, 110+120, "1.Bangladesh");
    outtextxy(300, 137+140, "2.Japan");
    outtextxy(300, 180+150, "3.Palau");
    //settextstyle(SANS_SERIF_FONT,0,3);
    outtextxy(300, 240+150, "Press  Zero(0)  to  Exit...");

//Flag go up
    char key;
    key = (char) getch( );
    cleardevice();

    if(key == '1')    //Bangladesh
    {
        outtextxy(105, 200, "Loading graphics...");
        rectangle(106, 261, 518, 286);
        setfillstyle(SOLID_FILL,GREEN);
        rectangle(433,445,640,540);
        floodfill(607,463,WHITE);
        setfillstyle(SOLID_FILL,RED);
        circle(530,490,30);
        floodfill(520,490,WHITE);
        outtextxy(400,566,"BANGLADESH");

        settextstyle(9,0,3);
        outtextxy(750,240,"Bangladesh");
        outtextxy(650,300,"This is Country of ASIA");
        outtextxy(550,360,"Dhaka is the capital city of Bangladesh");
        readimagefile("logo.jpg",280,50,800,150);



        for(i=113; i<=513; i++)
        {
            rectangle(112, 267, i, 281);
            delay(1);
        }

        delay(1000);
        cleardevice();

        PlaySound("Anthem.wav",NULL,SND_ASYNC);

        for(i=0; i<=250; i++)
        {
//
            delay(15);
//sky color
            setfillstyle(SOLID_FILL,LIGHTBLUE);
            floodfill(914,96,LIGHTBLUE);
//sun
            setSun();

// the flag


            setfillstyle(SOLID_FILL, LIGHTBLUE);
            bar(400, 300-i, 600, 400+i);

            setfillstyle(SOLID_FILL, GREEN);
            bar(400, 300-i, 600, 400-i);

            setfillstyle(SOLID_FILL, RED);
            circle(500, 350-i, 30);
            floodfill(501, 352-i, WHITE);
            //flag stand
            setOthers();
            leftbuilding();
            rightbuilding();
            //delay(100);


        }
        cleardevice();
        int tmr = 0;

        while (!kbhit())
        {
            //sky color
            setfillstyle(SOLID_FILL,LIGHTBLUE);
            floodfill(914,96,LIGHTBLUE);
            setSun();
            setfillstyle(SOLID_FILL, GREEN);
            if(tmr == 0 )
            {
                fillpoly(7, points);
                setfillstyle(SOLID_FILL, RED);
                circle(500, 350-245, 30);
                floodfill(501, 352-255, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }
            else if(tmr == 1)
            {
                fillpoly(7, frame2);
                setfillstyle(SOLID_FILL, RED);
                circle(500, 350-235, 30);
                floodfill(501, 352-255, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }
            else if( tmr == 2)
            {
                fillpoly(5, base);
                setfillstyle(SOLID_FILL, RED);
                circle(500, 350-255, 30);
                floodfill(501, 352-255, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }


            tmr++;
            if(tmr == 3)
                tmr = 0;

            delay(130);
            cleardevice();

        }
    }
    else if(key == '2')    //Japan
    {
        outtextxy(105, 200, "Loading graphics...");
        rectangle(106, 261, 518, 286);

        setfillstyle(SOLID_FILL,RED);
        circle(530,490,30);
        floodfill(520,490,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(433,445,640,540);
        floodfill(607,463,WHITE);
        outtextxy(470,566,"JAPAN");

        settextstyle(9,0,3);
        outtextxy(800,240,"Japan");
        outtextxy(650,300,"This is Country of ASIA");
        outtextxy(600,360,"Tokyo is the capital city of Japan");
        readimagefile("logo.jpg",280,50,800,150);

        for(i=113; i<=513; i++)
        {
            rectangle(112, 267, i, 281);
            delay(1);
        }

        delay(1000);
        cleardevice();

        PlaySound("japan.wav",NULL,SND_ASYNC);

        for(i=0; i<=250; i++)
        {
            cleardevice();
//sky color
            setfillstyle(SOLID_FILL,LIGHTBLUE);
            floodfill(914,96,LIGHTBLUE);
//sun
            setSun();

// the flag

            setfillstyle(SOLID_FILL, RED);
            circle(500, 350-i, 30);
            floodfill(501, 352-i, WHITE);

            setfillstyle(SOLID_FILL, WHITE);
            rectangle(400, 300-i, 600, 400-i);
            floodfill(401, 302-i, WHITE);


            //flag stand
            setOthers();
            leftbuilding();
            rightbuilding();
            bird();
        if(i%2==0)
        {
            handup();
        }
        else
        {
            handdown();
        }
//delay(100);
//cleardevice();
        b=b+3;
            delay(130);
        }
        cleardevice();
        int tmr = 0;

        while (!kbhit())
        {
            //sky color
            setfillstyle(SOLID_FILL,LIGHTBLUE);
            floodfill(914,96,LIGHTBLUE);
            setSun();
            setfillstyle(SOLID_FILL, WHITE);


            if(tmr == 0 )
            {
                setfillstyle(SOLID_FILL, WHITE);
                fillpoly(7, points);
                setfillstyle(SOLID_FILL, RED);
                circle(500, 350-245, 30);
                floodfill(501, 352-255, WHITE);
                setfillstyle(SOLID_FILL, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }
            else if(tmr == 1)
            {
                fillpoly(7, frame2);
                setfillstyle(SOLID_FILL, RED);
                circle(500, 350-235, 30);
                floodfill(501, 352-255, WHITE);
                setfillstyle(SOLID_FILL, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }
            else if( tmr == 2)
            {
                fillpoly(5, base);
                setfillstyle(SOLID_FILL, RED);
                circle(500, 350-255, 30);
                floodfill(501, 352-255, WHITE);
                setfillstyle(SOLID_FILL, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }

            tmr++;
            if(tmr == 3)
                tmr = 0;
            delay(130);
            cleardevice();

        }
    }
    else if(key == '3')    //Palau
    {
        outtextxy(105, 200, "Loading graphics...");
        rectangle(106, 261, 518, 286);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(433,445,640,540);
        floodfill(607,463,WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(520,490,30);
        floodfill(520,490,WHITE);
        outtextxy(470,566,"PALAU");

        settextstyle(9,0,3);
        outtextxy(800,240,"Palau");
        outtextxy(650,300,"This is Country of ASIA");
        outtextxy(550,360,"Melekoek is the Capital City of Palau");
        readimagefile("logo.jpg",280,50,800,150);

        for(i=113; i<=513; i++)
        {
            rectangle(112, 267, i, 281);
            delay(1);
        }

        delay(1000);
        cleardevice();

        PlaySound("Palau.wav",NULL,SND_ASYNC);

        for(i=0; i<=250; i++)
        {
            cleardevice();
//sky color
            setfillstyle(SOLID_FILL,LIGHTBLUE);
            floodfill(914,96,LIGHTBLUE);
//sun
            setSun();

// the flag


            setfillstyle(SOLID_FILL, LIGHTBLUE);
            rectangle(400, 300-i, 600, 400-i);
            floodfill(401, 302-i, WHITE);

            setfillstyle(SOLID_FILL, YELLOW);
            circle(480, 350-i, 30);
            floodfill(481, 352-i, WHITE);
            //flag stand
            setOthers();
            leftbuilding();
            rightbuilding();
            bird();
        if(i%2==0)
        {
            handup();
        }
        else
        {
            handdown();
        }

        b=b+3;
            delay(130);
        }
        cleardevice();
        int tmr = 0;

        while (!kbhit())
        {
            //sky color
            setfillstyle(SOLID_FILL,LIGHTBLUE);
            floodfill(914,96,LIGHTBLUE);
            setSun();
            setfillstyle(SOLID_FILL, LIGHTBLUE);
            if(tmr == 0 )
            {
                fillpoly(7, points);
                setfillstyle(SOLID_FILL, YELLOW);
                circle(480, 350-245, 30);
                floodfill(481, 352-255, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }
            else if(tmr == 1)
            {
                fillpoly(7, frame2);
                setfillstyle(SOLID_FILL, YELLOW);
                circle(480, 350-235, 30);
                floodfill(481, 352-255, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }
            else if( tmr == 2)
            {
                fillpoly(5, base);
                setfillstyle(SOLID_FILL, YELLOW);
                circle(480, 350-255, 30);
                floodfill(481, 352-255, WHITE);
                setOthers();
                leftbuilding();
                rightbuilding();
            }

            tmr++;
            if(tmr == 3)
                tmr = 0;

            delay(130);
            cleardevice();

        }
    }
    else if(key == '0')
    {
        //break;
        closegraph();
    }
    }
    getch();
    closegraph();
}

