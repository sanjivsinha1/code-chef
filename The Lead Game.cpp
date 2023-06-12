# cook your dish here
n=int(input())
p=0;m=0
p1=0;p2=0
for i in range(n):
    x,y=map(int,input().split())
    p1+=x;p2+=y
    if(p1-p2)>m:m=(p1-p2);p=1
    if(p2-p1)>m:m=(p2-p1);p=2 
print(p,m)
