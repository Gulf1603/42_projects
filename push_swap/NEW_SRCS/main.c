/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:20:29 by hle-hena          #+#    #+#             */
/*   Updated: 2024/11/19 14:50:24 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(void *content)
{
	printf("[%d] --> ", *(int *)content);
}

int	is_increasing(t_list *lst)
{
	return (do_op(lst, lst->next) > 0);
}

int	is_decreasing(t_list *lst)
{
	return (do_op(lst, lst->next) < 0);
}

int	main(int ac, char **av)
{
	
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	*func;
	int		*values;
	size_t	i;

	i = 0;
	stack_a = get_stack(0);
	stack_b = get_stack(1);
	values = ft_calloc(ac, sizeof(int));
	while (++i <= (size_t)ac - 1)
	{
		values[i - 1] = av[i][0] - '0';
		ft_lstadd_back(stack_a, ft_lstnew(&values[i - 1]));
	}
	printf("\n\n\n");
	printf("Stack a : "); ft_lstiter(*stack_a, &print); printf("\n");
	printf("Stack b : "); ft_lstiter(*stack_b, &print); printf("\n");
	i = -1;
	while (++i < 60)
	{
		if (ft_lstsorted(*stack_a, &is_increasing) && !(*stack_b))
			break ;
		func = init_tests();
		printf("\nExecuting the function [%s]\n\n", func);
		do_func(func, stack_a, stack_b);
		free(func);
		printf("Stack a : "); ft_lstiter(*stack_a, &print); printf("\n");
		printf("Stack b : "); ft_lstiter(*stack_b, &print); printf("\n");
	}
	free_tests(get_cmds());
	free(values);
	ft_lstclear(stack_a, NULL);
	ft_lstclear(stack_b, NULL);
	return (0);
}
