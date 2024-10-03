#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

string encrypt(string plaintext, string key);

int main(int argv, string argc[])
{
    if (argc[2] || !argc[1])
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if ( strlen(argc[1]) != 26 )
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    string key = argc[1];
    for (int i = 0, len = strlen(key); i < len; i++)
    {
        char c = key[i];
        if ( c >= 'a' && c <= 'z')
        {
            key[i] = (char) c - 32;
        }
    }

    for (int i = 0, len = strlen(key); i < len; i++)
    {
        char c = key[i];
        if ( !( c >= 'A' && c <= 'Z'))
        {
            printf("invalid character\n");
            return 1;
        }

        for (int j = 0; j < len; j++){
            if ( !(i == j) )
            {
                if ( key[i] == key[j] )
                {
                    printf("duplicate value\n");
                    return 1;
                }
            }
        }
    }

    string plaintext = get_string("plaintext: ");
    string ciphertext = encrypt(plaintext, key);
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}

string encrypt(string plaintext, string key)
{
    string ciphertext = plaintext;

    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        char c = plaintext[i];

        if ( c >= 'A' && c <= 'Z')
        {
            ciphertext[i] = key[c - 'A'];
        }
        else if ( c >= 'a' && c <= 'z')
        {
            ciphertext[i] = (char) key[c - 'a'] + 32;
        }
        else
        {
            ciphertext[i] = c;
        }
    }

    return ciphertext;
}