# include <stdio.h>
# include <string.h>
    
    int opcion,opM,opD,cond;
    char nombre[200],sexo[50],sector[70],email[500],edad[3],id[10],telefono[10],dia[40],mes[40];
    
    int main(){

    FILE *PPF=NULL;
    FILE *PPF2=NULL;
    FILE *PPF3=NULL;
    FILE *PPF4=NULL;
    FILE *PPF5=NULL;

    PPF= fopen("Mb.txt","r");
    PPF2= fopen("RD.txt","w+");
    PPF3= fopen("Med.txt","r");
    PPF4= fopen("H1.txt","r");
    PPF5= fopen("H2.txt","r");

    char cara[200],cara2[900],cara3[900],cara4[900],cara5[900];
    for (int i = 0; i < 9; i++)
    {
    fgets(cara,200,PPF);
    printf("%s",cara);
    }

    scanf("%d",&opcion);
    

    if (opcion==1)
    {
        printf("Ingrese su nombre: \n");
        scanf("%s",&nombre);
        printf("Ingrese su edad: \n");
        scanf("%s",&edad);
        printf("Ingrese su numero de cedula: \n");
        scanf("%s",&id);
        printf("Ingrese su sexo: \n");
        scanf("%s",&sexo);
        printf("Ingrese su sector: \n");
        scanf("%s",&sector);
        printf("Ingrese su telefono/celular: \n");
        scanf("%s",&telefono);
        printf("Ingrese su correo electronico: \n");
        scanf("%s",&email);
        fprintf(PPF2,"Nombre: %s\n Edad: %s\n Id: %s\n Sexo: %s\n Sector: %s\n Telefono o Celular: %s\n Email: %s\n",nombre,edad,id,sexo,sector,telefono,email);
        printf("\n");
        printf("\n");
        for (int j = 0; j < 22; j++) //Texto Med
            {
                fgets(cara2,900,PPF3);
                printf("%s",cara2);
            }
    
        printf("Seleccione el medico que se adapte a sus nececidades (Seleccione un numero)\n");
        scanf("%d",&opM);
         switch (opM)
            {
            case 1:
            fputs("El medico seleccionado es: Juan Gabriel Ramos - Medico General \n",PPF2);
            break;
            case 2:
            fputs("El medico seleccionado es: Arsenio Montes - Pediatra \n",PPF2);
            break;

            case 3:
            fputs("El medico seleccionado es: Michelle de Castro - Ginecologia \n",PPF2);
            break;
        
            case 4:
            fputs("El medico seleccionado es: Narciso Quiroga - Cardiologia \n",PPF2);
            
            break;

            case 5:
            fputs("El medico seleccionado es: Alma Latorre - Nutricionista \n",PPF2);
            
            break;

            case 6:
            fputs("El medico seleccionado es: Oriol Cordoba - Traumatologo \n",PPF2);
            
            break;

            case 7:
            fputs("El medico seleccionado es: Teresa Carro - Dentista \n",PPF2);
            
            break;

            case 8:
            fputs("El medico seleccionado es: Maria-Fernanda Barbero - Oftalmologia \n",PPF2);
            
            break;

            case 9:
            fputs("El medico seleccionado es: Jose-Ignacio Palacio - Urologia \n",PPF2);
            
            break;

            case 10:
            fputs("El medico seleccionado es: Samara Agullo - Psiquiatria \n",PPF2);
            
            break;
            }
        printf("Ingrese la fecha que desee: dd/mm \n");
        scanf("%s%s", &dia,&mes);
        fprintf(PPF2,"La fecha ingresada es: %02s/%02s/2023 \n",dia,mes);

        if (opM==1 || opM==2 || opM==3 || opM==4 || opM==5)
        {
           for (int j = 0; j < 26; j++)
            {
                fgets(cara3,900,PPF4);
                printf("%s",cara3);
            }
            printf("Seleccione una fecha:\n");
            scanf("%d",&opD);
         switch (opM)
            {
            case 1:
            fputs("12 am - 1 pm \n",PPF2);
            break;

            case 2:
            fputs("5 pm - 6 pm \n",PPF2);
            break;

            case 3:
            fputs("10 am - 11 am \n",PPF2);
            break;
        
            case 4:
            fputs("3 pm - 4 pm \n",PPF2);
            break;

            case 5:
            fputs("7 am - 8 am \n",PPF2);
            break;

            case 6:
            fputs("7 pm - 8 pm \n",PPF2);
            break;

            case 7:
            fputs("8 am - 9 am \n",PPF2);
            break;

            case 8:
            fputs("1 pm - 2 pm \n",PPF2);
            break;

            case 9:
            fputs("11 am - 12 am \n",PPF2);
            break;

            case 10:
            fputs("4 pm - 5 pm \n",PPF2);
            break;
            }
        }
        if (opM==6 || opM==7 || opM==8 || opM==9 || opM==10)
        {
           for (int j = 0; j < 26; j++)
            {
                fgets(cara4,900,PPF5);
                printf("%s",cara4);
            }
            printf("Seleccione una fecha:\n");
            scanf("%d",&opD);
         switch (opD)
            {
            case 1:
            fputs("12 am - 1 pm \n",PPF2);
            break;
            
            case 2:
            fputs("5 pm - 6 pm \n",PPF2);
            break;

            case 3:
            fputs("10 am - 11 am \n",PPF2);
            break;
        
            case 4:
            fputs("3 pm - 4 pm \n",PPF2);
            break;

            case 5:
            fputs("7 am - 8 am \n",PPF2);
            break;

            case 6:
            fputs("7 pm - 8 pm \n",PPF2);
            break;

            case 7:
            fputs("8 am - 9 am \n",PPF2);
            break;

            case 8:
            fputs("1 pm - 2 pm \n",PPF2);
            break;

            case 9:
            fputs("11 am - 12 am \n",PPF2);
            break;

            case 10:
            fputs("4 pm - 5 pm \n",PPF2);
            break;
            }
            }
        printf("¿Acepta los terminos y condiciones?, pueden leer los terminos y condiciones en nuestra pagina web :)\n");
        printf("1= si, 2= no \n");
        scanf("%d", &cond);
        if (cond==1)
        {
            printf("!!!La informacion fue registrada correctamente!!! \n");
        }
        else{
            printf("Gracias por utilizar nuestro servicio\n");
        }
        }    
    else
    {
        printf("Gracias por utilizar el servicio");
    }  
    fclose(PPF);
    fclose(PPF2);
    fclose(PPF3);
    fclose(PPF4);
    fclose(PPF5);
}

