#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	c;
	
	
	if (size >= SIZE_MAX || count >= SIZE_MAX)
		return (NULL);
	c = size * count;
	p = (char *)malloc(c);
	if (!p)
		return (0);
	while (c--)
		*(p + c) = '\0';
	return (p);
}

int main()
{
    void *s = calloc(0,sizeof(char));
	void *p = ft_calloc(0,2);
    printf("<<%p>>\n",s); // 256
	printf("<<%p>>\n sizeof(SIZEMAX) : %zu",p,SIZE_MAX); // 256
}

