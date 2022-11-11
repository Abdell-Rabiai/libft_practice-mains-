#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char			*str;

	i = 0; 
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int main()
{
    int *s = (int *)malloc(5 * sizeof(char));
    s[0] = 520; s[1] = 368; s[2] = 809; s[3] = 710; s[4] = 300;
    ft_bzero(s,5);
	/*0000_0000 0000_0000 0000_0011 111_1110 / 0000_0000 0000_0000 0000_0001 0111_0000 / 0000_0000 0000_0000 0000_0000 0000_0011 */
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\t",s[i]); // 0 256 809 710 300 
    }
}

