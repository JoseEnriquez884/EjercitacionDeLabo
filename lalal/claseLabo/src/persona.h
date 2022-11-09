#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
typedef struct
{
	int id;
	char nombre[20];
	char apellido[20];
	char sexo;
	float altura;
}ePersona;
ePersona* newPersona();
ePersona* newPersonaConParametros(int id,char* nombre,char* apellido,char sexo,float altura);
ePersona* newPersonaString(char* id,char* nombre,char* apellido,char* sexo,char* altura);//HACER
int personaGetId(ePersona* pPersona,int* id);
int personaGetNombre(ePersona* pPersona,char* nombre);
int personaGetapellido(ePersona* pPersona, char* apellido);
int personaGetSexo(ePersona* pPersona,char* sexo);
int personaGetAltura(ePersona* pPersona,float* altura);
int personaGetFullName(ePersona* pPersona,char* fullName);

//comparadores
int personaCompareId(void*,void*);
int personaCompareNombre(void*,void*);
int personaCompareApellido(void*,void*);
int personaCompareSexo(void*,void*);
int personaCompareAltura(void*,void*);

void freePersona(ePersona* pPersona);

int personaSetId(ePersona* pPersona,int id);
int personaSetNombre(ePersona* pPersona,char* nombre);
int personaSetApellido(ePersona* pPersona,char* apellido);
int personaSetSexo(ePersona* pPersona,char sexo);
int personaSetAltura(ePersona* pPersona,float altura);
int personaMotrarUna(ePersona*);
