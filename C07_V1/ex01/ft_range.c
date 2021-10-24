/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:34:36 by mattig            #+#    #+#             */
/*   Updated: 2021/09/25 17:39:07 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc(sizeof(int) * (max - min)); 
	i = 0;
	if (tab == NULL)
		tab = NULL;
		return (tab);
	while (max > min)
	{
		max--;
		tab[i] = max;
		i++;
	}
	return (tab);
}