int calcule_longueur(Liste liste){
	int a,x;
	x=0;
	Liste *elem;
    Element *element;
    elem=elem->premier;
    while(elem != NULL){
    	x++;
    	elem = element->suivant;
	}
	return x;
}
