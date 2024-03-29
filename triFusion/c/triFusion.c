 
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

void fusion(int * list, int a, int b, int c)
{
   int * tempList;
   tempList = (int*)malloc((b-a+1)*sizeof(int));

   for(int i=a; i<=b; i++)
      tempList[i-a] = list[i];
      
      
   int z = b+1;
   int counter1 = a;
   int counter2 = z;


   for(int i=a; i<=c; i++)
   { 
      if(counter1==z) 
         break; 
      else if(counter2==(c+1)) 
      { 
         list[i] = tempList[counter1-a];
         counter1++;
      }
      else if(tempList[counter1-a]<list[counter2])
      { 
         list[i] = tempList[counter1-a];
         counter1++; 
      }
      else
      { 
         list[i] = list[counter2];
         counter2++; 
      }
   }
   free(tempList);
}
void divide(int * list, int a, int b)
{
   if(a!=b) 
   {
      int mid = (a+b)/2;
      divide(list, a, mid);
      divide(list, mid+1, b); 
      fusion(list, a, mid, b); 
   }
}

void triFusion(int *  list,  int size)
{		
	  if (size>0)
      	 divide(list, 0, size - 1);
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
	for(int i=0;i<10;i++)
		printf("%d ",list2[i]);
	printf("\n");
	triFusion(list2,10);
	for(int i=0;i<10;i++)
		printf("%d ",list2[i]);
	printf("\n");
}
