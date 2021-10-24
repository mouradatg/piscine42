/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:11:30 by mattig            #+#    #+#             */
/*   Updated: 2021/10/22 17:16:08 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d)
		d++;
	while (*src)
	{
		*d++ = *src++;
	}
	*d = '\0';
	return (dest);
}
