/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:35:20 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:35:23 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;

	i = 0;
	dest_length = strlen(dst);
	src_length = strlen(src);
	if (dstsize < dest_length)
		return (src_length + dstsize);
	while (i < dstsize - dest_length - 1 && src[i] != '\0')
	{
		dst[i + dest_length] = src[i];
		i++;
	}
	dst[i + dstsize] = '\0';
	return (dest_length + src_length);
}

// int main()
// {
//     size_t dstsize = 10; //try 30
//     char dest[dstsize];

//     strcpy(dest,"Hello world"); // 12
//     char src[] = "from 1337"; // 10

//     char dest_c[dstsize];
//     strcpy(dest_c,"Hello world"); // 12
//     char src_c[] = "from 1337 and i'm here to make a change"; // 10

//     printf("ft_strlcat() ; %lu \t\t dest = %s",ft_strlcat(dest,src,dstsize),dest);
//     //printf("\n\n>>>strlcat() ; %lu \t\t dest = %s",strlcat(dest_c,src_c,dstsize),dest);
// }
