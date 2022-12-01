#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <dos.h>
#include <time.h>

void gotoxy(int x,int y){
    COORD c={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void call(int digit, int x, int y){
    switch (digit)
    {    
        case 0:
            zero(x, y);
            break;
        case 1:
            one(x, y); 
            break;
        case 2: 
            two(x, y); 
            break;
        case 3: 
            three(x, y); 
            break;
        case 4: 
            four(x, y); 
            break;
        case 5: 
            five(x, y); 
            break;
        case 6: 
            six(x, y); 
            break;
        case 7: 
            seven(x, y); 
            break;
        case 8: 
            eight(x, y); 
            break;
        case 9: 
            nine(x, y); 
            break;
    }
}

void zero (int x, int y) {
    int i, j;
    for (i=1; i<=9; i++ ){
        for(j=1; j<=5; j++)
        {
            gotoxy(x,y);
            if(i==1|| i==9 || j==1 || j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            x++;
        }
        y++;
        x = x -5;
        printf("\n");
    }
}

void one (int x, int y) 
{

    int i,j;
    for (i=1;i<=9; i++ )
    {
        for(j=1; j<=5; j++)
        {
            gotoxy(x, y);
            if(j==3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
         x++;
        }
        y++;
        x = x-5;
        printf("\n");
    }
}

void two (int x, int y) 
{
    int i ,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
        gotoxy(x, y);
        if( i==1 || i==5|| i==9 || (i<5 && j==5) || (j==1 && i>5))
        {
             printf("*");
        }else
        {
            printf(" ");
        }

        x++;
    }
        y++;
        x = x-5;
        printf("\n");
    }

}

void three (int x, int y) 
{
    int i ,j;
    for(i=1;i<=9;i++){

        for(j=1;j<=5;j++)
        {
        gotoxy(x, y);
        if( i==1 || i==5|| i==9 || j==5)
        {
           printf("*");
        }
        else
        {
            printf(" ");
        }
        x++;
        }
        y++;
        x = x-5;
        printf("\n");
        }


     }

void four (int x, int y) {
    int i ,j;
    for(i=1;i<=9;i++)
    {
       for(j=1;j<=5;j++)
       {
        gotoxy(x, y);
         if(i==5|| j==5 || (j==1 && i<5))
         {
            printf("*");
        }
        else
        {
            printf(" ");
        }

          x++;
        }
        y++;
        x = x-5;
        printf("\n");
        }
}

void five (int x, int y){
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            gotoxy(x, y);
            if (i == 1 || i == 5 || i == 9 || (i > 5 && j == 5)|| (j == 1 && i < 5)){
            printf ("*");
    }
    else
    {
        printf (" ");
    }
    x++;
    }
    y++;
    x = x-5;
    printf ("\n");
    }

}

void six (int x, int y) 
{
    int i ,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
            gotoxy(x, y);
            if( i==1 || i==5|| i==9 || j==1 || (j==5 && i>5))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            x++;
        }
        y++;
        x = x-5;
        printf("\n");
        }
    }

void seven (int x, int y) 
{
    int i ,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
            gotoxy(x, y);
            if( i==1 || j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
                }
                x++;
                }
                y++;
                x = x-5;
                printf("\n");
                }
}

void eight (int x, int y)
{
    int i ,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
    {
    gotoxy(x, y);
    if( i==1 || i==5|| i==9 || j==1 || j==5)
    {
        printf("*");
    }
    else
    {
        printf(" ");
    }
    x++;
    }
    y++;
    x = x-5;
    printf("\n");
    }

}

void nine (int x, int y)
{
    int i ,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
            gotoxy(x, y);
            if(j==5|| i==5 || i==9 || i==1 || (j==1 && i<5))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            x++;
        }
        y++;
        x = x-5;
        printf("\n");
        }

}

void colon (int x, int y) 
{
    int i ,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
            gotoxy(x, y);
            if((j==3 && i==3) || (j ==3 && i==7))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
            x++;
            }
            y++;
            x = x-5;
            printf("\n");
    }
}

void gettime()
{
    int hour;
    int min;
    int sec;
    
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    hour = tm.tm_hour;
    min = tm.tm_min;
    sec = tm.tm_sec;

    call(hour/10, 10, 7);
    call(hour%10, 19, 7);
    colon(25, 7);

    call(min/10, 31, 7);
    call(min%10, 40, 7);
    colon(45, 7);

    call(sec/10, 52, 7);
    call(sec%10, 61, 7);
}

void main ()
{ 
    int i = 1;
    while(1)
    {
        gettime();
        i++;
    }
    getch();
}
