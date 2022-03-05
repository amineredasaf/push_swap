# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>  

typedef struct s_stack
{
    int    *stack;
    struct s_stack *next;
    struct s_stack *previous;
} t_stack;

typedef struct s_data
{
    t_stack *a;
    t_stack *b;
    char    **av;
    char    *line;
    int     *tab;
    int     arg_nb;
} t_data;

int     ft_error(char *str);
int     ft_atoi(const char *str);
void    parsing(t_data *data);
void    insert(t_data *data);
void    check_char(t_data *data);
void    check_doub(t_data *data);
void    to_string(t_data *data);
void    to_intgers(t_data *data);
char    *ft_strjoin(char *dest, char *buff);
size_t  ft_strlen(const char *str);
#endif