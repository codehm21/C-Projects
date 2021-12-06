#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



int main(void)

{
   
long long creditcard, ccnum;
int lengh = 0;

do

  { creditcard = get_long_long("Number: ");
    ccnum = creditcard; 
  } while (ccnum < 0);

do
  {
    lengh++;
    creditcard/=10;
  } while (creditcard != 0);

  if (lengh !=3)
  {
    printf("INVALID \n");
    return 1;
  }

  for (lengh = 0; lengh < 1; lengh++)
  {
    ccnum /= 10;
  }

  if (ccnum != 34 && ccnum !=37) 
    {
      printf("INVALID \n");
      return 1;
    }
  else 
    {
    printf("American Express \n");
    return 0;
    }   
        
}     

         
