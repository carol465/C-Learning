 Pergunta: Qual a importância da alocação dinâmica de memória. Exemplifique com um
trecho de código, devidamente comentado, a sua implementação.

 Resposta: A alocação dinâmica de memória é fundamental uma vez que esta evita a exaustão do programa e por consequencia a melhora a sua perfomance.
 
 FILE *fp;
    
    
	char buffer[150];

    fp = fopen("doc.txt", "w");

    if (fp == NULL) {
        perror("Erro ao abrir o ficheiro 'doc.txt' para leitura");
        return 1;
    }


    fclose(fp);