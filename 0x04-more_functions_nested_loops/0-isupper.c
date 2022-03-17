#include "main.h"
/**
*_isupper:checks for uppercase letters
*@c: character to test
*returns 1 if its a upperCase and 0 if its not
*/
 int _isupper(int c)
 {
     if (c >='A' && c <='Z')
     {
         return (1);
     }
     else
     {
         return (0);
     }
 }