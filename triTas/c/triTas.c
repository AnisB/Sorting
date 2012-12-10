 
/**
  * Ce document est la proprité d'Anis Benyoub, c'est une implémentation 
  * d'un algorithme de tri sur un tableau d'élement, ces algorithmes sont 
  * implémentés dans différents langages C, python,lua, etc.
  * @see https://auzaiffe.alwaysdata.net
  * @author 2012-2013 Anis Benyoub <benyoub.anis@gmail>
  * @see The GNU Public License (GPL)
  */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
 
#include <stdio.h>
#include <stdlib.h>


void display(int * liste, int size)
{
		for(int i=0;i<size;i++)
			printf("%d ",liste[i]);
		printf("\n");

}
void entasser(int * liste,int first, int second)
{
	int k =first;
	int j=(2*k);
	while(j<=second)
	{
		if((j<second) && (liste[j]<liste[j+1]))
			j++;
			
		if (liste[k]<liste[j])
		{
			int temp = liste[j];
			liste[j]=liste[k];
			liste[k]=temp;
			k=j;
      		j=2*k;
		}
		else
			return;
	}
}


void triTas(int * liste, int size)
{
	for(int i=(size/2);i!=-1;i--)
	{
		entasser(liste,i,size-1);
	}
	for(int i=(size-1);i!=0;i--)
	{
		int temp = liste[0];
		liste[0]=liste[i];
		liste[i]=temp;
		entasser(liste,0,i-1);
	}
}

int main()
{
	int * list=	(int*)malloc((10)*sizeof(int));
	int j=1;
	int k=2;
	list[0]=j;
	list[1]=k;
	for(int i=2;i<10;i++)
	{
		list[i]=(j+k);
		j=k;
		k=list[i];
	}
	
	
	int * list2=(int*)malloc((10)*sizeof(int));
	for(int i=0;i<10;i++)
	{
		list2[10-i-1]=list[i];
	}	
	display(list2,10);
	triTas(list2,10);
	display(list2,10);
}