/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiboury <ggiboury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:22:31 by ggiboury          #+#    #+#             */
/*   Updated: 2022/12/04 17:34:53 by ggiboury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

int		ft_append(char **dst, char *buffer, int len_read, int *size_str);
void	ft_bzero(char *buffer);
void	*ft_free(char *str);
int		ft_is_filled(char *buf);
int		ft_is_finished(char *s, int size_str, int len_read);
int		ft_op_buffer(char *buf);
int		ft_read(int fd, char *buf);
void	ft_strncpy(char *dst, char *src, int n);
char	*get_next_line(int fd);

#endif