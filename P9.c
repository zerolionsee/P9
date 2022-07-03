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
    // if((year%4==0&&year%100!=0)||(year%400==0))
    // {
    //   printf("%d", year);
    //   count++;
    // }
  }
    printf("%d\t\t", count);
    return 0;
} */

//打印100-200之间的素数
//方法1：拭除法
/* #include <stdio.h>
int main()
{
  int i = 0;
  int j = 0;
  int count = 0;
  for (i = 100; i <= 200; i++)
  {
    for (j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        break;
      }
    }
    if (i == j)
    {
      printf("%d\t", i);
      count++;
    }
  }
  printf("\ncount=%d\n", count);
  return 0;
} */

//方法2：
/* #include <math.h>
#include <stdio.h>
int main()
{
  int i = 0;
  int count = 0;
  for (i = 100; i <= 200; i++)
  {
    int j = 0;
    for (j = 2; j <= sqrt(i); j++)
    {
      if (i % j == 0)
      {
        break;
      }
    }
    if (j > sqrt(i))
    {
      count++;
      printf("%d\t", i);
    }
    // return 0;
  }
} */

//方法3：
/* #include <math.h>
#include <stdio.h>
int main()
{
  int i = 0;
  int count = 0;
  for (i = 100; i <= 200; i++)
  // for (i = 101; i <= 200; i+=2)
  {
    int j = 0;
    for (j = 2; j <= sqrt(i); j++)
    {
      if (i % j == 0)
      {
        break;
      }
    }
    if (j > sqrt(i))
    {
      count++;
      printf("%d\t", i);
    }
    // return 0;
  }
  printf("\ncount=%d\n", count);
} */
//素数求解的n种境界

/* #include <stdio.h>
int main()
{
  int a = 0;
  int b = 0;
  for (a = 1, b = 1; a <= 100; a++)
  {
    if (b >= 20)
      break;
    if (b % 3 == 1)
    {
      b = b + 3;
      continue;
    }
    b = b - 5;
  }
  printf("%d\n", a);
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int i = 0;
  int count = 0;
  for (i = 1; i <= 100; i++)
  {
    if (i % 10 == 9)
      count++;
    // else if (i / 10 == 9)
    if (i / 10 == 9)
      count++;
  }
  printf("%d", count);
  return 0;
} */

//求和
/* #include <math.h>
#include <stdio.h>
int main()
{
  int i = 0;
  double s = 0;
  int flag = 1;
  for (i = 1; i <= 100; i++)
  {
    s += flag * (1.0 / i);
    flag = -flag;
  }
  printf("%lf\n", s);
  return 0;
} */

//求最大值
/* #include <stdio.h>
int main()
{
  int i = 0;
  int str[] = {0, 1, 2, 3, 4, 11, 6, 7, 8, 9};
  int max = str[0];
  for (i = 1; i < 10; i++)
  {
    if (max < str[i])
      max = str[i];
  }
  printf("%d", max);
}
 */

//乘法口诀表
/* #include <stdio.h>
int main()
{
  int i = 1;
  int j = 1;
  int s = 0;
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d*%d=%-2d\t",i,j,i*j );
    }
    printf("\n");
  }
} */
/* #include <stdio.h>
void menu()
{
  printf("*******请输入0或1******************\n");
  printf("*****1：进入游戏 0：退出游戏********\n");
  printf("**********************************\n");
}
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// RAND_MAX;
void game()
{
  // srand(1);
  //时间戳：当前计算机时间-计算机起始时间(1970.1.1.0:00:00)=()秒
  int ret = rand()%100+1;
  int guess = 0;
  // printf("%d\n", ret);
  while (1)
  {
    printf("猜猜看>:");
    scanf("%d", &guess);
    if (guess > ret)
      printf("猜大了\n");
    else if (guess < ret)
      printf("猜小了\n");
    else
    {
      printf("猜中了\n");
      break;
    }
  }
}

#include <stdio.h>
int main()
{
  int input = 0;
  srand((unsigned int)time(NULL));
  do
  {
    menu();
    printf("请选择>:");
    scanf("%d", &input);
    // scanf("%d\n", &input);这个出错了，
    switch (input)
    {
    case 0:
      printf("退出游戏\n");
      break;
    case 1:
      game();
      break;
    default:
      printf("选择错误！\n");
      break;
    }
  } while (input);
  return 0; 
}*/
/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char str[] = {0};
  system("shutdown -s -t 120");
  again:
  printf("电脑将在30秒内关机,取消关机，请输入密码");
  scanf("%s", str);
  if (strcmp(str,"pig")==0)    
  { 
    system("shutdown -a");
  }
  else
  {
    goto again;
  }
} */

/* #include <stdio.h>
#include <string.h>
int main()
{
  char str[] = {0};

  int ret;
  printf("输入密码\n");
  scanf("%s", str);
  ret = strcmp(str, "pig");
  printf("%d", ret);
} */

