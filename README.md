# ft_malloc
A useful tool to take control of your memory leaks

This library is designed to help you keep track and get rid of possible leaks in your program;

The malloc_t() function works just like a malloc, but it keeps track of the pointer allocated and stores it into a linked list that you can access with the get_head() function.

The free_t() is meant to be used in conjunction with malloc_t() and behaves just like a normal free(), but it also removes the pointer fron the linked list.

IMPORTANT : Malloccing memory with malloc_t() and not freeing it with free_t() WILL cause memory leaks.

The fail_t(int n) function takes an integer, and will start a countdown that will fail the n_th malloc_t_bad() starting from that point.

The malloc_t_bad() function behaves just like malloc_t(), but it keeps track of the fail_t() countdown.

For the purpose of fail_t, any malloc_t() that is not malloc_t_bad() will not be taken into consideration.

Finally, the leak_size() function will return an integer that represents the number of pointers currently mallocced, and the link_free() function will free all pointer tracked by 
malloc_t() and malloc_t_bad(), effectively getting rid of any leaks.
