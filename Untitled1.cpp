#include <stdio.h>
#include <string.h>
#include <time.h> //necessário para usar localtime() e struct tm
int main(void)
{
  //ponteiro para struct que armazena data e hora  
  struct tm *data_hora_atual;  
  char mes[15];   
  
  //variável do tipo time_t para armazenar o tempo em segundos  
  time_t segundos;
  
  //obtendo o tempo em segundos  
  time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
  data_hora_atual = localtime(&segundos);  
  
  //para acessar os membros de uma struct usando o ponteiro
  //utilizamos o operador -> no nosso caso temos: 
  //data_hora_atual->membro_da_struct
  
  
  
  switch (data_hora_atual->tm_mon)
  {
  	case 0:
  		strcpy(mes, "janeiro");
  		break;
  	case 1:
  		strcpy(mes, "fevereiro");
  		break;
  	case 2:
  		strcpy(mes, "marco");
  		break;
  	case 3:
  		strcpy(mes, "abril");
  		break;
  	case 4:
  		strcpy(mes, "maio");
  		break;
  	case 5:
  		strcpy(mes, "junho");
  		break;
  	case 6:
  		strcpy(mes, "julho");
  		break;
  	case 7:
  		strcpy(mes, "agosto");
  		break;
  	case 8:
  		strcpy(mes, "setembro");
  		break;
  	case 9:
  		strcpy(mes, "outubro");
  		break;
  	case 10:
  		strcpy(mes, "novembro");
  		break;
  	case 11:
  		strcpy(mes, "dezembro");
  		break;
  }
  	
	//Acessando dados convertidos para a struct data_hora_atual  
	printf("%d de %s de %d\n", data_hora_atual->tm_mday, mes, data_hora_atual->tm_year+1900);
  
  return 0;
}
