
arr=0
while True:
    try:
        arr=[]
        for i in range(4):
            arr.append(map(str,input().split()))

        for i in arr:        
            for j in i:   
                print(j, end='')
            print()
        break
    
    except:
        print("end")