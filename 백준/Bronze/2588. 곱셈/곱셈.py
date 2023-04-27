a = int(input())
b = list(map(int, str(input())))
print(a*b[2], 
      a*b[1], 
      a*b[0], 
      a*b[2]+a*b[1]*10+a*b[0]*100, 
      sep='\n')