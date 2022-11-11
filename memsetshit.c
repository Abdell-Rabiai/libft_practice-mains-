#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *t = (unsigned char *)s;
	while (n > 0)
	{
		if (c == *t)
			return (t);
		n--;
		t++;
	}
	return (NULL);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str_b;

	str_b = b;
	while (len--)
		{
            *str_b = (unsigned char)c;
            str_b++;
        }
	return (b);
}

int main() {
   /* double  *tab, *t;
    double x = 5;
    tab = malloc(sizeof(double)*10 );
    for(int i = 0; i < 10; i++ )
    {
        tab[i] = i;
        printf("%d\n",tab[i]);
    }
    printf("\n\n\n");
    t = ft_memchr(tab,5,10);
    for(int i = 0; i < 5; i++ )
    {
        printf("%d\n",t[i]);
    }
    return 0;*/
    int tab[] = {256,16};
    ft_memset(tab,1337,5);
    printf("%d\n",tab[0]);
    printf("%d\n",tab[1]);

    char s[] = "Hello World";
    ft_memset(s,'x',1);
    printf("%s\n",s);

/*. 0000_0000 0000_0000 0000_0000 0000_0000 : int
    0000_0000 0000_0000 0000_0001 0000_0000 : 256
    0000_0000 0000_0000 0000_0000 0001_0000 : 16

    0000_0000 0000_0000 0000_0101 0011_1001 : 1337
    0011_1001 0011_1001 0011_1001 0011_1001 : after memset for 256
    0000_0000 0000_0000 0000_0000 0011_1001 : after memset for 16*/


/*. 0100-1000 0110 _0101 0110_1100 0110_1100 0110_1111 0010_0000 0101_0111 0110_1111 0111_0010 0110_1100 0110_0100	 : "Hello_World"
    0111_1000	: 'x'
    0100-1000 0110 _0101 0110_1100 0110_1100 0110_1111 0010_0000 0101_0111 0110_1111 0111_0010 0110_1100 0110_0100	 : after memset */
}

