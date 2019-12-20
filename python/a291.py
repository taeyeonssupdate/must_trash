import sys

while True:
    answer = sys.stdin.readline().split('\n')[0].split(' ')
    for i in range(int(sys.stdin.readline().strip())):
        input_geust = sys.stdin.readline().strip().split(' ')
        countA = 0
        countB = 0
        existsA = []
        if input_geust[0] == '':
            print()
            continue
        for j in range(4):
            if input_geust[j] in existsA:
                continue
            if input_geust[j] == answer[j]:
                countA+=1
                existsA.append(input_geust[j])
                continue
            if input_geust[j] != answer[j]:
                if input_geust[j] in existsA:
                    continue
                else:
                    if input_geust[j] in answer:
                        countB+=1
        print('{}A{}B'.format(countA,countB))
