#include"prototypes.h"

/**< waiting time for screen to load */

void wait()
{
    int i;
    for(i=0;i<4500000;i++);

}
void waitL()
{
    int i;
    for(i=0;i<25;i++)
    {
        wait();
    }
}
