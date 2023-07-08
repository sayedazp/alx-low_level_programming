#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "betty", "");
    hash_table_set(ht, "betty", "s");
    hash_table_set(ht, "hetairas", "cosssol");
    hash_table_set(ht, "mentioner", "caaaool");
    hash_table_set(ht, "heliotropes", "cool");
    hash_table_set(ht, "neurospora", "cool");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
