/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:39:15 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:39:16 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int main()
{
    char *dst = "ddj";
    char src[] = "Hello world from 1337";
    ft_memcpy(dst,src,21);
    puts(dst);

}

// overlapping case
// int main()
// {
//     char *source = (char*)calloc(40,sizeof(char));
//     char *destination = source + 6;
//     strcpy(source,"AAABBBCCCDDDEEEFFF");
//     printf("Before \n\ndestination : %s \n",destination);
//     printf("source : %s",source);
//     memcpy(destination,source,9);
//     printf("\n\nAfter \n\ndestination : %s \n",destination);
//     printf("source : %s",source);
// }
