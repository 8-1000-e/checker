/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edubois- <edubois-@student.42angouleme>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 02:40:19 by npalissi          #+#    #+#             */
/*   Updated: 2024/12/09 15:12:47 by edubois-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int sa(t_data *data)
{
	if (!sba(&data->stack_a))
		return(0);
	return (1);
}

int ra(t_data *data)
{
	if (!rba(&data->stack_a))
		return (0);
	return (1);
}

int rra(t_data *data)
{
	if (!rrba(&data->stack_a))
		return (0);
	return (1);
}

int pa(t_data *data)
{
	pba(&data->stack_b,&data->stack_a);
	return (1);
}