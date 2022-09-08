if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    result=[]
    a = [i for i in range(x+1)]
    b = [j for j in range(y+1)]
    c = [k for k in range(z+1)]
    for x in a:
        for y in b:
            for z in c:
                if (x+y+z)!=n:
                    result.append([x,y,z])
    print(result)