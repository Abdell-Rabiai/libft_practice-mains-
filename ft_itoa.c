/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:39:52 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:39:54 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_get_length_number(int  n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= (-1);
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			length;
	char		*numbers;

	nbr = n;
	length = ft_get_length_number(n);
	numbers = (char *)malloc(sizeof(char) * length + 1);
	if (!numbers)
		return (NULL);
	if (n == 0)
		numbers[0] = '0';
	numbers[length] = '\0';
	if (nbr < 0)
	{
		numbers[0] = '-';
		nbr = nbr * (-1);
	}
	length--;
	while (nbr)
	{
		numbers[length] = (nbr % 10) + '0';
		nbr = nbr / 10;
		length --;
	}
	return (numbers);
}

// int main()
// {
//     int nbr = 2147483648;
//     printf("%d\n",ft_get_length_number(nbr));
//     char *str;
//     str = ft_itoa(nbr);
//     puts(str); 
// }
