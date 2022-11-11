/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:19:06 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:19:36 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*(s1 + i) || *(s2 + i)) && i < n)
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		else
			i++;
	}
	return (0);
}

// int main()
// {
//     char *s1 = "Hello\0world";
// 	char *s2 = "Hello\0world";
//     printf(">>>strncmp %d\n",(strncmp(s1,s2,12)));
//     printf("ft_strncmp %d\n",(ft_strncmp(s1,s2,12)));
// }
