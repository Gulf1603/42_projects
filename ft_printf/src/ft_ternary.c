/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:46:59 by hle-hena          #+#    #+#             */
/*   Updated: 2024/11/04 13:47:05 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long int	ft_tern_int(int cnd, long long int val1, long long int val2)
{
	if (cnd)
		return (val1);
	return (val2);
}

char	*ft_tern_str(int cnd, char *ret1, char *ret2)
{
	if (cnd)
		return (ret1);
	return (ret2);
}
