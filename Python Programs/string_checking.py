n=input("Enter the string:")
m=n.lower()
vowel=0
consonants=0
qmark=0
words=1
u=0
l=0
digit=0
i=0
while m[i]!=0:
	if m[i]=='a' or m[i]=='e' or m[i]=='i' or m[i]=='o' or m[i]=='u':	
		vowel+=1
	a=ord(n[i])
	if a>=65 and a<=122:
		consonants+=1
	elif m[i]=='?':
		qmark+=1
	elif m[i]==' ':
		words+=1

	elif a>=65 and a<=90:
		u+=1
	elif a>=97 and a<=122:
		l+=1
	elif a>=48 and a<=57:
		digit+=1
	i=i+1
print("vowel =",vowel)
print("consonants =",consonants)
print("qmark =",qmark)
print("words=",word)
print("uppercase letters =",l)
print("lowercase letters =",l)
print("digits=",digit)
