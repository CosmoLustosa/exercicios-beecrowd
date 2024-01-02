#include <stdio.h>
#include <string.h>

int main(){
	int num, num2;
	int j, i=0;
	int k, l, conta_idioma=0;
	scanf("%d", &num);
	struct Pessoa{
		char idioma[21];
	}falante[101];
	
	for(; i<num; i++){
		scanf("%d", &num2);		
		for(j=0; j< num2; j++){
			scanf("%s", falante[j].idioma);
			getchar();				
		}			
		for(k=0; k<num2; k++){
			for(l=k+1; l<num2; l++){
				if(strcmp(falante[k].idioma, falante[l].idioma) != 0){
					conta_idioma++;				
				}								
			}			
		}
		
		if(conta_idioma != 0){
			printf("ingles\n");	
			conta_idioma=0;	
		}else{
			printf("%s\n", falante[0].idioma);	
			
		}
				
	}
	return 0;
}
