#include "main.h"

int main(void)
{
    /*
      == : egal à
      != : different de
      <  : plus petit que
      >  : plus grand que 
      <= : plus petit ou egal à
      >= : plus grand ou egal à  
      && : ET 
      || : OU 
      !  : NOT
    */
    int compteBanquaire = 256;

    if(compteBanquaire <= 10)
    {
        printf("wsh t pauvre.\n");
    }
    else if (compteBanquaire > 10 && compteBanquaire < 100)
    {
        printf("t biennnggg\n");
    }
    else
    {
        printf("t rich wsh\n");
    }
    return 0;
}
