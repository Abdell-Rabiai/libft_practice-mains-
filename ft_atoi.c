/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:43:36 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:43:38 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_iswspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	unsigned long	res;

	sign = 1;
	res = 0;
	while (*str && ft_iswspace(*str))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		res *= 10;
		res += *str - '0';
		if (sign > 0 && res >= 9223372036854775807)
			return 	(-1);
		if (sign < 0 && res >= 9223372036854775808UL)
			return 	(0);
		str++;
	}
	return (res * sign);
}
int main(void)
{
    int i = 0, j = 0;
    char *s;
    s = "   \t\v\r\f\n     2147483647hello ";
    i = atoi(s);     /* i = -9885 */
    j = ft_atoi(s);
    printf("i = %d\n",i);
    printf("j = %d\n",j);
}
