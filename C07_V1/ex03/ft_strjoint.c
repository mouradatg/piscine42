/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:59:58 by mattig            #+#    #+#             */
/*   Updated: 2021/09/27 15:00:01 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_vide(void)
{
    char *res;

    res = malloc(sizeof(char));
    res[1] = '\0';
    return res;
}

char    *ft_strjoint(int size, char **strs, char *sep)
{
    if(size == 0)
        return (ft_vide());   
}

int main()
{
    char *str;
    str = ft_strjoint(0, "tests" "tests" "tess", ',');
    printf("%s\n", str);
    free(str);
    return 0;
}