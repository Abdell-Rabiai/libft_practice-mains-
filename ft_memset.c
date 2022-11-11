/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:39:56 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 10:39:59 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	 char	*str_b;

	i = 0;
	str_b = ( char *)b;
	while (i < len)
	{
		*(str_b + i) = ( char)c;
		i++;
	}
	return (b);
}

int main()
{
    char *s = (char *)malloc(5 * sizeof(char));
    s[0] = 'Z'; s[1] = 'Y'; s[2] = 'W'; s[3] = 'P'; s[4] = 'B';
    ft_memset(s,219,3);  // M M M P B
    for (size_t i = 0; i < 5; i++)
    {
        // printf("%c\t",'X');
        printf("%c\t",s[i]);
    }
    return 0;
}
