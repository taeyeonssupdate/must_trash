import sys
import math
import argparse


if __name__ == "__main__":
    text = sys.argv[1]
    op1 = int(sys.argv[2])
    op2 = int(sys.argv[3])
    letter_to_number = [ord(letter)-87 if type(letter) == str else int(letter) for letter in text]
    op1_count = sum([word if not i else word*(op1**i) for i, word in enumerate(letter_to_number[::-1])])
    out = []
    while op1_count >= op2:
        out.append(str(op1_count % op2))
        op1_count = math.floor(op1_count/op2)
    out.append(str(op1_count))
    out.reverse()
    print(int(''.join(out)))
