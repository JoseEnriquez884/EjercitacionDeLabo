#include "persona.h"
int personaCompareId(void* primerPersona,void* segundaPersona)
{
	int retorno=0;
	ePersona* unaPersona=NULL;
	ePersona* otraPersona=NULL;
	if(primerPersona!=NULL && segundaPersona!=NULL)
	{
		unaPersona=(ePersona*)primerPersona;
		otraPersona=(ePersona*)segundaPersona;
		if(unaPersona->id > otraPersona->id)
		{
			retorno=1;
		}else
		{
			if(unaPersona->id < otraPersona->id)
			{
				retorno=-1;
			}
		}
	}
	return retorno;
}
int personaCompareNombre(void* primerPersona,void* segundaPersona)
{
	int retorno=0;
	ePersona* unaPersona=NULL;
	ePersona* otraPersona=NULL;
	if(primerPersona!=NULL && segundaPersona!=NULL)
	{
		unaPersona=(ePersona*)primerPersona;
		otraPersona=(ePersona*)segundaPersona;
		retorno=strcmp(unaPersona->nombre,otraPersona->nombre);
	}
	return retorno;
}
int personaCompareApellido(void* primerPersona,void* segundaPersona)
{
	int retorno=0;
	ePersona* unaPersona=NULL;
	ePersona* otraPersona=NULL;
	if(primerPersona!=NULL && segundaPersona!=NULL)
	{
		unaPersona=(ePersona*)primerPersona;
		otraPersona=(ePersona*)segundaPersona;
		retorno=strcmp(unaPersona->apellido,otraPersona->apellido);
	}
	return retorno;
}
int personaCompareSexo(void* primerPersona,void* segundaPersona)
{
	int retorno=0;
	ePersona* unaPersona=NULL;
	ePersona* otraPersona=NULL;
	if(primerPersona!=NULL && segundaPersona!=NULL)
	{
		unaPersona=(ePersona*)primerPersona;
		otraPersona=(ePersona*)segundaPersona;
		if(unaPersona->sexo > otraPersona->sexo)
		{
			retorno=1;
		}else
		{
			if(unaPersona->sexo < otraPersona->sexo)
			{
				retorno=-1;
			}
		}
	}
	return retorno;
}
int personaCompareAltura(void* primerPersona,void* segundaPersona)
{
	int retorno=0;
	ePersona* unaPersona=NULL;
	ePersona* otraPersona=NULL;
	if(primerPersona!=NULL && segundaPersona!=NULL)
	{
		unaPersona=(ePersona*)primerPersona;
		otraPersona=(ePersona*)segundaPersona;
		if(unaPersona->altura > otraPersona->altura)
		{
			retorno=1;
		}else
		{
			if(unaPersona->altura < otraPersona->altura)
			{
				retorno=-1;
			}
		}
	}
	return retorno;
}

void freePersona(ePersona* pPersona)
{
	free(pPersona);
}
ePersona* newPersonaString(char* id,char* nombre,char* apellido,char* sexo,char* altura)
{
    ePersona* pNuevaPersona;
    int idAux;
    float alturaAux;
    if(id!=NULL && nombre!=NULL && apellido!=NULL && sexo!=NULL && altura!=NULL)
    {
        alturaAux=atof(altura);
        idAux=atoi(id);
        pNuevaPersona=newPersonaConParametros(idAux, nombre, apellido, *sexo, alturaAux);

    }
    return pNuevaPersona;
}
int personaGetFullName(ePersona* pPersona,char* fullName)
{
	int retorno=0;
	if(pPersona!=NULL && fullName!=NULL)
	{
		strcpy(fullName,pPersona->nombre);
		strcat(fullName," ");
		strcat(fullName,pPersona->apellido);
		retorno=1;
	}
	return retorno;
}
int personaGetAltura(ePersona* pPersona,float* altura)
{
	int retorno=0;
	if(pPersona!=NULL && altura!=NULL)
	{
		*altura=pPersona->altura;
		retorno=1;
	}
	return retorno;
}
int personaGetSexo(ePersona* pPersona,char* sexo)
{
	int retorno=0;
	if(pPersona!=NULL && sexo!=NULL)
	{
		if(pPersona->sexo=='f')
		{
			strcpy(sexo,"femenino");
		}else
		{
			strcpy(sexo,"masculino");
		}
		retorno=1;
	}
	return retorno;
}
int personaGetapellido(ePersona* p, char* apellido)
{
	int todoOk = 0;
	if(p != NULL && apellido != NULL)
	{
		strcpy(apellido, p->apellido);
		todoOk = 1;
	}
	return todoOk;
}
int personaGetNombre(ePersona* pPersona,char* nombre)
{
	int retorno=0;
	if(pPersona!=NULL && nombre!=NULL)
	{
		strcpy(nombre,pPersona->nombre);
		retorno=1;
	}
	return retorno;
}
int personaGetId(ePersona* pPersona,int* id)
{
	int retorno=0;
	if(pPersona!=NULL && id!=NULL)
	{
		*id=pPersona->id;
		retorno=1;
	}
	return retorno;
}
int personaSetApellido(ePersona* pPersona,char* apellido)
{
	int retorno=0;
	if(pPersona!=NULL && apellido!=NULL && strlen(apellido)<20)
	{
		strcpy(pPersona->apellido,apellido);
		strlwr(pPersona->apellido);
		pPersona->apellido[0]=toupper(pPersona->apellido[0]);
		retorno=1;
	}
	return retorno;
}
int personaSetNombre(ePersona* pPersona,char* nombre)
{
	int retorno=0;
	if(pPersona!=NULL && nombre!=NULL && strlen(nombre)<20)
	{
		strcpy(pPersona->nombre,nombre);
		strlwr(pPersona->nombre);
		pPersona->nombre[0]=toupper(pPersona->nombre[0]);
		retorno=1;
	}
	return retorno;
}
int personaSetSexo(ePersona* pPersona,char sexo)
{
	int retorno=0;
	if(pPersona!=NULL && (sexo=='f' || sexo=='m'))
	{
		sexo=tolower(sexo);
		pPersona->sexo=sexo;
		retorno=1;
	}
	return retorno;
}
int personaSetAltura(ePersona* pPersona,float altura)
{
	int retorno=0;
	if(pPersona!=NULL && altura>=0 && altura<=2.30)
	{
		pPersona->altura=altura;
		retorno=1;
	}
	return retorno;
}
int personaSetId(ePersona* pPersona,int id)
{
	int retorno=0;
	if(pPersona!=NULL && id>=20000 && id<=30000)
	{
		pPersona->id=id;
		retorno=1;
	}
	return retorno;
}
ePersona* newPersonaConParametros(int id,char* nombre,char* apellido,char sexo,float altura)
{
	ePersona* pUnaPersona;
	pUnaPersona=newPersona();
	if(!(personaSetId(pUnaPersona, id) &&
	   personaSetNombre(pUnaPersona, nombre) &&
	   personaSetApellido(pUnaPersona, apellido) &&
	   personaSetSexo(pUnaPersona, sexo) &&
	   personaSetAltura(pUnaPersona, altura)))
	{
		free(pUnaPersona);
		pUnaPersona=NULL;
	}
	return pUnaPersona;
}
int personaMotrarUna(ePersona* unaPersona)
{
	int retorno=0;
    int id;
    float altura;
    char sexo[20];
    char nombre[20];
    char apellido[20];
    if(unaPersona!=NULL)
    {
    	if(personaGetId(unaPersona, &id) &&
		   personaGetNombre(unaPersona, nombre) &&
		   personaGetapellido(unaPersona, apellido) &&
		   personaGetSexo(unaPersona, sexo) &&
		   personaGetAltura(unaPersona, &altura))
    	{
    		printf("id: %d Nombre: %s %s sexo: %s altura: %.2f\n",id,nombre,apellido, sexo, altura);
    		retorno = 1;
    	}
    }
	return retorno;
}
ePersona* newPersona()
{
	ePersona* pNuevaPersona=(ePersona*)malloc(sizeof(ePersona));
	if(pNuevaPersona!=NULL)
	{
		pNuevaPersona->id=0;
		*(pNuevaPersona->nombre)='\0';
		pNuevaPersona->sexo=' ';
		pNuevaPersona->altura=0;
	}
	return pNuevaPersona;
}


