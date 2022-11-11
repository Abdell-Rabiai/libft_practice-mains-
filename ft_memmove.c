/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:36:58 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 10:37:00 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n-- > 0)
	{
		((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}

// int main()
// {
//     char *dst = (char*)malloc(25*sizeof(char));
//     char *src = (char*)malloc(25*sizeof(char));
//     strcpy(src,"Hello World from 1337");
//     strcpy(dst,"XYZ");
//     ft_memmove(dst,src,21);
//     for (size_t i = 0; i < 21; i++)
//     {
//         printf("%c",dst[i]);
//     }
// }

//  // overlapping case
// int main()
// {
//     char *source = (char*)calloc(40,sizeof(char));
//     char *destination = source + 6;
//     strcpy(source,"AAABBBCCCDDDEEEFFF");
//     printf("Before \n\ndestination : %s \n",destination);
//     ft_memmove(destination,source,9);
//     printf("\n\nAfter \n\ndestination : %s \n",destination);
// }
