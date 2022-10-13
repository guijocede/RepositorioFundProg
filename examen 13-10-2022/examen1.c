/* La empresa ABCWeb desea mejorar la seguridad en su plataforma web y decide contratarlo a usted para que desarrolle ciertas validaciones bajo los siguientes requerimientos
 * 
 * 1-El email del usuario debe contener un caracter de "@" y un caracter de "." 
 * 
 * 2-El FirstName debe contener almenos una vocal 
 * 
 * 3-El Usuario debe ser mayor de edad
 * 
 * 4-El Password debe ser mayor de 8 caracteres y debe tener almenos una vocal y un número
 * 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TM 30

char LeerEmail(char correo[]);
int ComproCorreo(char correo[]);
char LeerNombre(char nombre[]);
int ComproNombre(char nombre[]);
int LeerEdad(void);
char LeerPassword(char password[]);
int ComproPassword(char password[]);


int main(void){
	
	char correo[TM];
	char nombre[TM];
	int edad;
	char password[TM];
	LeerNombre(nombre);
	LeerEmail(correo);
	edad = LeerEdad();
	LeerPassword(password);
	
	printf("\n tamo listo pana mio");
	
	
	
	return 0; 
	}
	
	char LeerEmail(char correo[]){
		
	do{
			printf("\nIngrese su correo: ");
			fflush(stdin);
			fgets(correo,TM,stdin);
		}while(ComproCorreo(correo));
		
		}

	int ComproCorreo(char correo[]){
		
		int i,x=0,y=0;
		
			for(i=0; correo[i] != '\n' ;i++){
				if(correo[i]=='@'){x=1;}
				if(correo[i]=='.'){y=1;}
			}
			if(x==1&&y==1){return 0;}
			else{return 1;}
		}
		
	char LeerNombre(char nombre[]){
		
	do{
			printf("\nIngrese su Nombre: ");
			fflush(stdin);
			fgets(nombre,TM,stdin);
		}while(ComproNombre(nombre));
		
		}
		
	int ComproNombre(char nombre[]){
		
		int i,x=0;
		
			for(i=0; nombre[i] != '\n';i++){
				if((nombre[i]=='a')||(nombre[i]=='e')||(nombre[i]=='i')||(nombre[i]=='o')||(nombre[i]=='u')){x=1;}
				if((nombre[i]=='A')||(nombre[i]=='E')||(nombre[i]=='I')||(nombre[i]=='O')||(nombre[i]=='U')){x=1;}
			}
			if(x==1){return 0;}
			else {return 1;}
		}
		
	int LeerEdad(void){
		
		int edad;
		
	do{
			printf("\nIngrese su edad: ");
			fflush(stdin);
			scanf("%i",&edad);
		}while(edad<18);
		
	return edad;
		}
		
	char LeerPassword(char password[]){
		
	do{
			printf("\nIngrese su contrasenia: ");
			fflush(stdin);
			fgets(password,TM,stdin);
		}while(ComproPassword(password));
		
		}
		
	int ComproPassword(char password[]){
		
		int i,x=0,y=0;
		
			for(i=0; password[i] != '\n';i++){
				if((password[i]=='a')||(password[i]=='e')||(password[i]=='i')||(password[i]=='o')||(password[i]=='u')){x=1;}
				if((password[i]=='A')||(password[i]=='E')||(password[i]=='I')||(password[i]=='O')||(password[i]=='U')){x=1;}
				if((password[i]=='0')||(password[i]=='1')||(password[i]=='2')||(password[i]=='3')||(password[i]=='4')||(password[i]=='5')||(password[i]=='6')||(password[i]=='7')||(password[i]=='8')||(password[i]=='9')){y=1;}
			}
			if(x==1&&y==1&&strlen(password)>=8){return 0;}
			else {return 1;}
		}
