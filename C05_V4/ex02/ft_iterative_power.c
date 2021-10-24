/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 07:46:50 by mattig            #+#    #+#             */
/*   Updated: 2021/09/28 12:22:50 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = power;
	result = 1;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result *= nb;
		i --;
	}
	return (result);
}
