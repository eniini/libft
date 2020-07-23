/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:23:57 by eniini            #+#    #+#             */
/*   Updated: 2020/07/18 18:59:49 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_freesplit(char **ret)
{
	size_t	i;

	i = 0;
	while (ret[i] != NULL)
	{
		free(ret[i]);
		i++;
	}
	free(ret);
}

static char	*ft_getstring(char const *s, char c, size_t start)
{
	size_t	index;
	char	*string;

	index = 1;
	while (s[start + index] != c && s[start + index] != '\0')
		index++;
	if (!(string = ft_strsub(s, start, index)))
		return (NULL);
	return (string);
}

static char	**ft_initsplit(char const *s, char c)
{
	size_t	wordcount;
	char	**ret;

	wordcount = ft_wordcount(s, c);
	if (!(ret = (char**)malloc(sizeof(ret) * (wordcount + 1))))
		return (NULL);
	if (wordcount == 0)
		ret[0] = NULL;
	ret[wordcount] = NULL;
	return (ret);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ret = ft_initsplit(s, c);
	while (j < ft_wordcount(s, c))
	{
		if (s[i] == c)
			i++;
		if ((s[i] == c && s[i + 1] != c) || (s[i] != c && s[i] != '\0'))
		{
			if (s[i] == c)
				i++;
			if (!(ret[j++] = ft_getstring(s, c, i)))
			{
				ft_freesplit(ret);
				return (NULL);
			}
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (ret);
}
