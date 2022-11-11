/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:35:48 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/30 17:47:10 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void ft(unsigned int i, char *c)
{
	//i = 100;
	if(*c >= 'a' && *c <= 'z')
    *c = *c + i;
}

int main()
{
    char s[] = "Hello world from the other side of earth";
    ft_striteri(s,&ft);
    puts(s);
}
