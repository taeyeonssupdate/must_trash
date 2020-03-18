while True:
    try:
        answer = input().strip().split(' ')
        if answer[0] == '': continue
        for _ in range(int(input())):
            cache = answer.copy()
            guest = input().strip().split(' ')
            A = 0
            for i in range(len(cache)-1,-1,-1):
                if cache[i] == guest[i]:
                    cache.pop(i)
                    guest.pop(i)
                    A += 1
            B = 0
            for i in range(len(cache)):
                for j in range(len(guest)):
                    if guest[j] == cache[i]:
                        B += 1
                        guest.pop(j)
                        break
            print('{}A{}B'.format(A, B))
    except EOFError:
        exit(0)
#100 90 185 120 80 150 140 180 110 150 50
#100 90 185 120 150 140 110 150 50
