#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEY_LEN 18

void generate_key(char *username, char *key)
{
    int i;

    /* Generate key */
    for (i = 0; i < KEY_LEN; i++)
    {
        key[i] = (username[i % strlen(username)] ^ i) + 10;
    }
    key[KEY_LEN] = '\0';
}

int main(int argc, char **argv)
{
    char *username, *key;
    int i;

    /* Check command-line arguments */
    if (argc != 2)
    {
        printf("Usage: %s <username>\n", argv[0]);
        return 1;
    }

    /* Allocate memory for username and key */
    username = strdup(argv[1]);
    key = (char *) malloc(KEY_LEN + 1);

    /* Generate key */
    generate_key(username, key);

    /* Print key */
    printf("Key: %s\n", key);

    /* Free memory */
    free(username);
    free(key);

    return 0;
}

