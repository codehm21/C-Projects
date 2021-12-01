#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{
    // Multiplied change by 100, rounded up, convert to pence display in pounds
    // to solve bug with roundings - 0.05 not being recognised
      
    float cog = get_float("Amount owed: £");
    float paid = get_float("Amount paid: £");
    float change = roundf((paid-cog)*100);
    const int five = 500, ten = 1000, twenty = 2000, fifty = 5000;
    const int twopound = 200, onepound = 100, fiftyp = 50, twentyp = 20, tenp = 10, fivep = 5, twopence = 2, onepence = 1; 
    int ff = 0, tt = 0, t = 0, f = 0, twp = 0, op = 0, ffp = 0, ttp = 0, tp = 0, fp = 0, twop = 0, onep = 0; 

    
    {
        printf("Change: £%.2f", change/100);
    printf("\n");
    }


    //£50 Notes

    while(fifty <= change)
    for (fifty; fifty<=change; change = change - fifty)
    {
        ff++;
    }
    if (ff!=0)
    {
        printf("Give %i Fifty pound notes", ff);
        printf("\n");
    }


    //£20 Notes

    while(twenty <= change)
    for (twenty; twenty<=change; change = change - twenty)
    {
        tt++;
    }
    if (tt!=0)
    {
        printf("Give %i Twenty pound notes", tt);
        printf("\n");
    }


    //£10 Notes

    while(ten <= change)
    for (ten; ten<=change; change = change - ten)
    {
        t++;
    }
    if (t!=0)
    {
        printf("Give %i Ten pound notes", t);
        printf("\n");
    }

    // £5 Notes
        
    while(five <= change)
    for (five; five<=change; change = change - five)
    {
        f++;
    }
    if (f!=0)
    {
        printf("Give %i Five pound notes", f);
        printf("\n");
    }

    // £2
        
    while(twopound <= change)
    for (twopound; twopound<=change; change = change - twopound)
    {
        twp++;
    }
    if (twp!=0)
    {
        printf("Give %i Two pound", twp);
        printf("\n");
    }

    // £1
        
    while(onepound <= change)
    for (onepound; onepound<=change; change = change - onepound)
    {
        op++;
    }
    if (op!=0)
    {
        printf("Give %i One pound", op);
        printf("\n");
    }

    // £0.50
        
    while(fiftyp <= change)
    for (fiftyp; fiftyp<=change; change = change - fiftyp)
    {
        ffp++;
    }
    if (ffp!=0)
    {
        printf("Give %i Fifty Pence", ffp);
        printf("\n");
    }

    // £0.20
        
    while(twentyp <= change)
    for (twentyp; twentyp<=change; change = change - twentyp)
    {
        ttp++;
    }
    if (ttp!=0)
    {
        printf("Give %i Twenty Pence", ttp);
        printf("\n");
    }
    // £0.10
        
    while(tenp <= change)
    for (tenp; tenp<=change; change = change - tenp)
    {
        tp++;
    }
    if (tp!=0)
    {
        printf("Give %i Ten Pence", tp);
        printf("\n");
    }
  // £0.05
        
    while(fivep <= change)
    for (fivep; fivep<=change; change = change - fivep)
    {
        fp++;
    }
    if (fp!=0)
    {
        printf("Give %i Five Pence", fp);
        printf("\n");
    }

    while(twopence <= change)
    for (twopence; twopence<=change; change = change - twopence)
    {
        twop++;
    }
    if (twop!=0)
    {
        printf("Give %i Two Pence", twop);
        printf("\n");
    }


    while(onepence <= change)
    for (onepence; onepence<=change; change = change - onepence)
    {
        op++;
    }
    if (op!=0)
    {
        printf("Give %i One Pence", op);
        printf("\n");
    }

}
  