/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:33:22 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:33:24 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*nee;
	size_t		i;
	size_t		j;

	hay = (char *)haystack;
	nee = (char *)needle;
i = 0;
j = 0;
	if (nee[j] == '\0')
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (nee[j] == hay[i + j] && hay[i + j] != '\0' && (i + j) < len)
			j++;
		if (nee[j] == '\0')
			return (hay + i);
		i++;
	}
	return (0);
}

// int main()
// {
//     char *hay = "Hello world the other side of earth";
//     char *nee = "other";
//     puts(ft_strnstr(hay,nee,19));
//     puts(strnstr(hay,nee,19));
// }
