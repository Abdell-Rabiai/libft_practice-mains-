/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:24:14 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 10:25:50 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if ((unsigned char)c == *(unsigned char *)s)
			return ((unsigned char *)s);
		n--;
		s++;
	}
	if (*(unsigned char *)s == 0 || n == 0)
		return (0);
	else
		return ((unsigned char *)s);
}

// int main()
// {
//     char c = '\0';
//     size_t n = 40;
//     char *str = "Hello worl\0d, it's pretty cold toxday";
//     puts(ft_memchr(str,c,n));
//     puts(memchr(str,c,n));
// }

/* 
int main()
{
    int c = 148;  //148 : 1001_0100
    //size_t n = 10;
    //char *str = "Hello worl\0d, it's pretty cold toxday";
    int s[9] = {1,2,3,4,5268,6028,7,8,9};
	// 5268 ; 0000_0000 0000_0000 0001_0100 1001_0100
	// 6028 : 0000_0000 0000_0000 0001_0111 1000_1100
    char *p = ft_memchr(s,c,36);
    for(int i = 0; i < 20; i++){
      printf("%d\t",p[i]);
    }
    //puts(memchr(s,c,36));
}
/*0000_0000 0000_0000 0001_0100 1001_0100 /0000_0000 0000_0000 0001_0111 1000_11000 / 0000_0000 0000_0000 0000_0000 0000_0111 */

// The output // -108 20 0 0 -116 23 0 0 7 0 0 0 8 0 0 0 9 0 0 0 
*/
