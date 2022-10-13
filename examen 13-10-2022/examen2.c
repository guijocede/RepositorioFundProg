/*calcular el nuevo sueldo de un empleado teniendo en cuenta las siguientes condiciones
. si el sexo es femenino y los años de servicio son menor o igual 5 años y 
el sueldo base es menor o igual a mil el aumento sera del 50%, de lo contrario sera del 30%. 
si el sexo es masculino 
y los años de servicio menor o igual a 10 y su suledo base es menor o igual a 2000 el 
correspondiente aumento sera del 35%,encaso contrario 30%.
imprimirel codigo del empleado el nombre del empleado los años de servicio el aumento el sueldo base 
y el nuevo salario*/
#include <stdio.h>


void sueldofemenino();
void sueldomasculino();
int main(){
	
    char nombre[50];
	int sexo;
	int sueldo_base=0,codigoe=0,tiempo=0,sueldo;

	printf("ingrese el nombre del trabajador: \n");
	scanf("%s",&nombre);
	printf("introdusca sexo \n1.si es femenino \n2.si es masculino:\n");
	scanf("%d",&sexo);
	printf("ingrese los años de servicio: \n");
	scanf("%d",&tiempo);
	printf("sueldo base:\n");
	scanf("%d",&sueldo_base);
	printf("ingrese el codigo del trabajador: \n");
	scanf("%d",&codigoe);
	if (sexo==1)
	{
		printf("El trabajador o trabajadora: %s \n",nombre);
	printf("de codigo numero: %d\n",codigoe );
	printf("con %d a�os de servicio\n",tiempo);
	printf("su sueldo base era %d \n",sueldo_base);
		sueldofemenino(sueldo_base,tiempo);
	}else if (sexo==2){
		printf("El trabajador o trabajadora: %s \n",nombre);
	printf("de codigo numero: %d\n",codigoe );
	printf("con %d a�os de servicio\n",tiempo);
	printf("su sueldo base era %d \n",sueldo_base);
		sueldomasculino(sueldo_base,tiempo);
	}
	
	


    


}


void sueldofemenino(int sueldo,int time){
	int aumento=0,nuevosueldo=0;
	if (time<=5 && sueldo<=1000)
	{
		aumento=sueldo*0.50;
		nuevosueldo=sueldo+aumento;
		printf("tiene un aumento de %d y un nuevo sueldo de %d",aumento,nuevosueldo);
		
    }else{
    	aumento=sueldo*0.30;
    	nuevosueldo=sueldo+aumento;
    	printf("tiene un aumento de %d y un nuevo sueldo de %d",aumento,nuevosueldo);

    }
}
 void sueldomasculino(int sueldo,int time){
	int aumento=0,nuevosueldo=0;
	if (time<=10 && sueldo<=2000)
	{
		aumento=sueldo*0.35;
		nuevosueldo=sueldo+aumento;
		printf("tiene un aumento de %d y un nuevo sueldo de %d",aumento,nuevosueldo);
		
    }else{
    	aumento=sueldo*0.30;
    	nuevosueldo=sueldo+aumento;
    	printf("tiene un aumento de %d y un nuevo sueldo de %d",aumento,nuevosueldo);

    }
}
