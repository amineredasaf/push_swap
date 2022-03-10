# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# define PRINT_FUNC printf("the function is:    \e[1;34m%s\e[0m\n", __func__);
#define SORTED 0
#define NOT_SORTED 1 
typedef struct s_stack
{
    // change to value
    int    value;
    struct s_stack *next;
    struct s_stack *previous;
} t_stack;

typedef struct s_data
{
    t_stack *lst_stack_a;
    t_stack *lst_stack_b;
    int     lst_len;
    char    **av;
    char    **lines_tab;
    char    *line;
    int     arg_nb;
    // int     *stack_a;
} t_data;

int     ft_error(char *str);
int     ft_atoi(const char *str);
int     ft_lstsize(t_stack *lst);
int     if_sorted(t_data *data);
void    parsing(t_data *data);
void    insert(t_data *data);
void    sorting(t_data *data);
void    sort_three(t_data *data);
void    sort_two(t_stack *stack);
void    check_char(t_data *data);
void    check_doub(t_data *data);
void    to_string(t_data *data);
void    to_intgers(t_data *data);
void    to_splitted(t_data *data);
void    ft_putstr(char *str);
char    *ft_strjoin(char *dest, char *buff);
char	**ft_split(char const *s, char c);
void	add_back(t_stack **lst, t_stack *new);
void    printstack(t_stack *stack, int act);
size_t  ft_strlen(const char *str);
t_stack *lstnew(int content);
#endif