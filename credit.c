#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



int main(void)

{
   
long long creditcard, ccnum, visacard, card , cscard;
int lengh = 0, cclengh = 0, vlengh;
int s, digit, sum = 0, p, c, lohnsum;

    //Capture Card Number

do

  { creditcard = get_long_long("Number: ");
    ccnum = creditcard;
    visacard = creditcard; 
    card = creditcard;
    cscard = creditcard; 
  } while (ccnum < 0);

  // Get Lengh of Card Number

do
  {
    lengh++;
    creditcard/=10;
  } while (creditcard != 0);
  
// Lohns Algorithm, take every other digit multiply by 2 

        while (card > 9)
        {
          card /= 10;
          digit = card % 10;
          p = digit *= 2; 
          card /= 10;

// If awnser of multiplication is greater than 10, add the two products together

          if (p > 9)
            {
              s = p %= 10;
              c = 1;
              p = s + c;
            }        
// Add to one total and divide by 10 once more to get every other digit on next loop
             sum = sum + p;
            
        }
// Sum every digit that was not multiplied
        while (cscard > 0)
        {
          digit = cscard % 10;
          sum = sum + digit;
          cscard = cscard/100;
          lohnsum = sum % 10;
        } 
         

  // Get first 2 digits of America Express and Mastercard and Visa by dividing until 2 digits and 1 digit for visa
 
    for (cclengh = 0; ccnum > 100; cclengh++)
    {
        ccnum /= 10;
    }
    
    for (vlengh = 0; visacard > 10; vlengh++)
    {
        visacard /=10;
    }

  // Check to see if American Express, Visa or Mastercard and if Last Digit of Sum = 0
    
    
        if ((ccnum == 34 || ccnum == 37) && (lengh == 15 && lohnsum == 0))
        {
        printf("American Express \n");
        return 0;
        }    
        else if (ccnum > 50 && ccnum < 56 && lengh == 16 && lohnsum == 0)
        {
        printf("Mastercard \n");
        return 0;
        }
        else if ((visacard == 4) && (lengh == 13 || lengh == 16) && (lohnsum == 0))
        {
        printf("VISA \n");
        return 0;
        }
        else
        {
        printf("INVALID\n");
        return 1;
        }
}  