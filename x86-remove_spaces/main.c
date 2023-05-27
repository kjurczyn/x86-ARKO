#include <stdio.h>

extern unsigned long countchars(const char *chars);

int main(int argc, char* argv[])
{
	char* b = argv[1];
	// printf_s( "\nCommand-line arguments:\n" );
    // for( int count = 0; count < argc; count++ )
    //     printf_s( "  argv[%d]   %s\n", count, argv[count] );
	unsigned long a = countchars(b);
	char str[256];
	printf("Number of characters: ");	
	sprintf(str, "%lld", a);
	printf("%s\n", str);
  
	return 0;
}
