#include <stdio.h>

void chomp(char *string, int tamanho_string) 
{
    for ( int i = 0; i < tamanho_string; i++) 
    {
        if ( string[i] == '\n' )
        { 
        }
    }
}

int ordem (char *string_1, char *string_2, int tamanho_string) 
{
    for ( int i = 0; i < tamanho_string; i++ ) 
    {
        if ( string_1[i] > string_2[i] ) 
        {
            return 1;
        }
    }
    return 2;
}

int main() {
    char string_1[10], string_2[10];

    for ( int i = 0; i < 10; i++ ) 
    {
        string_1[i] = 0;
        string_2[i] = 0;
    }

            printf("Primeiro texto: ");
            fgets(string_1, 10, stdin);
            chomp(string_1, 10);

            printf("Segundo texto: ");
            fgets(string_2, 10, stdin);
            chomp(string_2, 10);

    int volt;

    volt = ordem (string_1, string_2, 10);

        if ( volt == 1 ) {
            printf("%s\n", string_1);
            printf("%s\n", string_2);
    } else {
            printf("%s\n", string_2);
            printf("%s\n", string_1);
            }

return 0;

}
