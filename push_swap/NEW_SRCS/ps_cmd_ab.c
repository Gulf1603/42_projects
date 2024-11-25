/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cmd_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:51:02 by hle-hena          #+#    #+#             */
/*   Updated: 2024/11/25 15:54:39 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sab(t_list **stack_a, t_list **stack_b, int witch)
{
	ft_s(stack_a, witch);
	ft_s(stack_b, witch);
}

void	ft_rab(t_list **stack_a, t_list **stack_b)
{
	ft_r(stack_a, stack_b, 0);
	ft_r(stack_b, stack_a, 0);
}

void	ft_rrab(t_list **stack_a, t_list **stack_b, int witch)
{
	ft_rr(stack_a, stack_b, witch);
	ft_rr(stack_b, stack_a, witch);
}
