/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:58:55 by mattig            #+#    #+#             */
/*   Updated: 2021/09/27 13:58:56 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *rang;

    if(min >= max)
    {
        range = NULL;
        return (0);
    }    
    i = 0;
    rang = malloc(sizeof(int) * (max - min));
    if(!rang)
    {
        range = NULL;
        return (-1);
    }
    i = 0;
    while (max > min)
    {
        rang[i] = max;
        max--;
        i++;
    }
    *range = rang;
    return (max - min);
}

int main()
{
    int *range;
    int taille;
    int i;    

    i = 0;
    taille = ft_ultimate_range(&range, 5, 15);
    printf("%d\n", taille);
    if (!range)
    {
        printf("Pointeur NULL");
        return 0;
    }
    while (i < taille)
    {
        printf("%d\n", range[i]);
        i++;
    }
    return 0;
}