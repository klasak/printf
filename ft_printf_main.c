#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char c;

	c = 'k';
	int a;
	int *test;

	a = 209876;
	test = &a;
	ft_printf("hello\n");
	printf("hello\n");
	ft_printf("%u\n", (unsigned int)3147983649);
	printf("%u\n", (unsigned int)3147983649);
	ft_printf("%u\n", -214748364);
	printf("%u\n", -214748364);
	ft_printf("Hello, this char %c is null\n", 0);
	printf("Hello, this char %c is null\n", 0);
	ft_printf("This %p is even stranger\n", &test);
	printf("This %p is even stranger\n", &test);
	ft_printf("This %p is even stranger\n", (void *)-1);
	printf("This %p is even stranger\n", (void *)-1);
	ft_printf("number: %d, char: %c, number %d\n", 42, 0, 42);
	printf("number: %d, char: %c, number %d\n", 42, 0, 42);
	ft_printf("char %c\n", 0);
	printf("char %c\n", 0);
/* 	ft_printf("Hello, world!");
	ft_printf("%u %X %x\n", -12, -12, -12);
	printf("%u %X %x\n", -12, -12, -12);
 	ft_printf("%d", 25);
	ft_printf("moj printf drukuje: ja\n");
	ft_printf("%%%%");
	printf("%%%%");
	ft_printf("moj printf drukuje: %c %c %c\n", c, c, c);
*/	ft_printf("moj printf drukuje: %p, %x, %p, %x, %p, %x, %p, %x\n", (void *)-209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0);
	printf("printf drukuje: %p, %x, %p, %x, %p, %x, %p, %x\n", (void *)-209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0);
//	ft_printf("moj printf drukuje: %s %s\n", "kkkkassia", "kkkkassia");
//	ft_printf("moj printf drukuje: %d\n", 150678);
//	ft_printf("moj printf drukuje: %i\n", 10678);
//	ft_printf("moj printf drukuje: %u\n", -1987);
//	printf("printf drukuje: %u\n", -1987);
	ft_printf("moj printf drukuje %x %x %x %x %x %x %x %x %x %x\n", 181, 182, 183, 184, 185, 186, 187, 188, 189, 180);
	ft_printf("moj printf drukuje %X %X %X %X %X %X %X %X %X %X\n", 181, 182, 183, 184, 185, 186, 187, 188, 189, 180);
	printf("printf drukuje %x %x %x %x %x %x %x %x %x %x\n", 181, 182, 183, 184, 185, 186, 187, 188, 189, 180);
	printf("printf drukuje %X %X %X %X %X %X %X %X %X %X\n", 181, 182, 183, 184, 185, 186, 187, 188, 189, 180);
	return (0);
}