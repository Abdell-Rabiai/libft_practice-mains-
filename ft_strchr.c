/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:49:31 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:32:31 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && c != *s)
		s++;
	if (*s == '\0')
		return (0);
	return ((char *)s);
}

// int main()
// {
//     char c = 'z';
//     char *str = "Hello world, it's pretty cold toxday";
//     puts(ft_strchr(str,c));
// }
