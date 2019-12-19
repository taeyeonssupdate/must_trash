import math
import sys
def getChildren(num):
    isZhishu = True
    i = 2
    square = int(math.sqrt(num)) + 1
    while i <= square:
        if num % i == 0:
            list.append(i)
            isZhishu = False
            getChildren(num / i)
            i += 1
            break
        i += 1
    if isZhishu:
        list.append(int(num))

for number in sys.stdin:
    list = []
    list_output = []
    done_num = []
    getChildren(int(number))
    for i in range(len(list)):
        if list[i] not in done_num:
            if list.count(list[i]) != 1:
                list_output.append('{}^{}'.format(list[i], list.count(list[i])))
                done_num.append(list[i])
            else:
                list_output.append(list[i])
    for i in range(len(list_output)):
        list_output[i] = str(list_output[i])
    out_text = ''
    for i in range(len(list_output)-1):
        out_text = out_text + ' * ' + list_output[i]
    out_text = out_text.split(' * ',1)[-1]
    if '*' not in list_output[-1] and out_text != '2':
        out_text = out_text + ' * ' + list_output[-1]
    if len(list_output) == 1:
        print(list_output[-1])
    else:
        print(out_text)
