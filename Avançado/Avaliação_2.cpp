 Pergunta: Indique as principais diferenças entre uma “struct” e uma “union”,
exemplificando cada uma delas.
 	
 Resposta: As principais diferenças entre uma Struct e uma Union são:
 	
 	- Union o tamanho é determinado através do tamanho do maior elemento, enquanto que na Struct eu consigo definir o tamanho.
 	- Union apenas um elemento pode guardar um valor válido a qualquer momento.
 	- Union usa-se mais quando é necessário guardar uma de várias possibilidades de tipos de data na mesma memória, de forma a guardar espaço na memória.
 	Por exemplo, uma variável pode ser do tipo float, char ou int, mas nunca todas ao mesmo tempo. Na Struct, isto não acontece, 
 	podemos ter vários tipos de variáveis ao mesmo tempo.

	Struct:
		
struct Candidato {
	char nome[20];
	char cidade[50];
	int telefone;
	int idade;
};

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i;
	struct Pessoa p[2];
	
	for(i = 0; i < 2; i++){
        printf("Insira o seu nome: ");
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        printf("Insira a sua cidade: ");
        fgets(p[i].cidade, sizeof(p[i].cidade), stdin);
		printf("Insira o seu numero de telefone: ");
		scanf("%d", &p[i].telefone);
		getchar();
		printf("Insira a sua idade: ");
		scanf("%d", &p[i].idade);
		getchar();
	}

	for(i = 0; i < 2; i++){	
	printf("\nNome: %s\nCidade: %s\nTelefone: %d\nIdade: %d\n",p[i].nome,p[i].cidade,p[i].telefone,p[i].idade);	
	}
	
	return 0:
		
	}
	
	Union:
		
struct Candidato {
	char nome[20];
	char cidade[50];
	char partido[20]
	char cargo[20]
};

int main(){

	setlocale (LC_ALL, "Portuguese");
	
	int i;
	struct Pessoa p[2];
	
	for(i = 0; i < 2; i++){
        printf("Insira o seu nome: ");
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        printf("Insira a sua cidade: ");
        fgets(p[i].cidade, sizeof(p[i].cidade), stdin);
		printf("Insira o seu partido: ");
		fgets(p[i].partido, sizeof(p[i].partido), stdin);
		printf("Insira o cargo que se vai candidatar: ");
		fgets(p[i].cargo, sizeof(p[i].cargo), stdin);
	}

	for(i = 0; i < 2; i++){	
	printf("\nNome: %s\nCidade: %s\nPartido: %s\nCargo: %s\n",p[i].nome,p[i].cidade,p[i].partido,p[i].cargo);	
	}
	
	return 0:
		
	}
