#include<stdio.h>
void main()
{
  char c;
  printf("enter  any char");
  scanf("%c",&c);
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
  {
    printf(" %c is vowels");
  }
  else
  {
    printf("% c is  consonant");
  }
}
