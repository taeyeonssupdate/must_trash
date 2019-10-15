x = int(input('Number: '))
line = [str(x) for x in range(x*2+1)]
print(line)
for x in range(0,x):
    print(line[x])
for x in range(x,len(line)):
    print(line[x])