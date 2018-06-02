#include <stdio.h>
#include <math.h>
/*
#define WIDTH 120
#define HEIGHT 40
#define X WIDTH/2
#define Y HEIGHT/2
#define XMAX WIDTH-X-1
#define XMIN -(WIDTH-X)
#define YMAX HEIGHT-Y
#define YMIN -(HEIGHT-Y)+1

char grid[HEIGHT][WIDTH];

int plot(int x, int y);
void init_grid(void);
void show_grid(void);

int main()
{
    float x,y;

    init_grid();
    for(x=-3.14159;x<=3.14159;x+=0.1)
    {
        y = sin(x);
        plot(rintf(x*10),rintf(y*8));
    }
    show_grid();

    return(0);
}

/* Set "pixel" at specific coordinates
int plot(int x, int y)
{
    if( x > XMAX || x < XMIN || y > YMAX || y < YMIN )
        return(-1);

    grid[Y-y][X+x] = '*';
    return(1);
}

/* Initialize grid
void init_grid(void)
{
    int x,y;

    for(y=0;y<HEIGHT;y++)
        for(x=0;x<WIDTH;x++)
            grid[y][x] = ' ';
    /* draw the axis
    for(y=0;y<HEIGHT;y++)
        grid[y][X] = '|';
    for(x=0;x<WIDTH;x++)
        grid[Y][x] = '-';
    grid[Y][X] = '+';
}

/* display grid
void show_grid(void)
{
    int x,y;

    for(y=0;y<HEIGHT;y++)
    {
        for(x=0;x<WIDTH;x++)
            putchar(grid[y][x]);
        putchar('\n');
    }
}
*/

int main(){

  int i=-180, counter=0;
    while(i<=180){
      counter++;
      printf("Sin (%d)=> %llf ->Counter:%d\n",i,(double)sin(i),counter);
      i+=15;
    }
return 0;
}
