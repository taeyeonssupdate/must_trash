import math

pet = input('你家的毛小孩是「貓咪」還是「狗狗」？')

if(pet == '狗狗'):
    dog_age = input('狗狗幾歲了？')
    human_age = int(16*math.log(int(dog_age))+31)
    print('你家的某某是人類的', human_age, '歲')
elif(pet == '貓咪'):
    cat_age = int(input('貓咪幾歲了'))
    if (cat_age == 1):
        human_age = 15
    elif(cat_age == 2):
        human_age = 24
    else:
        human_age = 24+(cat_age-2)*4
    print('你吃家的貓咪是人累的', human_age, '歲')
else:
    print('只能輸入「貓咪」或「狗狗」喔！')
