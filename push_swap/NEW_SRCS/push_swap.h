/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@students.42perpignan    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:51:58 by hle-hena          #+#    #+#             */
/*   Updated: 2024/11/21 14:43:14 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
#include <stdio.h>

# define FUTUR_SIGHT 7

/*		parser.c		*/
/************************/
void	print(void *content);

/*		parser.c		*/
/************************/
int	*parse_imput(size_t ac, char **av);

/*		get_global.c	*/
/************************/
t_list	**get_stack(int opt);
t_list	**get_cpy(int opt);
char	**get_cmds(void);
int		*get_values(int ac, char **av);

/*		ps_cmd_a.c		*/
/************************/
int		ft_s(t_list **stack, int witch);
int		ft_p(t_list **stack_to, t_list **stack_from, int witch);
int		ft_r(t_list **stack, t_list **chk, int witch);
int		ft_rr(t_list **stack, t_list **chk, int witch);

/*		ps_cmd_ab.c		*/
/************************/
void	ft_sab(t_list **stack_b, t_list **stack_a, int witch);
void	ft_rrab(t_list **stack_b, t_list **stack_a, int witch);
void	ft_rrab(t_list **stack_b, t_list **stack_a, int witch);

/*		tests.c			*/
/************************/
int		do_tests(int pos);

/*		do_func.c		*/
/************************/
int		do_op(t_list *node1, t_list *node2);
int		do_func(char *cmd, t_list **s_a, t_list **s_b);
int		do_rev_func(char *cmd, t_list **s_a, t_list **s_b);

/*		ends.c			*/
/************************/
void	fall_back(void);
void	free_all(void);

#endif