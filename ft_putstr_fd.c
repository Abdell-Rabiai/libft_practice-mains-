/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:37:06 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:37:08 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int main()
{
	int fd = open("foo.txt", O_RDWR | O_CREAT ); 
      
    printf("fd = %d\n", fd);
	ft_putstr_fd("Hello file \n I'm heeeeeeeeeere to help\n ...\n",fd);
	return 0;
}
