/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:03:16 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/14 20:45:44 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "examtest.h"

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(void)
{
    char *s2 = "hallo";
    char s1[7];
    ft_strcpy(s1, s2);
    printf("%s", s1);
}