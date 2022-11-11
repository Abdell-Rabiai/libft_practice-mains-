/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:32:42 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:32:43 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (l > 0 && c != *(s + l))
		l--;
	if (l == 0 && c != *s)
		return (0);
	return ((char *)(s + l));
}

// int main()
// {
//     char c = 'p';
//     char *str = "Hpllo orld, it's pretty cold today";
//     puts(ft_strrchr(str,c));
//     puts(strrchr(str,c));
// }
