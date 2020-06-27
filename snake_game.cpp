/*
   programmer: Anand
   Date      : 27/6/2020
*/
#include<iostream>
#include<conio.h>
using namespace std;

bool gameover;
const int width = 20;
const int height =  20;
int x,y,fruitx,fruity,score;
int tailx[100],taily[100],ntail=0;
enum edirection {STOP = 0,LEFT,RIGHT,UP,DOWN};
edirection dir;

void setup()
{
   gameover = false;
   dir = STOP;
   x = width/ 2;
   y = height/ 2;
   fruitx=rand()%width;
   fruity=rand()%height;
   score=0;
}
void draw()
{
    system("cls");
        for(int i=0;i<width+2;i++)
            cout<<"#";
            cout<<endl;
        for(int i=0;i<height;i++)
        {
            for(int j=0;j<width;j++)
                {
                    if(j==0)
                        cout<<"#";
                                  
                   if(i==y && j==x)
                        cout<<"O";

                    else if(i==fruity && j==fruitx)
                        cout<<"F";
                         
                        if(i==y && j==x || i==fruity && j==fruitx ){
                         cout<<""; }
                         else 
                         {
                            bool print = false;
                               for(int k=0;k<ntail;k++)
                                 {
                                   if(tailx[k]==j && taily[k]==i){
                                      cout<<"o";
                                       print =true;    
                                   }
                                 }
                                  if(!print)
                                    cout<<" ";                                                             
                         }                      
                    if(j==width-1)
                        cout<<"#";
                }
                cout<<endl;
        }
            for(int i=0;i<width+2;i++)
                cout<<"#";
                cout<<endl;
                cout<<"Score : "<<score<<endl;
}
void input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
            case 'w':dir = UP;
            break;
            case 's':dir = DOWN;
            break;
            case 'a':dir = LEFT;
            break;
            case 'd':dir = RIGHT;
            break;
        }
    }

}
void logic()
{
    
    int prevx = tailx[0];
    int prevy = taily[0];
    int prevx2,prevy2;
    tailx[0] = x;
    taily[0] = y;
    for(int i=1; i<ntail; i++) //tail following snake logic
        {
          prevx2 = tailx[i];
          prevy2 = taily[i];
          tailx[i] = prevx;
          taily[i] = prevy;
          prevx = prevx2;
          prevy = prevy2;
        }
    switch(dir)
    {
        case LEFT:
        x--;
        break;
        case RIGHT:
        x++;
        break;
        case UP:
        y--;
        break;
        case DOWN:
        y++;
        break;
    }
    if(x<0)           //To pass through wall
        x=width;
    else if(x > width)
        x = 0;
    if(y<0)
        y=height;
    else if(y > height)
        y = 0;
    
    for(int i=0;i<ntail;i++) //when snake hits the tail
       if(x==tailx[i] && y==taily[i])
            gameover = true;

    if(x==fruitx && y==fruity)
        {
           score +=10;
           fruitx=rand()%width;
           fruity=rand()%height;
           ntail++;
        }
}
int main()
{
   setup();
   while(!gameover)
   {
       draw();
       input();
       logic();     
   }
   return 0;
}