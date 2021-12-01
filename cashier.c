#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{
      
    float cog = get_float("Amount owed: £");
    float paid = get_float("Amount paid: £");
    float change = (paid-cog);
    const int five = 5, ten = 10, twenty = 20, fifty = 50;
    int fi = 0, te = 0, twen = 0, fif = 0;

    {
        printf("Change: £%.2f", change);
    printf("\n");
    }

    //£50 Notes

    while(fifty <= change)
    for (fifty; fifty<=change; change = change - fifty)
    {
        fif++;
    }
    {
        printf("Give %i Fifty pound notes", fif);
    }
printf("\n");


    //£20 Notes

    while(twenty <= change)
    for (twenty; twenty<=change; change = change - twenty)
    {
        twen++;
    }
    {
        printf("Give %i Twenty pound notes", twen);
    }
printf("\n");


    //£10 Notes

    while(ten <= change)
    for (ten; ten<=change; change = change - ten)
    {
        te++;
    }
    {
        printf("Give %i Ten pound notes", te);
    }
printf("\n");

    // £5 Notes
        
    while(five <= change)
    for (five; five<=change; change = change - five)
    {
        fi++;
    }
    {
        printf("Give %i Five pound notes", fi);
    }
printf("\n");



}
  