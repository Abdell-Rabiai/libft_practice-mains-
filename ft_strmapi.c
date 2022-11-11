/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:33:47 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/30 17:42:31 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char ftolower(unsigned int z, char c)
// {
//     z = -32;
//     if(c >= 'a' && c <= 'z')
//         c = c + z;
//     return (c);
// }


// int main()
// {
// 	char s[] = "hello world from Ayman Lhalwii !! ";
// 	char (*fptr)(unsigned int, char) = &ftolower;
// 	puts(ft_strmapi(s,fptr));
	
// 	return (0);
// }