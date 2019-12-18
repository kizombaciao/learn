#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (n--)
	{
		if (*(p1) != *(p2))
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}

int main(void)
{
	char *s = "";
	char c = '\0';
	char *q = "";

	// "" is the address to somewhere in the read only memory
	if (""[0] == '\0')
		printf("LIKE\n");

	if ((*"") == '\0')
		printf("LIKE2\n");

	int len = ft_strlen(s);

	if (s[0] == c)
		printf("SAME  %d\n", len);
	else
		printf("NOT SAME. %d\n", len);

/*
ALSO DOESN'T WORK!	
	if (ft_memcmp((void *)c, (void *)s, 0))
		printf("2 SAME.\n");
	else
		printf("2 NOT SAME.\n");
*/
/*
	if (ft_strcmp(c, s))
		printf("2 SAME.\n");
	else
		printf("2 NOT SAME.\n");
*/

}