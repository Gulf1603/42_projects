/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:15:32 by marvin            #+#    #+#             */
/*   Updated: 2024/10/16 18:06:55 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
void	*ft_calloc(size_t n, size_t size);
char	*ft_tern_str(int cnd, char *ret1, char *ret2);
char	*get_next_line(int fd);

#endif