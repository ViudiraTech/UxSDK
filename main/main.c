#include "stdlib.h"
#include "unistd.h"
#include "stdio.h"

int main(void)
{
	printf("现在是APP内部!\n");
	printf("测试分配内存!\n");
	int *p = malloc(1024);
	printf("已经分配的内存地址p: %d\n", p);
	*p = 114514;
	free(p);
	printf("释放了p!\n");
	printf("接下来就是打印字符测试!\n");
	putchar('a');
	putchar('b');
	putchar('c');
	printf("\n接下来测试字符输入：");
	char ch;
	getch(&ch);
	putchar(ch);
	printf("\n很不错，至少到这里没死机就很好了!\n");
	while(1);
}
