/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabiai <arabiai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:36:34 by arabiai           #+#    #+#             */
/*   Updated: 2022/10/31 20:47:35 by arabiai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_how_many_words(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static int	ft_get_length_of_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static char	*return_the_first_word(const char *s, char c)
{
	int		i;
	int		length;
	char	*word;

	i = 0;
	length = ft_get_length_of_word(s, c);
	word = (char *)malloc(sizeof(char) * length + 1);
	if (!word)
		return (NULL);
	while (i < length)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char **ft_free_malloc_if_error(char **strings)
{
    int i = 0;
    while(!strings[i])
    {
        free(strings[i]);
        i++;
    }
    free (strings);
    return NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strings = (char **)malloc(sizeof(char *) * (ft_how_many_words(s, c) + 1));
	if (!strings)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		j = 0;
		if (*s)
		{
			strings[i] = return_the_first_word(s, c);
			if(!strings[i])
			    return ft_free_malloc_if_error(strings);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	strings[i] = 0;
	return (strings);
}

// int main()
// {
//     char *s = " Hello world from the other side of earth ";
//     char c = ' ';
//     int count = ft_how_many_words(s,' ');
//     printf("how many words : %d\n",count);
//     printf("length of the first word : %d \n",ft_get_length_of_word(s,c));
//     char ** strings = ft_split(s,c);
//     while(*strings)
//      {
//            puts(*strings);
//            strings++;
//      }
// }
