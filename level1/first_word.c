/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:43:29 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/15 19:36:05 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "examtest.h"

int main(int argc, char **argv)
{
    int i = 0;
    
    if(argc != 2)
        return(write(1, "\n", 1));
    
    while(argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        i++;
    
    while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
}
