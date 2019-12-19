import sys
for x in sys.stdin:
    if len(x.split('/')[-1].split('\n')[0]) == 1:
        x = int(x.split('/')[0]+'0{}'.format(x.split('/')[-1].split('\n')[0]))
    else:
        x = int(''.join(x.split('/')))
    if (x >= 1223 and x <= 1231) or (x>=101 and x<121):
        print('摩羯座')
    elif x >= 1123:
        print('射手座')
    elif x >= 1024:
        print('天蠍座')
    elif x >= 924:
        print('天秤座')
    elif x >= 822:
        print('處女座')
    elif x >= 723:
        print('獅子座')
    elif x >= 622:
        print('巨蟹座')
    elif x >= 522:
        print('雙子座')
    elif x >= 421:
        print('金牛座')
    elif x >= 321:
        print('牡羊座')
    elif x >= 220:
        print('雙魚座')
    elif x >= 121:
        print('水瓶座')
