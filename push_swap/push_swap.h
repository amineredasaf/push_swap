/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:14:23 by rsaf              #+#    #+#             */
/*   Updated: 2022/04/05 06:48:26 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "./gnl/get_next_line.h"
# define SORTED 1
# define NOT_SORTED 0

typedef struct s_stack
{
	long			value;
	int				pos;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

typedef struct s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		lst_len;
	char	**av;
	char	**lines_tab;
	char	*line;
	int		arg_nb;
}	t_data;

/*-------------MOVES---------------*/
void	swap(t_stack *stack, char *move);
void	rotate(t_stack **stack, char *move);
void	double_swap(t_data *data, char *move);
void	double_rotate(t_data *data, char *move);
void	double_rrotate(t_data *data, char *move);
void	reverse_rotate(t_stack **stack, char *move);
void	push(t_stack **from_stack, t_stack **to_stack, char *move);
void	push_chunks(t_data *data, int chunk);
/*----------------------------------*/
/*------------SORTING---------------*/
void	sorting(t_data *data);
void	sort_five(t_data *data);
void	sort_three(t_data *data);
void	sort_two(t_stack *stack);
void	sort_circle(t_data *data);
int		if_circle(t_stack *stack);
int		if_sorted(t_stack *stack);
void	sort_hundred(t_data *data, int chunk);
void	sort_the_chunk(t_data **data, int size);
/*----------------------------------*/
/*------------LinkedLst-------------*/
t_stack	*lstnew(long content);
int		ft_lstsize(t_stack *lst);
void	lst_free(t_stack **stack);
size_t	ft_strlen(const char *str);
t_stack	*find_last_stack(t_stack *stack);
void	add_back(t_stack **lst, t_stack *new);
void	add_front(t_stack **lst, t_stack *new);
/*----------------------------------*/
/*--------------Utils---------------*/
char	*ft_dup(char *dest);
int		ft_error(char *str, t_data *data);
void	ft_putstr(char *str);
long	ft_atoi(const char *str);
char	*ft_strchr(char *str, int ch);
int		find_last_value(t_stack *stack);
t_stack	*find_last_stack(t_stack *stack);
int		ft_strcmp(char	*s1, char	*s2);
int		find_idx(t_stack *stack, int pos);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *dest, char *buff);
void	take_to_top(t_stack **stack, int pos);
int		top_compare(t_stack *stack, int pos);
/*----------------------------------*/
/*--------------Parsing-------------*/
void	parsing(t_data *data);
void	check_char(t_data *data);
void	check_doub(t_data *data);
void	to_string(t_data *data);
void	to_intgers(t_data *data);
void	to_splitted(t_data *data);
/*----------------------------------*/
/*---------------Other--------------*/
// void	xxxxprintstack(t_stack *stack, 
// const char *function, int act, char *stackname);
/*----------------------------------*/

#endif
