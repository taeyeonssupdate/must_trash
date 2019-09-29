import sys
for x in sys.stdin: #x是每次讀入的字串
  i=0
  d={}
  count=[]
  key=[]
  odd=0
  even=0
  for e in range(26): #加26個0
    count.append(0)
  for e in range(26): #加26個字母序0~25
    key.append(e)
  d = dict(zip(key, count)) #兩個list合併成一個字典

  while (i<len(x)):
    if x[i].isalpha(): 
     d[ord(x[i].upper())-ord('A')]+=1   #計算讀到的「該字母」個數
    i+=1  
  for i in range(26):
    if (d[i]%2==0):
      even+=1
    else:
      odd+=1
#  print(odd,even)
#迴文 abba 偶2奇0 abcba 偶2奇1  abccba偶3奇0  abctcba偶 3奇1 a偶0奇1 aa偶1奇0 
#不迴文 cd奇2   abc奇3
  if odd>1  :
    print("no...")
  else:
    print("yes !")
