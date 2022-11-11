/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:40:15 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:40:16 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}

// int main()
// {
//     char c;
//     c='8';
//     printf("Result when numeric character is passed: %d", isdigit(c));

//     c='/';
//     printf("\nResult when non-numeric character is passed: %d", isdigit(c));

//     return 0;
// }

