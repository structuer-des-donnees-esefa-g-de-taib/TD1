int remplis_liste(int tab[], int taille, Liste *l){
	int a;
	for(a=0;taille<=a;a++){
		insertion(l, tab[a] );
	}
	return 0;
}
