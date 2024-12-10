/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edubois- <edubois-@student.42angouleme>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:54:26 by edubois-          #+#    #+#             */
/*   Updated: 2024/12/09 14:47:20 by edubois-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include "../lib/printf/ft_printf.h"
#include "../lib/libft/libft.h"
#include "../lib/gnl/get_next_line.h"

typedef struct s_data
{
	t_list	*stack_a;
	t_list	*stack_b; 
}				t_data;

int	sa(t_data *data);
int	ra(t_data *data);
int rra(t_data *data);
int pa(t_data *data);
int sb(t_data *data);
int rb(t_data *data);
int rrb(t_data *data);
int pb(t_data *data);
int rba(t_list **stack);
int sba(t_list **stack);
int rrba(t_list **stack);
int pba(t_list **stack_1, t_list **stack_2);
void ss(t_data *data);
void rr(t_data *data);
void rrr(t_data *data);
void    ft_clearlst(t_list *a);
t_list *get_stack(char *str);
t_list	*list_join(t_list *lst, t_list *lst2);
void    clean_exit_bonus(t_list *a, int error);
int	main(int ac, char **av);
void	check_for_letters(char **av, int ac);
void	check_for_sign(char **av, int ac);
void	check_for_dups(t_list *lst);
void    check_args(int ac, char **av);

#endif