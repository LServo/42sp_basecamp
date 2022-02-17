/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startswith3_9.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lservo <lservo@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:45:34 by mtomomit          #+#    #+#             */
/*   Updated: 2022/02/13 23:01:17 by lservo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void colup_threethird(char table[4][4], int table_core[4][4]);
void coldown_threethird(char table[4][4], int table_core[4][4]);
void rowleft_threethird(char table[4][4], int table_core[4][4]);
void rowright_threethird(char table[4][4], int table_core[4][4]);
void colup_onethird(char table[4][4], int table_core[4][4]);
void coldown_onethird(char table[4][4], int table_core[4][4]);
void rowleft_onethird(char table[4][4], int table_core[4][4]);
void rowright_onethird(char table[4][4], int table_core[4][4]);
void colup_endtwofour(char table[4][4], int table_core[4][4]);
void coldown_endtwofour(char table[4][4], int table_core[4][4]);
void rowleft_endtwofour(char table[4][4], int table_core[4][4]);
void rowright_endtwofour(char table[4][4], int table_core[4][4]);
void colup_endfourone(char table[4][4], int table_core[4][4]);
void coldown_endfourone(char table[4][4], int table_core[4][4]);
void rowleft_endfourone(char table[4][4], int table_core[4][4]);
void rowright_endfourone(char table[4][4], int table_core[4][4]);
void colup_endfourtwo(char table[4][4], int table_core[4][4]);
void coldown_endfourtwo(char table[4][4], int table_core[4][4]);
void rowleft_endfourtwo(char table[4][4], int table_core[4][4]);
void rowright_endfourtwo(char table[4][4], int table_core[4][4]);
void colup_endfourthree(char table[4][4], int table_core[4][4]);
void coldown_endfourthree(char table[4][4], int table_core[4][4]);
void rowleft_endfourthree(char table[4][4], int table_core[4][4]);
void rowright_endfourthree(char table[4][4], int table_core[4][4]);
void colup_firstonelastfour(char table[4][4], int table_core[4][4]);
void coldown_firstonelastfour(char table[4][4], int table_core[4][4]);
void rowleft_firstonelastfour(char table[4][4], int table_core[4][4]);
void rowright_firstonelastfour(char table[4][4], int table_core[4][4]);
void colup_firsttwofourthird(char table[4][4], int table_core[4][4]);
void coldown_firsttwofourthird(char table[4][4], int table_core[4][4]);
void rowleft_firsttwofourthird(char table[4][4], int table_core[4][4]);
void rowright_firsttwofourthird(char table[4][4], int table_core[4][4]);
void colup_secondtwofourthird(char table[4][4], int table_core[4][4]);
void coldown_secondtwofourthird(char table[4][4], int table_core[4][4]);
void rowleft_secondtwofourthird(char table[4][4], int table_core[4][4]);
void rowright_secondtwofourthird(char table[4][4], int table_core[4][4]);
void colup_secondonelastfour(char table[4][4], int table_core[4][4]);
void coldown_secondonelastfour(char table[4][4], int table_core[4][4]);
void rowleft_secondonelastfour(char table[4][4], int table_core[4][4]);
void rowright_secondonelastfour(char table[4][4], int table_core[4][4]);

void startswith3_conditions1(char table[4][4], int table_core[4][4])
{
    colup_threethird(table, table_core);
    coldown_threethird(table, table_core);
    rowleft_threethird(table, table_core);
    rowright_threethird(table, table_core);
    colup_onethird(table, table_core);
    coldown_onethird(table, table_core);
    rowleft_onethird(table, table_core);
    rowright_onethird(table, table_core);
    colup_endtwofour(table, table_core);
    coldown_endtwofour(table, table_core);
    rowleft_endtwofour(table, table_core);
    rowright_endtwofour(table, table_core);
    colup_endfourone(table, table_core);
    coldown_endfourone(table, table_core);
    rowleft_endfourone(table, table_core);
    rowright_endfourone(table, table_core);
    colup_endfourtwo(table, table_core);
    coldown_endfourtwo(table, table_core);
    rowleft_endfourtwo(table, table_core);
    rowright_endfourtwo(table, table_core);
}

void startswith3_conditions2(char table[4][4], int table_core[4][4])
{
    colup_endfourthree(table, table_core);
    coldown_endfourthree(table, table_core);
    rowleft_endfourthree(table, table_core);
    rowright_endfourthree(table, table_core);
    colup_firstonelastfour(table, table_core);
    coldown_firstonelastfour(table, table_core);
    rowleft_firstonelastfour(table, table_core);
    rowright_firstonelastfour(table, table_core);
    colup_firsttwofourthird(table, table_core);
    coldown_firsttwofourthird(table, table_core);
    rowleft_firsttwofourthird(table, table_core);
    rowright_firsttwofourthird(table, table_core);
    colup_secondtwofourthird(table, table_core);
    coldown_secondtwofourthird(table, table_core);
    rowleft_secondtwofourthird(table, table_core);
    rowright_secondtwofourthird(table, table_core);
    colup_secondonelastfour(table, table_core);
    coldown_secondonelastfour(table, table_core);
    rowleft_secondonelastfour(table, table_core);
    rowright_secondonelastfour(table, table_core);
}

void startswith3(char table[4][4], int table_core[4][4])
{
    startswith3_conditions1(table, table_core);
    startswith3_conditions2(table, table_core);
}
