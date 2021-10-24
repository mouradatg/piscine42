/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 08:32:27 by mattig            #+#    #+#             */
/*   Updated: 2021/09/23 20:10:28 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int i;
	char *res;

	i = 0;
	while(str[i] != '\0')
		i++;
	res = malloc(sizeof(*res) * (i + 1));
	if (res == NULL)
		return NULL;
	i = 0;
	while(str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return res;
}
