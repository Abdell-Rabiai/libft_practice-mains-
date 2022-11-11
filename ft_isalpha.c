/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:41:54 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:41:56 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

static int	ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}

// int main()
// {
// 	char c;
// 	c = 'Z';
// 	printf("\nesult when uppercase alphabet is passed: %d", ft_isalpha(c));

// 	c = 'x';
// 	printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

// 	c = '1';
// 	printf("\nResult when non-alphabetic character is passed: \n%d", ft_isalpha(c));

// 	return 0;
// }
