#include <stdio.h>

int main()
{
    printf("NULL is %p\n",(int *)NULL);
    printf("On Ascii \\0 is %d  and '0' is %d\n",'\0', '0');
    printf("Size of int = %ld\n",sizeof(int));
    printf("Size of NULL = %ld\n",sizeof(NULL));

    return(0);
}
