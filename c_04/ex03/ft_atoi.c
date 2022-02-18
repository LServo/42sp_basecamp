/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:15:16 by lservo            #+#    #+#             */
/*   Updated: 2022/02/18 05:09:04 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int result;
    int revert;
    int count;

    result = 0;
    revert = 1;
    count = 0;
    while ((str[count] >= 9 && str[count] <= 13) || str[count] == ' ') // só passando a string, enquanto não tem caracteres "palpáveis"
        count++;
    while (str[count] == '-' || str[count] == '+') // se for algum sinal, faz uma brincadeira com o reverte que será utilizado no retorno
        if (str[count++] == '-')
            revert *= -1;
    result = 0;
    while (str[count] >= '0' && str[count] <= '9') // se for um número, multiplica por 10 e soma o mesmo convertendo para int
        result = result * 10 + str[count++] - '0';
    return (result * revert); // positivo ou negativo de acordo com o jogo de sinais
}
