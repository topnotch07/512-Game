
#include "prototypes.h"

int score=512;



int last=0;




int Temp_counter()
{
    /**< IT SHOULD FIND MAX VALUE FROM WHOLE MATRI */
    int temp=0,i,j;

    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if(Matrix[i][j]==512)
                return(1);
            if(Matrix[i][j]==0)
                temp=1;
        }
    }
    if(temp==1)
    {
        last=0;
        return(-99);
    }
    else
    {
        if(last==1)
        {
            return(0);
        }
        last=1;
        return(-99);
    }
}


void ending()
{
   /**< *here print prev high score and current score from file */
    printf("\n\n\t\t\t\tYOUR SCORE is  : %d",score);
}

int Action(int Arrow)
{

    switch(Arrow)
    {
        case UP:
            {
                Up();
                break;
            }
        case DOWN:
            {
                /* logic here */
                Down();
                break;
            }
        case LEFT:
            {
                Left();
                break;
            }
        case RIGHT:
            {
                Right();
                break;
            }
        default:
            {
                /*DO NOTHING */
                return;
            }
    }
    score--;
    Random_creater();
    Display();
}
void print_ever()
{
    printf("\n\n\n\t\t\tTarget score: 512\n");
    printf("\t\t\t\t\t\t\t\t SCORE  : %d\n\n\n\n",score);
    printf("\t\t\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER,BORDER);

}




main()
{
    int aro;
    char Arrow;
    char s[]="THANKS FOR PLAYING, GOOD LUCK FOR NEXT TIME ";
    int temp;
    starting();
    Starting_Random();
    Arrow=DOWN;
    while(Arrow!=ESC)  //  HERE IF USER WANT TO EXIT THEN PRESS ESC KEY
    {
        Arrow=getchar();
        aro=Arrow;
        Action(Arrow);
        temp=Temp_counter();
        if(temp==1)
        {
            printf("\n\t\t\tYOU WON");
            ending();
            break;
        }
        if(temp==0 || score<0)
        {
            printf("\n\t\t\tSORRY !  GAME OVER\n");
            break;
        }
    }

    system("cls");
    printf("\n\n\n\t");
    printer(s);
    waitL();
    waitL();
    waitL();
    waitL();
}
