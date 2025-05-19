t = int(input())

for _ in range(t):
    a = int(input())
    Permutation_list = []
    for i in range(1,a+1):
        Permutation_list.append(i)
    
    for p in range(a): 
        if p != a-1:
            if p+1 == Permutation_list[p]:
                Permutation_list[p],Permutation_list[p+1] = Permutation_list[p+1],Permutation_list[p]
        else:
            if p+1 == Permutation_list[p]:
                Permutation_list[p],Permutation_list[p-1] = Permutation_list[p-1],Permutation_list[p]
    
    for p in range(a-1): 
        print(Permutation_list[p],end=' ')
    print(Permutation_list[a-1])