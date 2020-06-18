#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int menu_inicial () {
	
	
	int opcao;
	setlocale(LC_ALL, "Portuguese");
	while (1) {
		puts("Olá! Seja bem vindo! :-)");
		puts("----------------------------");
		puts("1 - Login");
		puts("2 - Cadastro");
		puts("----------------------------");
		puts("0 - Sair");
		scanf("%d", &opcao);
		
		switch (opcao) {
			case 1:
				login();
				break;
			case 2:
				cadastro();
				break;
			case 0:
				return 0;
				break;
			default:
				system("cls");
				puts("Opção Inválida!!!\n");
				break;	
			
		}
		fflush(stdin);
	}
	
	return 0;
	
}




int cadastro() {
	
	char nome[50], email[50], senha[50];
	int existe;
	
	fflush(stdin);
	puts("--------Crie seu cadastro--------");
	puts("Nome:");
	gets(nome);
	puts("Email:");
	gets(email);
	puts("Senha:");
	gets(senha);
	
	existe = valida_cadastro(email);
	
	if (existe != 0){
	
		FILE *cadastro;
		cadastro = fopen("cadastro.txt", "a");
		if (cadastro != NULL) {
	
			fprintf(cadastro, "%s ", nome);
			fprintf(cadastro, "%s ", email);
			fprintf(cadastro, "%s\n", senha);
			fclose(cadastro);
			puts("Cadastro realizado!");
			login();
		} else {
			puts("Erro");
			return 1;
		}
	}else {
		puts("Cadastro já existe!\n\n");
		cadastro();
		
	}
}





int valida_cadastro(char email_usuario[]) {
	FILE *cadastro;
	char email[50];
	int i=0;
	cadastro = fopen("cadastro.txt", "r");
	
	while ((fscanf(cadastro, "%s", &email)) != EOF) {
		
		switch (i){
			case 0:
				i++;
				break;
			case 1:
				if ((strcmp(email_usuario,email)) == 0) {
				
					return 0;
				}
				i++;
				break;
			case 2:
				i=0;
				break;
				
		}
			
		}
		return 1;
	}
	
	
	
	
int login(){
	
	char nome[50], email[50], senha[50];
	int existe=1;
	
	while (existe !=0 ) {
		fflush(stdin);
		puts("--------Login--------");
		puts("Email:");
		gets(email);
		puts("Senha:");
		gets(senha);
	
		existe = valida_login(&nome,email,senha);
		
		if (existe == 0) {
			menu_principal(nome,email);
		}
	}
}




int valida_login(char *nome_usuario, char email_usuario[], char senha_usuario[]) {
	FILE *cadastro;
	char arquivo[50];
	int i=0, flag_email=1,flag_senha=1;
	cadastro = fopen("cadastro.txt", "r");
	
	fflush(stdin);
	
	while ((fscanf(cadastro, "%s", &arquivo)) != EOF) {
		
		switch (i){
			case 0:
				strcpy(nome_usuario,arquivo);
				i++;
				break;
			case 1:
				flag_email = strcmp(email_usuario,arquivo);
				i++;
				break;
			case 2:
				flag_senha = strcmp(senha_usuario,arquivo);
				if (flag_email == 0 && flag_senha == 0) {
					puts("Login realizado com sucesso!");
					return 0;
				}else if (flag_email == 0 && flag_senha != 0) {
					puts("Senha incorreta!");
					login();
				}else {
					i=0;
					break;
				}
				
		}
			
		}
		
		
		fclose(cadastro);
		
	}
	
void montar_viagem (char email[], char nome[]){
	int opcao, qtd;
	char local[50];
			
	printf("1 - praias\n2 - Locais Historicos\n3 - Restaurantes\n4 - Teatros\n5 - Voltar\n");
	scanf("%d", &opcao);
	switch (opcao){
		
		case 1:
		    system("cls");
			qtd = contar_linhas("praias.txt");
        	ler_opcoes("praias.txt", qtd, email, nome);
        	fflush(stdin);
        	getchar();
        	break;
		case 2:
		    system("cls");
			qtd = contar_linhas("locais_historicos.txt");
        	ler_opcoes("locais_historicos.txt", qtd, email, nome);
        	fflush(stdin);
        	getchar();
       		break;
		case 3:
		    system("cls");
			qtd = contar_linhas("restaurantes.txt");
        	ler_opcoes("restaurantes.txt", qtd, email, nome);
        	fflush(stdin);
        	getchar();
			break;
		case 4:
		    system("cls");
			qtd = contar_linhas("teatros.txt");
        	ler_opcoes("teatros.txt", qtd, email, nome);
        	fflush(stdin);
        	getchar();
			break;
		case 5:
			menu_principal(nome,email);
			break;
		default:
		printf("Opção Invalida!\n");		
		montar_viagem(email,nome);	
	}
}




int menu_principal(char nome_usuario[], char email[]){

	int menuprincipal,qtd;
	fflush(stdin);
    system("cls");
    printf("Seja bem-vindo %s!!!\n\n", nome_usuario);
    printf(" MENU PRINCIPAL\n 1 - VISUALIZAR VIAGENS \n 2 - MONTAR VIAGENS \n 3 - ESCOLHER ROTEIROS \n 4 - SAIR\n");
    scanf("%d", &menuprincipal);
    switch (menuprincipal) {
    case 1:
        system("cls");
        printf("%s, esse é o seu roteiro:\n", nome_usuario); //Viagens já montadas ou escolhidas pelo usuário
        qtd = contar_linhas(email);
        ler_roteiro(email,qtd,nome_usuario);
        break;
    case 2:
        montar_viagem(email,nome_usuario);
        break;
    case 3:
        system("cls");
        printf("ESCOLHER ROTEIROS\n"); //Escolher roteiro pronto para iniciar
        escolher_roteiro(nome_usuario,email);
		break;    
	case 4:
        system("cls");
        printf("Você pediu para sair\n");
        menu_inicial();
        break;
    default:
        printf("Voce deve escolher uma opcao valida\n");
    }
    
    return 0;
}

int escolher_roteiro(char nome_usuario[], char email[]) {
	int opcao, qtd;
	
	printf("1 - Roteiro praieiro\n2 - Roteiro Histórico\n3 - Roteiro Gastronômico\n4 - Voltar\n");
	scanf("%d", &opcao);
	
	switch (opcao) {
    case 1:
        system("cls");
        printf("%s, esse é o nosso roteiro praieiro:\n", nome_usuario); //Viagens já montadas ou escolhidas pelo usuário
        qtd = contar_linhas("roteiro1.txt");
        ler_roteiro_pronto("roteiro1.txt",qtd,nome_usuario, email);
        break;
    case 2:
    	system("cls");
        printf("%s, esse é o nosso roteiro histórico:\n", nome_usuario); //Viagens já montadas ou escolhidas pelo usuário
        qtd = contar_linhas("roteiro2.txt");
        ler_roteiro_pronto("roteiro2.txt",qtd,nome_usuario, email);
        break;
    case 3:
        system("cls");
        printf("%s, esse é o nosso roteiro Gastronômico:\n", nome_usuario); //Viagens já montadas ou escolhidas pelo usuário
        qtd = contar_linhas("roteiro3.txt");
        ler_roteiro_pronto("roteiro3.txt",qtd,nome_usuario, email);
        break;
    case 4:
    	system("cls");
    	menu_principal(nome_usuario,email);
    	break;
    default:
        printf("Voce deve escolher uma opcao valida\n");
    }
	
	return 0;
	
}

int ler_opcoes(char nome_arquivo[], int qtd_opcoes, char email[], char nome[]){	
	
    char locais[qtd_opcoes][50];
	int i, opcao;
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "r");	
	
	while(i < qtd_opcoes) {
	  	fgets(locais[i], 30, arquivo);
	  	i++;
    }

	for(i=0; i < qtd_opcoes; i++) {
	    	printf("%d - %s", i+1,locais[i]);
	    }
	    
	printf("%d - Voltar\n", i+1);
	
	fclose(arquivo);    
	
	scanf("%d", &opcao);
	
	if(opcao == (qtd_opcoes+1)) {
		montar_viagem(email,nome);	
	} else if (opcao > qtd_opcoes) {
		
		printf("Opçãop Inválida!\n");
	}else {
	
		opcao--;
		gravar_roteiro(locais[opcao],email,nome);
	}
	
	return 0;
}

int ler_roteiro(char nome_arquivo[], int qtd_opcoes, char nome_usuario[]){	
	
    char locais[qtd_opcoes][50];
	int i, opcao;
    FILE *roteiro;
    roteiro = fopen(nome_arquivo, "r");	
	
	while(i < qtd_opcoes) {
	  	fgets(locais[i], 30, roteiro);
	  	i++;
    }

	for(i=0; i < qtd_opcoes; i++) {
	    	printf("%d - %s", i+1,locais[i]);
	    }
	    
	printf("%d - Voltar\n", i+1);
	
	fclose(roteiro);    
	
	scanf("%d", &opcao);
	
	if(opcao == (qtd_opcoes+1)) {
		menu_principal(nome_usuario,nome_arquivo);	
	} else {
		
		printf("Opção Inválida!\n");
	}
	
	return 0;
}

int ler_roteiro_pronto(char nome_arquivo[], int qtd_opcoes, char nome_usuario[], char email[]){	
	
    char locais[qtd_opcoes][50];
	int i, opcao;
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "r");	
	
	while(i < qtd_opcoes) {
	  	fgets(locais[i], 30, arquivo);
	  	i++;
    }

	for(i=0; i < qtd_opcoes; i++) {
	    	printf("- %s",locais[i]);
	    }
	    
	printf("1 - Escolher\n2 - Voltar\n");
	
	fclose(arquivo);    
	
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			arquivo = fopen(email, "w");
			i=0;
			while(i <= qtd_opcoes) {
				fprintf(arquivo,"%s", locais[i]);
				i++;
			}
			fclose(arquivo);
			printf("Roteiro Escolhido\n");
			menu_principal(nome_usuario,email);
			break;
		case 2:
			escolher_roteiro(nome_usuario,email);
			break;
		default:
			printf("Opção inválida!!!\n");
			break;
	}
			
	return 0;
}

int gravar_roteiro(char local[], char email[], char nome[]){
	FILE *roteiro_pessoal;
	roteiro_pessoal = fopen(email, "a");
	
	fprintf(roteiro_pessoal,"%s", local);
	fclose(roteiro_pessoal);
	montar_viagem(email,nome);
}


int contar_linhas(char nome_arquivo[]) {

    FILE *contar;
    char c, letra = '\n';
    int linhas=0;

    contar = fopen(nome_arquivo,"r");

    while(fread(&c, sizeof(char), 1, contar)) {
        if(c == letra) {
            linhas++;
        }
    } 
    fclose(contar);
    //linhas--;
	return linhas;
}
