/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:57:16 by marvin            #+#    #+#             */
/*   Updated: 2024/08/19 13:57:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int		s;
	int		e;
	int		i;

	i = 0;
	s = 0;
	e = 0;
	while (str[e])
	{
		while (str[e] && str[e] == c)
			e ++;
		s = e;
		while (str[e] && str[e] != c)
			e ++;
		if (s < e)
			i ++;
	}
	return(i);
}

void	freeing_splited(char **splited, int i)
{
	while (i >= 0)
	{
		free(splited[i]);
		i --;
	}
	free(splited);
}

char	**ft_split(const char *str, char c)
{
	char	**splited;
	int		s;
	int		e;
	int		i;

	i = 0;
	s = 0;
	e = 0;
	if (!(splited = ft_calloc(count_words(str, c) + 1, sizeof(char *))))
		return (0);
	while (str[e])
	{
		while (str[e] && str[e] == c)
			e ++;
		s = e;
		while (str[e] && str[e] != c)
			e ++;
		if (s < e)
		{
			if (!(splited[i ++] = ft_strdup_se(str, s, e - 1)))
				return (freeing_splited(splited, i), NULL);
		}
	}
	splited[i] = 0;
	return (splited);
}
