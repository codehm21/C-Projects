#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//State functions

bool check_valid_cipher(string (s));
bool check_duplicates(string (s));

//Declare variable

int dup, p;
int key [25], position [25];


// Main program

int main(int argc, string argv[])

{
    
    // Only allow 1 input, set cipher requirments, set duplicate requirements
    if (argc !=2 || !check_valid_cipher(argv[1]) || !check_duplicates(argv[1]))
    {
        printf("Usage Subsitition Key \n");
        return 1;
    }

// Get plaintext

    string sub = argv[1];
    string plaintext = get_string("plaintext: ");

//Output Ciphertext    
    printf("Ciphertext: ");

// Iterate over each plaintext, calculate how far each character is from 'A' or 'a' using that as a position of which character from Subsitution text should be printed


    for (int k = 0, lengh = strlen(plaintext); k < lengh; k++)
 
    {   
        char d = plaintext[k];

// Check to see if alphabetic character else print as they are

        if(isalpha(d))
        {
// If Character is uppercase its value is going to be higher so this needs to be accounted for by subtracting 'a' or A'            
            char m = 'A';
            if (islower (d))
            m = 'a';    
            p = d - m;
// sub is the substitution key inputted, as from the above h is 7 away from a so [p] needs to = 7, sub[p] is the 7th position in the substitution key
// therefore printing sub wherever input text position is away from 'a' or 'A'             
            printf("%c", sub[p]);
        }

// ignore anything that is not alphabetic such as white space or , etc
    else
        printf("%c", d);
    }   
        
    
    printf("\n");               
        

}

// Checks: Lengh, sets lengh to 26, checks if all characters are alphabetical
bool check_valid_cipher(string (s))
{
for (int i = 0, len = strlen(s); i < len; i++)
    if ((len != 26) || (!isalpha(s[i])))
    return false;
    return true;
} 

//Checks: Lengh, Nested loop: 1st Loop to check 1st Character [0] 
// 2nd Loop checks against every character againt s[0] once checked 
// First Loop is initiated to i = 1
bool check_duplicates(string (s))
{
    for (int i = 0, len = strlen(s); i < len; i++)
  
//Convert string to one case; upper or lower otherwise lower case 'a' != 'A' and this will not initiate dup++

    {
        for (int j = i + 1, len = strlen(s); j < len; j++)   
        if (tolower(s[i]) == tolower(s[j]))
        dup++;
    }
        {
            if (dup > 0)
            {
            return false;
            }
            {          
            return true;
            }
        }
    }

