#include <stdio.h>

int  asm_mrs_ex ( void );

asm("			\n\
.global asm_mrs_ex	\n\
	mrs r0, cpsr	\n\
	mov pc, lr     	\n\
");

int main ( void )
{		
	int  cpsr;	

	printf("\n+-------------------+\n");	
	printf("|ARMInstruction MRS|\n");		
	printf("+-------------------+\n\n");	
	
	cpsr = asm_mrs_ex();         

	printf("cpsr = %08X\n\n", cpsr );
	
	return 0;
}