/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:39:50 by rsaf              #+#    #+#             */
/*   Updated: 2022/02/14 18:07:09 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h> 
# include "../push_swap.h"

char	*ft_strjoin(char *dest, char *buff);
char	*ft_strchr(char *str, int ch);
char	*ft_read(int fd, char *str);
size_t	ft_strlen(const char *str);
size_t	ft_strlen(const char *str);
char	*ft_dup(char *dest);
char	*get_next_line(int fd);

#endif
