/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:31:42 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/18 11:31:44 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_exist_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	get_length_to_skip(const char *s1, const char *set)
{
	int	i;

	i = 1;
	while (is_exist_in_set(s1[ft_strlen(s1) - i], set))
		i++;
	return (i - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrimed;
	int		len;

	if (!s1 || !set)
		return (NULL);
    len = ft_strlen(s1);
	while (*s1 && is_exist_in_set(*s1, set) && len--)
		s1++;
    if (!len)
        return ((char *)s1);
    // printf("%d\n",get_length_to_skip(s1, set));
    // printf("%d\n",ft_strlen(s1));
	len = ft_strlen(s1) - get_length_to_skip(s1, set) + 1;
    // printf("%d\n",len);
	strtrimed = (char *)malloc(sizeof(char) * (len));
	if (!strtrimed)
		return (NULL);
	ft_strlcpy(strtrimed, s1, len);
	return (strtrimed);
}

// int main()
// {
//     char *s1 = "abccccacacbaHello world from the other side of earthcccbbbaaaccabacba";
//     char *set = "abc";
//     char *strtrimed = ft_strtrim(s1,set);
//     puts(strtrimed);
// }
