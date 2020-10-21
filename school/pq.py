import re
import argparse

from termcolor import cprint


class Logic():

    def __init__(self, args):
        self.p = True if not args.p else self.select_bool(args.p)
        self.q = True if not args.q else self.select_bool(args.q)
        self.sentence = None

    def select_bool(self, cache=None):
        if not cache:
            cache = input("Boolean (T/F): ")
        if cache.lower() == "t":
            return True
        elif cache.lower() == "f":
            return False
        else:
            cprint("Wrong input!", "yellow")
            return self.select_bool()


    def netgate_bool(self,bool):
        return not bool

    def run(self):
        sentences = list(re.findall("(p|-p)\s([\>\={or}{and}]+)\s(q|-q)", self.sentence)[0])
        sentences[0] = eval(sentences[0].replace("-", "not ").replace("p", str(self.p)))
        sentences[2] = eval(sentences[2].replace("-", "not ").replace("q", str(self.q)))
        if sentences[1] == ">":
            if sentences[0]:
                answer = sentences[2]
            else:
                answer = not sentences[0]
        elif sentences[1] == "=":
            if sentences[0]:
                answer = sentences[2]
            else:
                answer = not sentences[2]
        else:
            answer = eval("{} {} {}".format(sentences[0], sentences[1], sentences[2]))
        cprint("p: {} q: {}\nsentence: {}\nAnser: {}".format(self.p, self.q, self.sentence, answer), "green")


if __name__ == "__main__":
    prog = "Propositional logic system"
    usage = """Negation not ¬ >>>> -
Disjunction or  ∨ >>>> or
Conjunction and ∧ >>>> and
Implication     → >>>> >
Biconditional   ↔ >>>> =
"""
    description = """用程式計算出命題邏輯"""
    pargs = argparse.ArgumentParser(prog=prog, usage=usage, description=description)
    pargs.add_argument("-p", type=str, help="custom p boolean T/F")
    pargs.add_argument("-q", type=str, help="custom q boolean T/F")
    args = pargs.parse_args()
    logic = Logic(args)
    while True:
        try:
            logic.sentence = input("1.Change p boolean.\n2.Change q boolean.\n3.Input a Sentences.\nPlease input: ")
            if logic.sentence == "1":
                logic.p = logic.netgate_bool(logic.p)
            elif logic.sentence == "2":
                logic.q = logic.netgate_bool(logic.q)
            else:
                logic.run()
        except KeyboardInterrupt:
            print("\nBye~Bye~")
            exit(0)
