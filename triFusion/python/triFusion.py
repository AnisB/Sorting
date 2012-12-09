 
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
 	

# Fonction de fusion
def fusion(list1,list2):
	total = list1+list2
	temp=total[:]
	base =len(list1)
	top =len(temp)	
	for i in range(base, top):
		temp[i]=0

	z = base
	countera = 0
	counterb = base 
	for i in range(0, top):
		if countera==z :
			break
		elif counterb==(top) :
			total[i] = temp[countera]
			countera = countera+1
		elif temp[countera-0]<total[counterb] :
			total[i] = temp[countera]
			countera = countera+1
		else :
			total[i] = total[counterb]
			counterb = counterb+1
	return total
    
    
#Fonction de division    	
def divide(listX):
    if len(listX)>1 :
		a = listX[:len(listX)/2]
		b = listX[len(listX)/2 :]
		a=divide(a)
		b=divide(b)
		result = fusion(a,b)
		return result
    else:
    	return listX
    	


# Appel global
def triFusion(A):
    if len(A)> 0 :
    	return divide(A)
    	
	    	
	    
# Exemples	    	
local = [1,4,29,3,6]
local = triFusion(local)
print(local)

local = [90,4,29,3,6,122,2,1,9]
local = triFusion(local)
print(local)
