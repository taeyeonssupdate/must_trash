
#import pyperclip

def main():
	myMessage = 'Common sense is not common to all'
	myKey = 15

	ciphertext = encryptMessage(myKey, myMessage)

	print(ciphertext + '|')

	#pyperclip.copy(ciphertext)
	#pyperclip.copy(ciphertext)


def encryptMessage(key, message):
	ciphertext = ['']*key

	for column in range(key):  # 0 to 7
		currentIndex = column

		while currentIndex < len(message):
			ciphertext[column] += message[currentIndex]

			currentIndex += key

	return ''.join(ciphertext)


if __name__ == '__main__':
	main()
