while True:
   
    arr=[]
    for i in range(4):
        arr.append(map(str,input().split()))

    for i in arr:        
        for j in i:   
            print(j, end=' ')
        print()

    if len(arr)==0:
        break