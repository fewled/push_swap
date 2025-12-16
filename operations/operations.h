#ifndef OPERATIONS_H
# define OPERATIONS_H

typedef struct s_stack
{
	int	*list;
	int	top;
}		t_stack;

t_stack		new_stack();
void		feed(t_stack *stack);
void		swap(t_stack *stack);
void		push(t_stack *from, t_stack *to);
void		rotate(t_stack *stack);
void		rev_rotate(t_stack *stack);

#endif
