/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edubois- <edubois-@student.42angouleme>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:12:24 by edubois-          #+#    #+#             */
/*   Updated: 2024/12/09 14:57:12 by edubois-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*list_join(t_list *lst, t_list *lst2)
{
	if (!lst)
		return (lst2);
	while (lst2)
	{
		ft_lstadd_back(&lst, lst2);
		lst2 = lst2->next;
	}
	return (lst);
}

int	ft_lennb(char *s)
{
	int c;
	int	i;
	
	c = 0;
	i = 0;
	while (s[i] && (ft_isdigit(s[i]) || ft_issign(s[i])))
	{
		i++;
		c++;
	}
	return (c);
}

int	delete_zero(char *s)
{
	if (*s == '0' && ft_isdigit(s[1]))
		return (1);
	return (0);
}

t_list *get_stack(char *str)
{
	t_list	*s;
	t_list	*s_clone;
	int		overflow;
	int		nb;
	
	s = ft_lstnew(0);
	nb = 0;
	while (s && str && *str)
	{
		overflow = 0;
		while (*str && (ft_iswhitespace(*str) || delete_zero(str)))
			str++;
		nb = ft_atoi(str, &overflow);
		if (overflow)
			clean_exit_bonus(s, 1);
		ft_lstadd_back(&s, ft_lstnew(nb));
		str += ft_lennb(str);
		while (*str && (ft_iswhitespace(*str) || delete_zero(str)))
			str++;
	}
	if (!s)
		return (NULL);
	s_clone = s->next;
	free(s);
	return (s_clone);
}
