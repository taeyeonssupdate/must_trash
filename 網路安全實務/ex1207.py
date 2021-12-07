import random, sys, transpositionEncrypt, transpositionDecrypt #匯入隨機模組,system模組,位移加密模組,位移解密模組
def main(): #main函式
    random.seed(42) #設定種子
    for i in range(20): #for loop i = 0~20
        message = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ' * random.randint(4, 40) #從26個大寫字母重複4~40次
        message = list(message) #把字串變成list 一個一個
        random.shuffle(message) #打亂list
        message = ''.join(message) #join成字串而已
        print('Test #%s: "%s..."' % (i+1, message[:50])) #印出目前No. 測試
        for key in range(1, int(len(message) / 2)): #key = 1~字串的長度的二分之一
            encrypted = transpositionEncrypt.encryptMessage(key, message) #位移加密此key
            decrypted = transpositionDecrypt.decryptMessage(key, encrypted) #位移解密此key
            if message != decrypted: #如果加密的結果跟解密結果不一樣
                print('Mismatch with key %s and message %s.' % (key, message)) #印出不ㄋ匹配的key
                print('Decrypted as: ' + decrypted) #解密的結果
                sys.exit()
    print('Transposition cipher test passed.') #位移加密測試通過
if __name__ == '__main__': #當python執行此程式時執行 當成模組匯入時不會執行
    main() #執行到main