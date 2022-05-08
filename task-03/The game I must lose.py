import math

n, m = map(int, input().split())
count=0
arr = []
added = False

if n%2:
    print("0")
    exit()
    
while(n%2==0):
    count += 2
    n = n/2

#print(count)

for i in range(1, m+1):
    if i%2:
        arr.append(i)
        added = True
    if i%(count)==0:
        continue
    if not added:
        arr.append(i)
    added = False

print(len(arr))
print(*arr)
