/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function_shared.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edubois- <edubois-@student.42angouleme>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:17:28 by npalissi          #+#    #+#             */
/*   Updated: 2024/12/09 15:13:16 by edubois-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void rrr(t_data *data)
{
	rrba(&data->stack_b);
	rrba(&data->stack_a);
}

void rr(t_data *data)
{
	rba(&data->stack_a);
	rba(&data->stack_b);
}

void ss(t_data *data)
{
	sba(&data->stack_a);
	sba(&data->stack_b);
}
