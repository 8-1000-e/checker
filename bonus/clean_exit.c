/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edubois- <edubois-@student.42angouleme>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:58:32 by edubois-          #+#    #+#             */
/*   Updated: 2024/12/10 20:40:55 by edubois-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_clearlst(t_list *a)
{
    t_list *save;

    while (a)
    {
        save = a->next;
        free(a);
        a = save;
    }
}

void    clean_exit_bonus(t_list *a, int error)
{
    if (a)
        ft_clearlst(a);
    if (error)
        ft_printf(2, "KO \n");
    else
        ft_printf(1, "OK \n");
    exit(0);
}
