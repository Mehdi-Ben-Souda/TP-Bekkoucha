int	afficher_horizontal_Tarb(arb Arb,int ind,int niveau)
{
	if(ind==-1)
		return (int)-5;
		
	afficher_horizontal_Tarb(Arb,Arb.TAB[2][ind],++niveau);
	for(int i=0;i<niveau;i++)printf("\t");
	printf("%d\n",Arb.TAB[0][ind]);
	afficher_horizontal_Tarb(Arb,Arb.TAB[1][ind],niveau);
	
	return (int)0;	
}
