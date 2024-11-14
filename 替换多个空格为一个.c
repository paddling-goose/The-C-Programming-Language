/*复制输入字符，且有多个连续空格时只输出一个*/
#include<stdio.h>
int main()
{ 
	int c;
   while ((c = getchar()) != EOF){
	   if (c == ' '){
		 putchar(c);
         while ((c = getchar()) == ' ');  //吃掉多余的空格
	   }
	 putchar(c);
   }
	   return 0;
}
