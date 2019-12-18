#include <stdio.h> 

struct	s_node {
	int				value; // 4
    //int             num[10]; // 4 * 10
	struct s_node	**nodes; // 8
};

int main() 
{ 
    int *int_p;
    char *char_p;

    int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 }; 
    
    printf("Number of elements :%lu\n", sizeof(arr) / sizeof(arr[0])); 
    printf("Number of elements :%lu %lu\n", sizeof(arr), sizeof(arr[0])); 

    printf("Number of elements :%lu\n", sizeof(struct s_node)); // why 16 bytes ???
    printf("Number of elements :%lu\n", sizeof(struct s_node *));
    printf("Number of elements :%lu\n", sizeof(struct s_node **));

    printf("Number of elements :%lu\n", sizeof(int_p));
    printf("Number of elements :%lu\n", sizeof(char_p));


    return 0; 
} 

/*
** ptr always take 8 bytes
** int array takes 4 * num_of_elements

Number of elements :11
Number of elements :44 4
Number of elements :16
Number of elements :8
Number of elements :8
Number of elements :8
Number of elements :8

*/