arr=[]
while True:
    arr = [list(map(str, input().split())) for i in range(4)]

    if arr==3:
        break

for i in arr:        
    for j in i:   
        print(j, end='')
    print()
