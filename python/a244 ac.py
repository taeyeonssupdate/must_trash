import sys
# #v1 AC
# for x in range(int(input())):
#     x = input().split(' ')
#     if x[0] == '1':
#         print(eval('{}+{}'.format(x[1],x[2])))
#     elif x[0] == '2':
#         print(eval('{}-{}'.format(x[1],x[2])))
#     elif x[0] == '3':
#         print(eval('{}*{}'.format(x[1],x[2])))
#     elif x[0] == '4':
#         print(int(eval('{}/{}'.format(x[1],x[2]))))

#v2 AC
def output(c):
    print(int(eval('{}{}{}'.format(x[1],c,x[2]))))

for x in range(int(input())):
    x = input().split(' ')
    if x[0] == '1':
        output('+')
    elif x[0] == '2':
        output('-')
    elif x[0] == '3':
        output('*')
    elif x[0] == '4':
        output('/')
