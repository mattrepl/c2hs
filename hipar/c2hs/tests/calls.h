#ifndef _CALLS_H
#define _CALLS_H

int foo ();
float bar (int);
void baz (int x, float y);
char *MyString (void);
typedef char *tString;
void printString (tString str);
void printString2 (tString);

/* type of function `MyString'
 */
typedef char *(*MyStringType) (void);

#endif /* !_CALLS_H */
