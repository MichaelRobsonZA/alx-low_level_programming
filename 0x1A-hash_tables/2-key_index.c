#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key
 * @size: The size of the hash table array
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;
    unsigned long int index;

    /* Get the hash value using the hash_djb2 function */
    hash_value = hash_djb2(key);

    /* Calculate the index using the hash value and array size */
    index = hash_value % size;

    return (index);
}

