#include <stdio.h>

extern void reverse_num_order(const char *chars);

int main(int argc, char* argv[])
{
	char* b = argv[1];
	// printf_s( "\nCommand-line arguments:\n" );
    // for( int count = 0; count < argc; count++ )
    //     printf_s( "  argv[%d]   %s\n", count, argv[count] );
	reverse_num_order(b);
	//char str[256];
	//sprintf(str, "%lld", b);
	printf("%s\n", b);
	printf("Worked \n");
	return 0;
}
