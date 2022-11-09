#include "persona.h"
int main(void)
{
	setbuf(stdout,NULL);

	/*
	int x;
	char* z="25";
	x=atoi(z);
	printf("%d",x);*/

//	ePersona* pPersona=newPersonaConParametros(25000, "pepe","rodriguez", 'm', 1.88);
	ePersona* pPersona=newPersonaString("29000", "pepe", "perez", "f", "1.80");
	ePersona* pPersona2=newPersonaString("30000", "lalala", "lalala", "m", "1.75");
//	ePersona* pPersona=newPersona();
	if(pPersona!=NULL && pPersona2!=NULL)
	{
		personaMotrarUna(pPersona);
//		personaSetNombre(pPersona, "peDRO");
		personaMotrarUna(pPersona2);
	}
	return EXIT_SUCCESS;
}

