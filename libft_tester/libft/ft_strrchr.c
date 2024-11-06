/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:15:38 by hle-hena          #+#    #+#             */
/*   Updated: 2024/11/05 10:17:52 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (char) c)
			last = (char *) str;
		str ++;
	}
	if (*str == (char) c)
		last = (char *) str;
	return (last);
}
