/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:15:14 by marvin            #+#    #+#             */
/*   Updated: 2024/08/16 19:15:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *add, size_t n)
{
	size_t	i;

	i = -1;
	while (++ i < n)
		((unsigned char *) add)[i] =  0;
}
