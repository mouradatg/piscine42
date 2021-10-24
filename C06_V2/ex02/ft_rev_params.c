/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 01:20:38 by mattig            #+#    #+#             */
/*   Updated: 2021/09/21 02:36:23 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	long int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i != 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
