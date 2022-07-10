#ifndef TABLE_H_
#define TABLE_H_
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#define TABLE_MAX_PAGES 100

typedef struct {
    uint32_t num_rows;
    void* pages[TABLE_MAX_PAGES];
}Table;

Table* new_table();

void free_table(Table* table);

#endif // TABLE_H_