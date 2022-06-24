/* #include <stdio.h>
int main()
{
  printf("%d\n", sizeof(char *));
} */
//指针的大小要么是4个字节，要么是8个字节
/* #include <stdio.h>
int sum(int a)
{
  int c = 0;
  static int b = 3;
  c += 1;
  b += 2;
  return (a + b + c);
}
int main()
{
  int i;
  int a = 2;
  for (i = 0; i < 5;i++)
  {
    printf("%d", sum(a));
  }
} */

/* #include <stdio.h>
int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  printf("input a= b= c=\n");
  scanf("%d%d%d", &a, &b, &c);
  if(a<b)
  {
    int temp = a;
    a = b;
    b = temp;
  }
  if(a<c)
  {
    int temp = a;
    a = c;
    c = temp;
  }
  if(c>b)
  {
    int temp = b;
    b = c;
    c = temp;
  }
  printf("%d%d%d", a, b, c);
} */

/* #include <stdio.h>
int main()
{
  int i = 0;
  for (i = 0; i < 10;i++)
  {
    if(i=5)
      printf("%d\n", i);
  }
  return 0;
} */

/* int func(int a)
{
  int b;
  switch (a)
  {
  case 1:
    b = 30;
  case 2:
    b = 20;
  case 3:
    b = 16;
  default:
    b = 0;
  }
  return b;
}
 */

/* #include <stdio.h>
int main()
{
  int x = 3;
  int y = 3;
  switch (x % 2)
  {
  case 1:
    switch (y)
    {
    case 0:
      printf("first");
    case 1:
      printf("second");
    default:
      printf("third");
      break;//如果沒有break ,继续向下执行
    }
  case 2:
    printf("hello");
  default:
    break;
  }
} */
//最大公约数,方法1
/* #include <stdio.h>
int main()
{
  int a;
  int b;
  int i;
  int max;
  printf("input a b");
  scanf("%d%d", &a, &b);
  for (i = 1; i <= a && i <= b; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      max = i;
    }
  }
    printf("%d", max);
}
 */
/* //最大公约数,方法2
#include <stdio.h>
int main()
{
  int a;
  int b;
  int i;
  int max;
  printf("input a b");
  scanf("%d%d", &a, &b);
  while(a%b)
  {
    i = a % b;
    a = b;
    b = i;
  }
  printf("%d", b);
} */

//闰年
/* #include <stdio.h>
int main()
{
  int year = 0;
    int count = 0;
  for (year = 1; year <= 100; year++)
  {
    if (year % 4 == 0 && year % 100 != 0)
    {
      printf("%d\t", year);
      count++;
    }
    else if (year % 400 == 0)
    {
      printf("%d\t", year);
      count++;
    }
    //return 0;
  }
    printf("%d\t\t", count);
} */
