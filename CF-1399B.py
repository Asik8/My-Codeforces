t = int(input())

for _ in range(t):
    a = int(input())
    choco = list(map(int,input().split()))
    orange = list(map(int,input().split()))
    min_choco = min(choco)
    min_orange = min(orange)
    
    count = 0
    
    for i in range(a):
        if choco[i] != min_choco and orange[i] != min_orange:
            cho = choco[i] - min_choco
            ora = orange[i] - min_orange
            if cho == ora:
                count += cho
            else:
                count += min(cho,ora)
                if min(cho,ora) != cho:
                    count += cho - ora
                elif min(cho,ora) != ora:
                    count += ora - cho
        elif choco[i] != min_choco and orange[i] == min_orange:
            count += choco[i] - min_choco
            
        else:
            count += orange[i] - min_orange
    
    print(count)