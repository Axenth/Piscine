#include<stdio.h>

void ft_putchar(char c);
void ft_putstr(char *str);
void	ft_swap(int *a, int *b);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);


int main(void)
{
	char s1[] = "Hello world";
	char s2[] = "lo";

	ft_putchar('a');
	ft_putchar('\n');
	ft_putstr("hello");
	ft_putchar('\n');
	printf("%d",ft_strcmp(s1, s2));
	ft_putchar('\n');

	//printf("%d", ft_strlen("test 6"));
	ft_putchar('\n');
	ft_swap (s1,s2);
	
	printf("%s", s1);
}