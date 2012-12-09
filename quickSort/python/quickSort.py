 
#
  # Ce document est la proprité d'Anis Benyoub, c'est une implémentation 
  # d'un algorithme de tri sur un tableau d'élement, ces algorithmes sont 
  # implémentés dans différents langages C, python,lua, etc.
  # @see https://auzaiffe.alwaysdata.net
  # @author 2012-2013 Anis Benyoub <benyoub.anis@gmail>
  # @see The GNU Public License (GPL)
#

#
 # This program is free software; you can redistribute it and/or modify
 # it under the terms of the GNU General Public License as published by
 # the Free Software Foundation; either version 2 of the License, or
 # (at your option) any later version.
 #
 # This program is distributed in the hope that it will be useful, but
 # WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 # or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 # for more details.
 #
 # You should have received a copy of the GNU General Public License along
 # with this program; if not, write to the Free Software Foundation, Inc.,
 # 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
#
 
 
 
#Algorithme de quick sort
def quickSort(L):
	left=0
	right=(len(L)-1)
	lHold=left
	rHold=right
	pivot=L[0]
	while left< right :
		while L[right] >= pivot and  left<right :
			right =(right-1)
		if left!=right:
			L[left]=L[right]
			left=(left+1)
		while (L[left] <=pivot) and (left < right) :
			left=left+1
		if left!= right : 
			L[right] = L[left]
			right= right-1
	L[left] = pivot
 	pivot = left
	left = lHold
	right = rHold
	l1=L[left: pivot];
	li = [L[pivot]]
	l2=L[pivot+1:right+1];
	if left < pivot :		
		l1=quickSort(L[left: pivot])
		
	if right > pivot :
		l2=quickSort(L[pivot+1:right+1])

	result = l1+li+l2
	return result 
	
	    	


# Exemple	    	
local = [1,4,29,3 ,88, 2, 100, 150, 5]
local = quickSort(local)
print("Solution 1",local)

local = [90,4,29,3,6,122,2,1,9]
local = quickSort(local)
print("Solution 2",local)
