import random
filename1 = '第一句.txt'
filename2 = '第二句.txt'
filename3 = '第三句.txt'

with open(filename1) as file:
    sentences1 = file.readlines()

with open(filename2) as file:
    sentences2 = file.readlines()

with open(filename3) as file:
    sentences3 = file.readlines()

sentences1 = [sentence.strip() for sentence in sentences1]
sentences2 = [sentence.strip() for sentence in sentences2]
sentences3 = [sentence.strip() for sentence in sentences3]
print(random.choice(sentences1)+'，'+random.choice(sentences2)+'，'+random.choice(sentences3)+'。')
