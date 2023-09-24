/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:23:15 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/24 01:07:12 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
    
t_list *get_tail(t_list *lst) {
    while (lst != NULL && lst->next != NULL) {
        lst = lst->next;
    }
    return lst;
}

t_list *partition(t_list *head, t_list *end, t_list **new_head, t_list **new_end) {
    t_list *pivot = end;
    t_list *prev = NULL, *current = head, *tail = pivot;

    while (current != pivot) {
        if (current->content <= pivot->content) {
            if ((*new_head) == NULL) {
                (*new_head) = current;
            }
            prev = current;
            current = current->next;
        } else {
            if (prev) {
                prev->next = current->next;
            }
            t_list *tmp = current->next;
            current->next = NULL;
            tail->next = current;
            tail = current;
            current = tmp;
        }
    }

    if ((*new_head) == NULL) {
        (*new_head) = pivot;
    }

    (*new_end) = tail;

    return pivot;
}

t_list *quick_sort_rec(t_list *head, t_list *end) {
    if (!head || head == end) {
        return head;
    }

    t_list *new_head = NULL, *new_end = NULL;

    t_list *pivot = partition(head, end, &new_head, &new_end);

    if (new_head != pivot) {
        t_list *tmp = new_head;
        while (tmp->next != pivot) {
            tmp = tmp->next;
        }
        tmp->next = NULL;

        new_head = quick_sort_rec(new_head, tmp);

        tmp = get_tail(new_head);
        tmp->next = pivot;
    }

    pivot->next = quick_sort_rec(pivot->next, new_end);

    return new_head;
}

t_list *quick_sort(t_list *head) {
    return quick_sort_rec(head, get_tail(head));
}

void exemple_quicksort(int ac, char **av)
{
    if(ac < 0)
        ft_printf("%d, %s",ac, av[1]);
    char **splited = ft_split(av[1], ' ');
    int itens[100];
    int i = 0;

    while (splited[i])
    {
        itens[i] = ft_atoi(splited[i]);
        i++;
    }
    
    

    printf("Array antes da ordenação:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", itens[j]);
    }
    printf("\n");

    //quick_sort(itens,0,i-1);

    printf("Array após a ordenação (Quicksort):\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", itens[j]);
    }
    printf("\n");
}

t_list *array_to_list(char **av)
{
    t_list * lst = NULL;
    char **splited = ft_split(av[1], ' ');
    int i = 0;
    while (splited[i])
    {
        if(lst == NULL)
            lst = ft_lstnew(ft_atoi(splited[i]));
        else
            ft_lstadd_back(&lst,ft_lstnew(ft_atoi(splited[i])));
        i++;
    }
    return lst;
}
t_list *two_numbers(t_list *lst)
{  
    swap_stack(lst, "sa");
    return lst;
}
t_list *three_numbers(t_list *lst)
{
    
    if(lst->next->next->content > lst->next->content && lst->next->next->content > lst->content)
        swap_stack(lst, "sa");
    else if(lst->next->next->content > lst->next->content && lst->content >lst->next->next->content)
        lst = swift_element_stack(lst,"ra");
    else if(lst->next->content > lst->next->next->content && lst->content > lst->next->next->content)
    {
        swap_stack(lst, "sa");
        lst = swift_reverse_element_stack(lst,"rra");
    }
    
    return lst;
}
int main(int ac, char **av)
{
    t_list *list_a;
    t_list *list_b;

    list_a = NULL;
    list_b = NULL;

    list_a = array_to_list(av);

    list_a = quick_sort(list_a);

    return (0);

}
