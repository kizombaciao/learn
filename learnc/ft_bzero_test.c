#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, const char *src)
{
	char *p;
	p = dst;
	while ((*p++ = *src++))
		;
	*(--p) = '\0';
	return (dst);
}

void pr(int *p)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
}

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = '\0';
}

void	*ft_memalloc(size_t size)
{
	void *p;
	if (!(p = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(p, size);
	return (p);
}

int main()
{
	// DOESN'T SEEM TO WORK FOR INT ARRAY?
	// because you need to incorporate sizeof(int) as corrected below!
	// shows that void * literally knows nothing, have to specify the bytes
	int *p;
	p = (int *)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
		p[i] = i;
	pr(p);
	ft_bzero((void *)p, sizeof(int) * 10);
	pr(p);

	// IT WORKS FOR STRINGS
	char *s;
	s = (char *)ft_memalloc(10);
	printf("111a %s\n", s);
	s = ft_strcpy(s, "test 123 test 123");
	printf("222a %s\n", s);
	ft_bzero((void *)s, sizeof(char) * ft_strlen(s));
	printf("333a %s\n", s);
}
