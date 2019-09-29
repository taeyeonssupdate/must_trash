import re
import sys
for i in sys.stdin:
    i = ''.join(re.findall('[a-zA-Z0-9]', i[:-1])).lower()
    if not len(i) % 2:
        num = (len(i)-1) // 2
        if i[0] == i[num-1] and i[mid] == i[mid:-1]:
            print('yes !')
        elif i[0:num] == i[num:][::-1]:
            print('yes !')
        else:
            print('no...')
    elif len(i) % 2:
        num = (len(i)-1) // 2
        mid = num+1
        if i[0] == i[num-1] and i[mid] == i[mid:-1]:
            print('yes !')
        elif i[0:num] == i[mid:][::-1]:
            print('yes !')
        else:
            print('no...')
