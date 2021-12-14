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
char Alphabet[25];

// Main program

int main(int argc, string argv[])

{
    
    // Only allow 1 input, set cipher requirments, set duplicate requirements
    if (argc !=2 || !check_valid_cipher(argv[1]) || !check_duplicates(argv[1]))
    {
        printf("Usage Subsitition Key \n");
        return 1;
    }

    string sub = argv[1];
    string plaintext = get_string("plaintext: ");

       for (int i = 0, len = strlen(sub); i < len; i++)
   
        for (int k = 0, lengh = strlen(plaintext); k < lengh; k++)
    {   
        char d = plaintext[k];
        char c = sub[i]; 
        if(isalpha(c))
        {
        char m = 'A';
        if (islower (c))
        m = 'a';    
        position[i]= d - m;
        p = position[i];
        key[i] = c - m;
        }
          
        printf("%c,", sub[p]);
                       
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

    {
        for (int j = i + 1, len = strlen(s); j < len; j++)     
        if (s[i] == s[j])
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

