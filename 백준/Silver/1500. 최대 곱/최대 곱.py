s, k = map(int, input().split())

q = s // k 
r = s % k  

if r > 0:    
    print((q**(k-r)) * ((q+1)**r))
else:
    print(q ** k)