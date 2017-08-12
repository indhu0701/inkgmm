#include <stdio.h>

int main(){
	unsigned char cr;		
	
	cr=32;
	while(cr<=127)
  {
		printf("%c [%03d] ",cr,cr);
		cr++;
	}
	printf("\n");
	
	return 0;
}
