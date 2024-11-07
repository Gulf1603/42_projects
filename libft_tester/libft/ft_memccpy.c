/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:02:45 by hle-hena          #+#    #+#             */
/*   Updated: 2024/11/05 09:48:34 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != (unsigned char)c)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	if (((unsigned char *)src)[i] == (unsigned char)c)
		return (dest ++);
	return (NULL);
}