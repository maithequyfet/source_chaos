#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer + c) != '\0' )
      c++;
 
   return c;
}

void lower_string(char s[]) {
   int c = 0;
   
   while (s[c] != '\0') {
      if (s[c] >= 'A' && s[c] <= 'Z') {
         s[c] = s[c] + 32;
      }
      c++;
   }
}

void reverse(char *s)
{
   int length, c;
   char *begin, *end, temp;
 
   length = string_length(s);
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}

int isPalindrome(char word[])
{
  // Please write your code here.
  char *revString = NULL;
  int ret = 0;

  revString = (char*)malloc(sizeof(char)*string_length(word));

  strcpy(revString, word);
  reverse(revString);
  lower_string(revString);
  lower_string(word);
  if(!strcmp(revString, word))
  {
    ret = 1;
  }

  return ret;
}

int main()
{
  char word[100];
  if (fgets(word , sizeof(word), stdin) > 0)
  {
   printf("%s", isPalindrome(word) ? "true" : "false");
  }
}
