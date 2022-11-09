#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	FILE* pFile;
	pFile=fopen("archivo.txt","w");
	if(pFile!=NULL)
	{
		printf("no se pudo abrir el archivo\n");
	}
	fprintf(pFile,"hola mundo");
	fclose(pFile);
	return EXIT_SUCCESS;
}
