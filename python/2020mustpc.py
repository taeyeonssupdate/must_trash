# #1-1

# #1-2
# print('*')
# print('*'*2)
# print('*'*3)
# print('*'*4)
# print('*'*5)

# #1-3
# print('    *    ')
# print('   **    ')
# print('  *****  ')
# print(' ******* ')
# print('*********')

# #1-4
# print('********')
# print('********')
# print('**    **')
# print('**    **')
# print('********')
# print('********')

# #1-5
# surname = 'Anton'
# name = 'Bruckner'
# print(surname,name)
# print(f'{surname}\n{name}')
# print(surname,end='')
# print(name)

# #1-6
# print(input('Please input name and address: '))

# #1-7
# print("See you tomorrow.\nHave a good night.")

# #1-8
# print('”You are my best friend.”')

# #1-9
# print('”歡迎進入 C 語言程式設計!”')
# print('*****\n****\n***\n**\n*')

# x = input('Please input numA: ')
# y = input('Please input numB: ')
# if x>y:
#     print(x, 'is larger')
# elif x<y:
#     print(y, 'is larger')
# else:
#     print('these numbers are equal')

# #2-1

# #2-2

# #2-3
# print(6+7+24)

# #2-4

# #2-6
# import sys
# print(sys.getsizeof(578))
# print(sys.getsizeof(784000000))
# print(sys.getsizeof(6.78))
# print(sys.getsizeof(718.26))
# print(sys.getsizeof(6.42e127))

# #2-7
# num1 = 123.39
# num2 = 3.8*10**5
# print(int(num1))
# print(int(num2))

# #2-8
# print(int(input('請輸入呎：'))*12*2.54+int(input('請輸入吋：'))*2.54)

# #2-9
# x = int(input('Please input num1: '))
# y = int(input('please input num2: '))
# print(f"""sum of x and y = {x+y}
# difference of x and y = {abs(x-y)}
# product of x and {x*y}
# quotient of x divided by y {x//y}
# """)

# #2-10
# print('學期分數為{}'.format(int(input('期中考： '))+int(input('期末考： '))+int(input('平時： '))))

# #2-11
# x = int(input('長：'))
# y = int(input('寬：'))
# print(f'割草所需時間為：{x*y/2}/sec')

# #2-12
# if not int(input("請問你要轉換成1.華氏還是2.攝氏? "))-1: 
#     print('攝氏為{:06.2f}'.format((int(input('請輸入華氏: '))-32)*5/9))
# else:
#     print('攝氏為{:06.2f}'.format(int(input('請輸入攝氏: '))*9/5+32))

# #2-13
# print("\aStartled by the sudden sound, Sally shouted,\n“By the Great Pumpkin, what was that!”")

# #2-14
# from fractions import Fraction
# x1 = int(input('num1 分子: '))
# x2 = int(input('num1 母子: '))
# y1 = int(input('num2 分子: '))
# y2 = int(input('num2 母子: '))

# print(Fraction(x1,x2)*Fraction(y1,y2))

# #2-15
# m = int(input('輸入三角形其中一邊m: '))
# n = int(input('輸入三角形其中一邊n: '))

# print('side1={},side2={},hypotenuse={}'.format(m**2-n**2,2*m*n,m**2+n**2))

# #2-16

# #2-17
# print('你已活了{}秒'.format(int(input('請輸入您的年齡： '))*365*24*60*60))
# print('你已活了{}秒'.format(int(int(input('請輸入您的年齡： '))*3.156*10**7)))

# #2-18

# #2-19
# x = float(input('Please input float: '))
# print('The input is {:.6f} or {:.2e}.'.format(x,x))

# #2-21
# x = [3.0,4.0,(2/3)]
# a = [2.0,4.0,(2/3)]
# b = [10.0,5.0,12.0]
# y = [2.0,4.0,(2/3)]
# math1 = '2*x**2-4*4+1'
# math2 = 'a[i]**2+b[i]'
# math3 = '3*y**2+8*y+4'
# print('1.\n', ' '.join(map(str, [eval(math1) for x in x])))
# print('2.\n', ' '.join(map(str, [eval(math2) for i in range(len(a))])))
# print('3.\n', ' '.join(map(str, [eval(math3) for y in y])))

# #2-22
# x = [10,20,50]
# print('\n'.join(map(str,[2*3.1415*r/2+2*r for r in x])))

# #2-23
# print("攝氏溫度為{}°c".format(5/9*(int(input('請輸入華氏溫度:'))-32)))

# #2-24
# class Toes():
#     def __init__(self,toes):
#         self.toes = int(toes)
#         self.toes_2x = self.toes*2
#         self.toes_square = self.toes**2

# toes = Toes(input('Please input toes:'))
# print(toes.toes)
# print(toes.toes_2x)
# print(toes.toes_square)

# #2-25
# _form = float(input('[里程退款運算器]\n請輸入開始里程數= >'))
# _to = float(input('請輸入結束里程數 =>'))
# print('您一共行進了 {:.1f} 英哩。以每英哩 0.35 元計。 \n您的退款總計為 ${:.2f}。'.format(_to-_form,(_to-_form)*0.35))

# 2-26

# #2-27
# x = input('please input num: ').split(' ')
# x.insert(1, '*')
# print(eval(''.join(x)))

import pandas
