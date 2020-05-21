cases = int(input())

for i in range(cases):
    total_distance = 0

    n, q = input().split()
    n, q = int(n), int(q)
    ini = 0
    for i in range(q):
        fi, di = input().split()
        fi, di = int(fi), int(di)
        total_distance += abs(fi - ini) + abs(fi - di)
        ini = di
    print(total_distance)



