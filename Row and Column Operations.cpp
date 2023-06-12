n,operations=map(int,input().split())
r=[0]*(n+1)
c=[0]*(n+1)
for i in range(operations):
    l=input().split()
    l[1]=int(l[1])
    l[2]=int(l[2])
    if l[0]=='RowAdd':
        r[l[1]]+=l[2]
    else:
        c[l[1]]+=l[2]
print(max(r)+max(c))
