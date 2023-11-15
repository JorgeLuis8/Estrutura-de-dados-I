Contato atribuir (Contatoc ,int numerosContatos,int QtdContatos) {
    int i,j,QtdEtiquetas;
    c = (Contato) realloc (c, numerosContatos sizeof(Contato));
    if (!c) {
        printf ("Erro na alocacao");
        exit(1);
    }

    for (i=QtdContatos;i<QtdContatos + numerosContatos;i++) {
        printf ("Digite o nome do contato: ");
        scanf ("%s", c[i].nome);
        printf ("Digite o numero do contato: ");
        scanf ("%d", &c[i].numero);
        printf ("Quantas etiquetas deseja adicionar? ");
        scanf ("%d", &QtdEtiquetas);
        c[i].QtdEtiquetas = QtdEtiquetas;

        c[i].etq = (Etiqueta) malloc (QtdEtiquetas sizeof(Etiqueta));
        if (!c[i].etq) {
            printf ("Erro na alocacao");
            exit (1);
        }

        for (j=0;j<QtdEtiquetas;j++) {
            printf ("Digite a etiqueta: ");
            scanf ("%s", c[i].etq[j].palavra);
        }
        printf ("\n");
    }

    return c;
}