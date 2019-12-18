#include <stdio.h>


int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' \
		|| c == '\f' || c == '\r' || c == ' ');
}
int	ft_atoi(const char *s)
{
	int n;
	int sign;

	while (ft_isspace(*s++))
		;
	s--;
	sign = 1;
	if (*s == '-')
		sign = -1;
	if (*s == '+' || *s == '-')
		s++;
	n = 0;
	while (ft_isdigit(*s))
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (sign * n);
}

int main()
{
	char s1[] = "4894398524132130";
	char s2[] = "5906754239";

	printf("%d\n", ft_atoi(s1));
	printf("%d\n", ft_atoi(s2));

}
