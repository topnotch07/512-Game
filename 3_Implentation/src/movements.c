#include "prototypes.h"




/** \brief Random_creator
 * performs calculation at random numbers
 * \return void
 */
void Random_creater()
{
    int temp1,temp2,add,i,j;
    srand(time(NULL));
    temp1=rand()%SIZE;  // i

    srand(time(NULL));
    temp2=rand()%SIZE;  // j

    if((temp1+temp2)%2==0)
        add=2;
    else
        add=4;

    for(i=0;i<temp1;i++)
    {
        for(j=temp2;j<SIZE;j++)
        {
            if(Matrix[i][j]==0)
            {
                Matrix[i][j]=add;
                return;
            }
        }
    }
}
/** \brief UP(),DOWN(), LEFT(), RIGHT()
 *  performs respective functions on the grid.
 * \return void
 */


void Down()
{
    int i,j;
    for(j=0;j<SIZE;j++)
    {
        i=2;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(i==-1)
                    break;
                i--;
            }
            if(i==-1)
                break;
            while(i<SIZE-1 && (Matrix[i+1][j]==0 || Matrix[i][j]==Matrix[i+1][j]))
            {
                Matrix[i+1][j]+=Matrix[i][j];
                Matrix[i][j]=0;
                i++;
            }
            i--;
        }
    }
}
void Up()
{
    int i,j;
    for(j=0;j<SIZE;j++)
    {
        i=1;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(i==SIZE)
                    break;
                i++;
            }
            if(i==SIZE)
                break;
            while(i>0 && (Matrix[i-1][j]==0 || Matrix[i][j]==Matrix[i-1][j]))
            {
                Matrix[i-1][j]+=Matrix[i][j];
                Matrix[i][j]=0;
                i--;
            }
            i++;
        }
    }
}
void Right()
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        j=2;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(j==-1)
                    break;
                j--;
            }
            if(j==-1)
                break;
            while(j<SIZE-1 && (Matrix[i][j+1]==0 || Matrix[i][j]==Matrix[i][j+1]))
            {
                Matrix[i][j+1]+=Matrix[i][j];
                Matrix[i][j]=0;
                j++;
            }
            j--;
        }
    }
}
void Left()
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        j=1;
        while(1)
        {
            while(Matrix[i][j]==0)
            {
                if(j==SIZE)
                    break;
                j++;
            }
            if(j==SIZE)
                break;
            while(j>0 && (Matrix[i][j-1]==0 || Matrix[i][j]==Matrix[i][j-1]))
            {
                Matrix[i][j-1]+=Matrix[i][j];
                Matrix[i][j]=0;
                j--;
            }
            j++;
        }
    }
}

