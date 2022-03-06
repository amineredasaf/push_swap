# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>  

typedef struct s_stack
{
    int    stack;
    struct s_stack *next;
    struct s_stack *previous;
} t_stack;

typedef struct s_data
{
    t_stack *a;
    t_stack *b;
    char    **av;
    char    **lines_tab;
    char    *line;
    int     *stack_a;
    int     arg_nb;
} t_data;

int     ft_error(char *str);
int     ft_atoi(const char *str);
int     ft_lstsize(t_stack *lst);
void    parsing(t_data *data);
void    insert(t_data *data);
void    check_char(t_data *data);
void    check_doub(t_data *data);
void    to_string(t_data *data);
void    to_intgers(t_data *data);
void    to_splitted(t_data *data);
char    *ft_strjoin(char *dest, char *buff);
char	**ft_split(char const *s, char c);
void	add_back(t_stack **lst, t_stack *new);
size_t  ft_strlen(const char *str);
t_stack *lstnew(int content);
#endif