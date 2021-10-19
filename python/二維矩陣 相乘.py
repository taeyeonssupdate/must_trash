class Matrix(object):

    def __init__(self, mnp):
        self.m, self.n, self.p = mnp

    def create_matrix(self, col: int):
        return [list(map(int, input().split(' '))) for i in range(col)]

    def run(self):
        print("Input matrix A")
        a = self.create_matrix(self.m)
        print("Input matrix B")
        b = self.create_matrix(self.n)

        multiply = []
        result = [list(row) for row in zip(*b)]

        for Al in range(len(a)):
            row = []
            for Bl in range(len(result)):
                num = 0
                for Br in range(len(result[0])):
                    num += a[Al][Br] * result[Bl][Br]
                row.append(num)
            multiply.append(row)

        return multiply


if __name__ == '__main__':
    print(str(Matrix(list(map(int, input("According mxn nxp give m n p: ").split(' ')))).run()))
