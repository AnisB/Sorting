 
#
  # Ce document est la proprite d Anis Benyoub, c est une implementation 
  # d'un algorithme de tri sur un tableau delement, ces algorithmes sont 
  # implementes dans differents langages C, python,lua, etc.
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
 	

# Fonction d'entassage
def entasser(liste,first,second):
	k=first
	j = 2*k
	while j<=second:
		if (j<second )and (liste[j]<liste[j+1]):
			j=j+1
		if liste[k] < liste[j]:
			temp = liste[j]
			liste[j]=liste[k]
			liste[k]=temp
			k=j
			j=2*k
		else:
			return liste
	return liste



# Appel global
def triTas(A):
	limit = (len(A)/2) 
	for i in xrange(limit,-1,-1):
		A=entasser(A,i,len(A)-1)

	for i in xrange(len(A)-1,0,-1):
		temp = A[0]
		A[0]=A[i]
		A[i]=temp
		A=entasser(A,0,i-1)
	return A    	
	    	
	    
# Exemples	    	
local = [1,4,29,3,6]
local = triTas(local)
print(local)

local = [10,9,8,7,6]
local = triTas(local)
print(local)

local = [90,4,29,3,6,122,2,1,9]
local = triTas(local)
print(local)
