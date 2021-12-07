#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



int main(void)

{
   
long long creditcard, ccnum, visacard;
int lengh = 0, cclengh = 0, vlengh;

    //Capture Card Number

do

  { creditcard = get_long_long("Number: ");
    ccnum = creditcard;
    visacard = creditcard; 
  } while (ccnum < 0);

  // Get Lengh of Card Number

do
  {
    lengh++;
    creditcard/=10;
  } while (creditcard != 0);

  // Check Lengh of Card Number

  if (lengh == 15 || lengh == 16 || lengh == 13)
{
  // Get first 2 digits of America Express and Mastercard and Visa by dividing until 2 digits and 1 digit for visa
 
    for (cclengh = 0; ccnum > 100; cclengh++)
    {
        ccnum /= 10;
    }
    
    for (vlengh = 0; visacard > 10; vlengh++)
    {
        visacard /=10;
    }

  // Check to see if American Express, Visa or Mastercard

    if ((ccnum == 34 || ccnum == 37 ) && (lengh == 15))
    {
        printf("American Express \n");
        return 0;
    }
    else if ((ccnum > 50 && ccnum < 56) && (lengh == 16))
    {
        printf("Mastercard \n");
        return 0;
    }
     else if ((visacard == 4) && (lengh = 13 || lengh == 16))
    {
        printf("VISA \n");
        return 0;
    }
    else
    {
        printf("INVALID\n");
        return 1;
    }
   
}   printf("INVALID\n");


        
}     

         
