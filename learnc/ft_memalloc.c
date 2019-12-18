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
char	*ft_strnew(size_t size)
{
	// don't you need (char *) typecasting here ???
	return (ft_memalloc(size + 1)); 
	//return ((char *)ft_memalloc(size + 1)); 
}
// https://www.geeksforgeeks.org/type-conversion-c/

int main()
{
	char *s = "12345";
	char *s2 = ft_strnew(ft_strlen(s));
}