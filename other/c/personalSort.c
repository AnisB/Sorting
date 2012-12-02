#include <stdio.h>
#include <stdlib.h>

void insert(int * list,int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if ((list[i]>element) )
		{
			for(int j=size;j>=i;j--)
			{
				list[j]=list[j-1];
			}
			list[i]=element;
			return;
		}
	}
	list[size]=element;
	return;
}
void sort(int * list, int a, int b, int c)
{
   int *tempList = (int*)malloc((c-a+1)*sizeof(int));
   for(int i=a; i<=b; i++)
      	tempList[i-a] = list[i];
	 
      int compteur =(b-a+1);
   for(int i = b+1;i<=c;i++)
   {
   	 insert(tempList,compteur,list[i]);
   	 compteur++;
   }   
   for(int i=a; i<=c; i++)
      list[i]= tempList[i-a];
}


void personalSort(int *  list,  int size)
{		
	  if (size>0)
      	 sort(list, 0, 1,size - 1);
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
	personalSort(list2,10);
	for(int i=0;i<10;i++)
		printf("%d ",list2[i]);
	printf("\n");
}
