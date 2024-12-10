/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edubois- <edubois-@student.42angouleme>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:00:07 by edubois-          #+#    #+#             */
/*   Updated: 2024/12/10 21:52:30 by edubois-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void    check_sort_bonus(t_list *lst)
{
    t_list *save_lst;

    save_lst = lst;
    while (save_lst->next && save_lst->next->content > save_lst->content)
        save_lst = save_lst->next;
    if (!save_lst->next)
        clean_exit_bonus(lst, 0);
}

int	make_moov(t_data data, char *s)
{
	if (ft_strcmp("sa\n", s))
		sa(&data);
	else if (ft_strcmp("sb\n", s))
		sb(&data);
	else if (ft_strcmp("pa\n", s))
		pa(&data);
	else if (ft_strcmp("pb\n", s))
		pb(&data);
	else if (ft_strcmp("ra\n", s))
		ra(&data);
	else if (ft_strcmp("rb\n", s))
		rb(&data);
	else if (ft_strcmp("rr\n", s))
		rr(&data);
	else if (ft_strcmp("rrr\n", s))
		rrr(&data);
	else if (ft_strcmp("rra\n", s))
		rra(&data);
	else if (ft_strcmp("rrb\n", s))
		rrb(&data);
	else
		return (0);
	return (1);
}

void	start_checker(t_list *lst)
{
	t_data data;
	char *s;

	data.stack_a = lst;
    data.stack_b = 0;
	s = get_next_line(0);
	while (!ft_strcmp("\n", s))
	{
		if (!make_moov(data, s))
			break ;
		free(s);
		s = get_next_line(0);
	}
	free(s);
	check_sort_bonus(data.stack_a);
	clean_exit_bonus(data.stack_a, 1);
}

int	main(int ac, char **av)
{
	t_list *a;
	t_list *a_new;

	if (ac != 1)
	{
		a = NULL;
		av++;
		check_args(ac, av);
		while (--ac)
		{
			a_new = get_stack(*av);
			if (!a_new)
				clean_exit_bonus(a, 1);
			a = list_join(a, a_new);
			av++;
		}
		check_for_dups(a);
		check_sort_bonus(a);
		start_checker(a);
	}
}
