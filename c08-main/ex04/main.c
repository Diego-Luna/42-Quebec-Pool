#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int arg, char **str)
{
    t_stock_str	*p;
    if (arg >= 2)
    {
        p = ft_strs_to_tab(arg, str);
    }
}