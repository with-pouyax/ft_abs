#ifndef FT_ABS_H
# define FT_ABS_H

static inline int	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}

# define ABS(Value) ft_abs(Value)

#endif
