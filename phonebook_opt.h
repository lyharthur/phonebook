#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16
#define HASH_TABLE_SIZE 2377
/* original version */
typedef struct __PHONE_BOOK_ENTRY {
    //char lastName[MAX_LAST_NAME_SIZE];
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
//    struct __PHONE_BOOK_ENTRY *pNext;
//    struct __PHONE_BOOK_ENTRY *pRight;
//    struct __PHONE_BOOK_ENTRY *pLeft;
} in_entry;

typedef struct __PHONE_BOOL_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    in_entry *detail;
    struct __PHONE_BOOK_ENTRY *pNext;
} entry;

extern entry *hash_table[HASH_TABLE_SIZE];
extern entry *hash_table[HASH_TABLE_SIZE];

int hash(char lastname[]);
entry *findName(char lastName[], entry *pHead);
entry *append(char lastName[], entry *e);

#endif
