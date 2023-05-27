#include <stdio.h>

extern unsigned long char_weird_order(const char *chars);

int main(int argc, char* argv[])
{
	char* b = argv[1];
	// printf_s( "\nCommand-line arguments:\n" );
    // for( int count = 0; count < argc; count++ )
    //     printf_s( "  argv[%d]   %s\n", count, argv[count] );
	char_weird_order(b);
	//char str[256];
	//sprintf(str, "%lld", b);
	printf("%s\n", b);
  
	return 0;
}
