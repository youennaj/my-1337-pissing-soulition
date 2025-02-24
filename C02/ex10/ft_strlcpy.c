/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:09:44 by kali              #+#    #+#             */
/*   Updated: 2025/02/24 03:29:55 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    while (src[i] != '\0'){
        if(i < size) {
            dest[i] = src[i];
            if(i == size - 1)
                dest[i] = '\0';
        }
        i++;
    }
    return i;
}

// #include <string.h>
// int main() {
//     char c[] = "hell\0";
//     char b[20] = "goding with moljlaba";
//     // char d[16] = "shjf dfhdf df l";
//     printf("%d\n %s\n", ft_strlcpy(b, c, 5), b);//give in output of my function
//     printf("%d\n %s\n", strlcpy(b, c, 5), b);// give in output of c function
// }