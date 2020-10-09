/* Reverse Each string in a table
Write a c functionto reverse each string in given table of strings(2D char array)
Assume that each string has max length of 20 and table will have maximum of 32 stringsand no spaces in any string.
input will have no.of strings and each string separated by space or new line.
output will be reversed string, printed one per line.
*/

#include <stdio.h>
#include <string.h>

void strrev(char* ptr)
{
  char *end = ptr+ strlen(ptr)-1;
  while(ptr<end)
  {
    char temp = *ptr;
    *ptr = *end;
    *end = temp;
    ptr++;
    end--;
  }
}

void reverseStrings(char (*table)[21], int n)
{
  int i;
  for(i=0; i<n; i++)
  {
    strrev(table[i]);
    printf("%s\n", table[i]);
  }
}

int main() {

  int i,n;
  scanf("%d", &n);
  char tstr[32][21];

  for(i=0; i<n; i++)
  {
    scanf("%s", tstr[i]);
  }
  reverseStrings(tstr, n);
  return 0;
}
