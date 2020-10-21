import math
import argparse


if __name__ == "__main__":
    prase = argparse.ArgumentParser()
    prase.add_argument('-a', required=True, type=str, help="輸入a")
    prase.add_argument('-b', required=True, type=int, help="輸入b")
    prase.add_argument('-c', required=True, type=int, help="輸入c")
    args = prase.parse_args()

    letter_to_int = [ord(letter)-87 if not letter.isdigit() else int(letter) for letter in args.a]
    int_10 = sum([word if not i else word*(args.b**i) for i, word in enumerate(letter_to_int[::-1])])
    out_number_system = []
    while int_10 >= args.c:
        out_number_system.append(str(int_10 % args.c))
        int_10 = math.floor(int_10/args.c)
    out_number_system.append(str(int_10))
    out_number_system.reverse()
    print(''.join([chr(int(letter)+87) if int(letter) > 9 else letter for letter in out_number_system]).upper())
