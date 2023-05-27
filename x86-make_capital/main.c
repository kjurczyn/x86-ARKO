#include <stdio.h>

extern unsigned long capitalize(const char *chars);

int main(int argc, char* argv[])
{
	char* b = argv[1];
	// printf_s( "\nCommand-line arguments:\n" );
    // for( int count = 0; count < argc; count++ )
    //     printf_s( "  argv[%d]   %s\n", count, argv[count] );
	capitalize(b);
	//char str[256];
	//sprintf(str, "%lld", b);
	printf("%s\n", b);
  
	return 0;
}
