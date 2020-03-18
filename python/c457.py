import json
class library():
    def __init__(self):
        self.in_k()
        self.in_n()
    def _in(self):
        return input().strip()
    def in_k(self):
        self.n, self.k = list(map(int,'11 4'.split(' ')))
    def in_n(self):
        self.n_num = list(map(int,'100 90 185 120 80 150 140 180 110 150 50'.split(' ')))
    def money_list(self):
        a = []
        for i in range(x.n-1):
            for j in  range(i,x.n-1):
                if x.n_num[j+1]-x.n_num[i] > 0:
                    a.append(list(map(int,[
                        i,
                        x.n_num[j+1]-x.n_num[i],
                        j+1
                    ])))
        return a
        # return sorted(a,key=lambda b: b[1],reverse=True)
    def selecter(self):
        if x.k == 1:
            self.run_1()

def printer(x):
    print(json.dumps(x,indent=4,ensure_ascii=False))


def test(qwe=0,start=0):
    for i in range(x.k):
        if a[i][0] >= start:
            qwe+=a[i][1]
            print(a[i])
            print(qwe)
            print()
            return test(qwe=qwe,start=a[i][2])

if __name__ == "__main__":
    while True:
        try:
            x = library()
            a = x.money_list()
            # x.selecter()
            test()
            exit(0)

        except KeyboardInterrupt: exit(0)
        except EOFError: exit(0)
#100 90 185 120 80 150 140 180 110 150 50
#100 90 185 120 150 140 110 150 50
"""

"""
