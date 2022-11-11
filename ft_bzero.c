/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:43:14 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:43:16 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//  The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing
//  The bzero() function places n zero-valued bytes in the area pointed to by s.

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		//*((unsigned char *)s + i) = '\0';
		i++;
	}
}

// int main()
// {
//     char *s = (char *)malloc(5 * sizeof(char));
//     s[0] = 'Z'; s[1] = 'Y'; s[2] = 'W'; s[3] = 'P'; s[4] = 'B';
//     ft_bzero(s,3);
//     for (size_t i = 0; i < 5; i++)
//     {
//         // printf("%c\t",'X');
//         printf("%c\t",s[i]);
//     }
// }
