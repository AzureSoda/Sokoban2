while True:
   
    arr = [list(map(str, input().split())) for i in range(4)]

    for i in arr:        
        for j in i:   
            print(j, end=' ')
        print()

    if arr=='':
        break
