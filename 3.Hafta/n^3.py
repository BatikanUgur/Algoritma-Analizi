def parcala(list):
	d = len(list) / 2
	a = list[:d]
	b = list[d:]
	
	x = 0
	a_enbuyuk = 0

	y = 0
	b_enbuyuk = 0

	for i in range (d-1,-1,-1):
		x = a[i]+x
		if (x > a_enbuyuk):
			a_enbuyuk = x
	for j in range (0,d):
		y = b[j]+y
		if (y > b_enbuyuk):
			b_enbuyuk = y
	toplam = a_enbuyuk+b_enbuyuk	

	return find_max_triple(a_enbuyuk,b_enbuyuk,toplam)

def find_max_triple(a,b,c):
    if a>b:
        if b>c:
            return a
        elif a>c:
            return a
        else:
            return c
    elif b>c:
        return b
    else:
        return c

liste = [1,4,-3,2,6,-1,-2,4]
print parcala(liste);

