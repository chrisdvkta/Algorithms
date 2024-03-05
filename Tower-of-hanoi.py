def hanoi (n, source, target,spare):
    global count; 
    if n>0:
        hanoi(n-1,source,spare,target)
        target.append(source.pop())
        count = count +1
        hanoi(n-1,spare,target,source)



num_moves = []
for x in range(1,25):
    A = list(range(x,0,-1))
    B = []
    C = []
    count = 0 
    hanoi(x,A,C,B)
    num_moves.append(count)
print(num_moves)